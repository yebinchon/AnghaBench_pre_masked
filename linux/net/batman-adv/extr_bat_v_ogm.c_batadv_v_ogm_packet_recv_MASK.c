
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int * data; scalar_t__ len; } ;
struct ethhdr {int h_source; } ;
struct batadv_priv {TYPE_1__* algo_ops; } ;
struct batadv_ogm2_packet {int tvlv_len; int orig; } ;
struct batadv_hard_iface {int soft_iface; } ;
struct TYPE_2__ {int name; } ;


 int BATADV_CNT_MGMT_RX ;
 int BATADV_CNT_MGMT_RX_BYTES ;
 scalar_t__ BATADV_OGM2_HLEN ;
 scalar_t__ ETH_HLEN ;
 int NET_RX_DROP ;
 int NET_RX_SUCCESS ;
 int batadv_add_counter (struct batadv_priv*,int ,scalar_t__) ;
 int batadv_check_management_packet (struct sk_buff*,struct batadv_hard_iface*,scalar_t__) ;
 int batadv_inc_counter (struct batadv_priv*,int ) ;
 scalar_t__ batadv_is_my_mac (struct batadv_priv*,int ) ;
 scalar_t__ batadv_v_ogm_aggr_packet (int,int ,struct batadv_ogm2_packet*) ;
 int batadv_v_ogm_process (struct sk_buff*,int,struct batadv_hard_iface*) ;
 int consume_skb (struct sk_buff*) ;
 struct ethhdr* eth_hdr (struct sk_buff*) ;
 int kfree_skb (struct sk_buff*) ;
 struct batadv_priv* netdev_priv (int ) ;
 scalar_t__ ntohs (int ) ;
 int skb_headlen (struct sk_buff*) ;
 scalar_t__ strcmp (int ,char*) ;

int batadv_v_ogm_packet_recv(struct sk_buff *skb,
        struct batadv_hard_iface *if_incoming)
{
 struct batadv_priv *bat_priv = netdev_priv(if_incoming->soft_iface);
 struct batadv_ogm2_packet *ogm_packet;
 struct ethhdr *ethhdr = eth_hdr(skb);
 int ogm_offset;
 u8 *packet_pos;
 int ret = NET_RX_DROP;




 if (strcmp(bat_priv->algo_ops->name, "BATMAN_V") != 0)
  goto free_skb;

 if (!batadv_check_management_packet(skb, if_incoming, BATADV_OGM2_HLEN))
  goto free_skb;

 if (batadv_is_my_mac(bat_priv, ethhdr->h_source))
  goto free_skb;

 ogm_packet = (struct batadv_ogm2_packet *)skb->data;

 if (batadv_is_my_mac(bat_priv, ogm_packet->orig))
  goto free_skb;

 batadv_inc_counter(bat_priv, BATADV_CNT_MGMT_RX);
 batadv_add_counter(bat_priv, BATADV_CNT_MGMT_RX_BYTES,
      skb->len + ETH_HLEN);

 ogm_offset = 0;
 ogm_packet = (struct batadv_ogm2_packet *)skb->data;

 while (batadv_v_ogm_aggr_packet(ogm_offset, skb_headlen(skb),
     ogm_packet)) {
  batadv_v_ogm_process(skb, ogm_offset, if_incoming);

  ogm_offset += BATADV_OGM2_HLEN;
  ogm_offset += ntohs(ogm_packet->tvlv_len);

  packet_pos = skb->data + ogm_offset;
  ogm_packet = (struct batadv_ogm2_packet *)packet_pos;
 }

 ret = NET_RX_SUCCESS;

free_skb:
 if (ret == NET_RX_SUCCESS)
  consume_skb(skb);
 else
  kfree_skb(skb);

 return ret;
}
