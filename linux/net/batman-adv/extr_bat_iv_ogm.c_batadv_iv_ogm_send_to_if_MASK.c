
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct sk_buff {scalar_t__ len; } ;
struct batadv_priv {int dummy; } ;
struct batadv_ogm_packet {int flags; int tvlv_len; int ttl; int tq; int seqno; int orig; } ;
struct batadv_hard_iface {scalar_t__ if_status; TYPE_1__* net_dev; int soft_iface; } ;
struct batadv_forw_packet {int direct_link_flags; TYPE_2__* skb; int own; struct batadv_hard_iface* if_incoming; int packet_len; } ;
typedef int s16 ;
struct TYPE_4__ {scalar_t__* data; } ;
struct TYPE_3__ {int dev_addr; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (struct batadv_priv*,int ,scalar_t__) ;
 int FUNC_2 (int ,struct batadv_priv*,char*,char const*,char*,int ,int ,int ,int ,char*,int ,int ) ;
 int FUNC_3 (struct batadv_priv*,int ) ;
 scalar_t__ FUNC_4 (int,int ,struct batadv_ogm_packet*) ;
 int FUNC_5 (struct sk_buff*,struct batadv_hard_iface*) ;
 struct batadv_priv* FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 struct sk_buff* FUNC_9 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_10(struct batadv_forw_packet *VAR_8,
         struct batadv_hard_iface *VAR_9)
{
 struct batadv_priv *VAR_10 = FUNC_6(VAR_9->soft_iface);
 const char *VAR_11;
 u8 VAR_12;
 s16 VAR_13;
 struct batadv_ogm_packet *VAR_14;
 struct sk_buff *VAR_15;
 u8 *VAR_16;

 if (VAR_9->if_status != VAR_4)
  return;

 VAR_12 = 0;
 VAR_13 = 0;
 VAR_16 = VAR_8->skb->data;
 VAR_14 = (struct batadv_ogm_packet *)VAR_16;


 while (FUNC_4(VAR_13, VAR_8->packet_len,
      VAR_14)) {



  if (VAR_8->direct_link_flags & FUNC_0(VAR_12) &&
      VAR_8->if_incoming == VAR_9)
   VAR_14->flags |= VAR_3;
  else
   VAR_14->flags &= ~VAR_3;

  if (VAR_12 > 0 || !VAR_8->own)
   VAR_11 = "Forwarding";
  else
   VAR_11 = "Sending own";

  FUNC_2(VAR_2, VAR_10,
      "%s %spacket (originator %pM, seqno %u, TQ %d, TTL %d, IDF %s) on interface %s [%pM]\n",
      VAR_11, (VAR_12 > 0 ? "aggregated " : ""),
      VAR_14->orig,
      FUNC_7(VAR_14->seqno),
      VAR_14->tq, VAR_14->ttl,
      ((VAR_14->flags & VAR_3) ?
       "on" : "off"),
      VAR_9->net_dev->name,
      VAR_9->net_dev->dev_addr);

  VAR_13 += VAR_5;
  VAR_13 += FUNC_8(VAR_14->tvlv_len);
  VAR_12++;
  VAR_16 = VAR_8->skb->data + VAR_13;
  VAR_14 = (struct batadv_ogm_packet *)VAR_16;
 }


 VAR_15 = FUNC_9(VAR_8->skb, VAR_7);
 if (VAR_15) {
  FUNC_3(VAR_10, VAR_0);
  FUNC_1(VAR_10, VAR_1,
       VAR_15->len + VAR_6);
  FUNC_5(VAR_15, VAR_9);
 }
}
