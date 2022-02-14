
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ethhdr {int * h_source; } ;
struct batadv_priv {int dummy; } ;
struct batadv_orig_node {int dummy; } ;
struct batadv_orig_ifinfo {scalar_t__ last_real_seqno; int last_ttl; } ;
struct batadv_ogm_packet {scalar_t__ tq; int ttl; int seqno; int * orig; int * prev_sender; } ;
struct batadv_neigh_node {int * addr; struct batadv_orig_node* orig_node; } ;
struct TYPE_2__ {scalar_t__ tq_avg; } ;
struct batadv_neigh_ifinfo {TYPE_1__ bat_iv; } ;
struct batadv_hardif_neigh_node {int last_seen; } ;
struct batadv_hard_iface {int soft_iface; } ;
typedef enum batadv_dup_status { ____Placeholder_batadv_dup_status } batadv_dup_status ;


 int VAR_0 ;
 struct batadv_hard_iface* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct batadv_priv*,char*,...) ;
 struct batadv_hardif_neigh_node* FUNC_2 (struct batadv_hard_iface*,int *) ;
 int FUNC_3 (struct batadv_hardif_neigh_node*) ;
 int FUNC_4 (struct batadv_orig_node*,struct batadv_orig_node*,struct batadv_ogm_packet*,struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 int FUNC_5 (struct batadv_orig_node*,struct ethhdr*,struct batadv_ogm_packet*,int,int,struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 struct batadv_orig_node* FUNC_6 (struct batadv_priv*,int *) ;
 int FUNC_7 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_orig_ifinfo*,struct ethhdr*,struct batadv_ogm_packet*,struct batadv_hard_iface*,struct batadv_hard_iface*,int) ;
 int FUNC_8 (struct ethhdr*,struct batadv_ogm_packet*,struct batadv_hard_iface*,struct batadv_hard_iface*) ;
 int FUNC_9 (struct batadv_priv*,struct batadv_orig_node*,struct batadv_orig_node*,struct batadv_ogm_packet*,int) ;
 struct batadv_neigh_ifinfo* FUNC_10 (struct batadv_neigh_node*,struct batadv_hard_iface*) ;
 int FUNC_11 (struct batadv_neigh_ifinfo*) ;
 int FUNC_12 (struct batadv_neigh_node*) ;
 struct batadv_orig_ifinfo* FUNC_13 (struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_14 (struct batadv_orig_ifinfo*) ;
 int FUNC_15 (struct batadv_orig_node*) ;
 struct batadv_neigh_node* FUNC_16 (struct batadv_orig_node*,struct batadv_hard_iface*) ;
 int FUNC_17 (struct batadv_priv*,struct batadv_ogm_packet*,struct batadv_orig_node*) ;
 int FUNC_18 (struct sk_buff*) ;
 struct ethhdr* FUNC_19 (struct sk_buff*) ;
 int VAR_6 ;
 struct batadv_priv* FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 struct sk_buff* FUNC_22 (struct sk_buff const*,int ) ;

__attribute__((used)) static void
FUNC_23(const struct sk_buff *VAR_7, int VAR_8,
    struct batadv_orig_node *VAR_9,
    struct batadv_hard_iface *VAR_10,
    struct batadv_hard_iface *VAR_11)
{
 struct batadv_priv *VAR_12 = FUNC_20(VAR_10->soft_iface);
 struct batadv_hardif_neigh_node *VAR_13 = ((void*)0);
 struct batadv_neigh_node *VAR_14 = ((void*)0);
 struct batadv_neigh_node *VAR_15 = ((void*)0);
 struct batadv_orig_node *VAR_16;
 struct batadv_orig_ifinfo *VAR_17;
 struct batadv_neigh_node *VAR_18 = ((void*)0);
 struct batadv_neigh_ifinfo *VAR_19 = ((void*)0);
 struct batadv_ogm_packet *VAR_20;
 enum batadv_dup_status VAR_21;
 bool VAR_22 = 0;
 bool VAR_23 = 0;
 bool VAR_24, VAR_25;
 struct sk_buff *VAR_26;
 struct ethhdr *VAR_27;
 u8 *VAR_28;
 bool VAR_29;




 VAR_26 = FUNC_22(VAR_7, VAR_5);
 if (!VAR_26)
  return;

 VAR_27 = FUNC_19(VAR_26);
 VAR_20 = (struct batadv_ogm_packet *)(VAR_26->data + VAR_8);

 VAR_21 = FUNC_8(VAR_27, VAR_20,
       VAR_10, VAR_11);
 if (FUNC_0(VAR_27->h_source, VAR_20->orig))
  VAR_23 = 1;

 if (VAR_21 == VAR_4) {
  FUNC_1(VAR_0, VAR_12,
      "Drop packet: packet within seqno protection time (sender: %pM)\n",
      VAR_27->h_source);
  goto out;
 }

 if (VAR_20->tq == 0) {
  FUNC_1(VAR_0, VAR_12,
      "Drop packet: originator packet with tq equal 0\n");
  goto out;
 }

 if (VAR_23) {
  VAR_13 = FUNC_2(VAR_10,
             VAR_27->h_source);
  if (VAR_13)
   VAR_13->last_seen = VAR_6;
 }

 VAR_14 = FUNC_16(VAR_9, VAR_11);
 if (VAR_14) {
  VAR_15 = FUNC_16(VAR_14->orig_node,
             VAR_11);
  VAR_19 = FUNC_10(VAR_14, VAR_11);
 }

 if ((VAR_19 && VAR_19->bat_iv.tq_avg != 0) &&
     (FUNC_0(VAR_14->addr, VAR_27->h_source)))
  VAR_22 = 1;

 VAR_28 = VAR_20->prev_sender;

 if (VAR_14 && VAR_15 &&
     (FUNC_0(VAR_14->addr, VAR_28)) &&
     !(FUNC_0(VAR_20->orig, VAR_28)) &&
     (FUNC_0(VAR_14->addr, VAR_15->addr))) {
  FUNC_1(VAR_0, VAR_12,
      "Drop packet: ignoring all rebroadcast packets that may make me loop (sender: %pM)\n",
      VAR_27->h_source);
  goto out;
 }

 if (VAR_11 == VAR_1)
  FUNC_17(VAR_12, VAR_20, VAR_9);




 if (VAR_23)
  VAR_16 = VAR_9;
 else
  VAR_16 = FUNC_6(VAR_12,
        VAR_27->h_source);

 if (!VAR_16)
  goto out;


 FUNC_9(VAR_12, VAR_9, VAR_16,
     VAR_20, VAR_23);

 VAR_18 = FUNC_16(VAR_16,
         VAR_11);




 if (!VAR_23 && !VAR_18) {
  FUNC_1(VAR_0, VAR_12,
      "Drop packet: OGM via unknown neighbor!\n");
  goto out_neigh;
 }

 VAR_29 = FUNC_4(VAR_9, VAR_16,
         VAR_20, VAR_10,
         VAR_11);




 VAR_17 = FUNC_13(VAR_9, VAR_11);
 if (!VAR_17)
  goto out_neigh;

 VAR_24 = VAR_17->last_real_seqno == FUNC_21(VAR_20->seqno);
 VAR_25 = (VAR_17->last_ttl - 3) <= VAR_20->ttl;

 if (VAR_29 && (VAR_21 == VAR_3 ||
       (VAR_24 && VAR_25))) {
  FUNC_7(VAR_12, VAR_9,
       VAR_17, VAR_27,
       VAR_20, VAR_10,
       VAR_11, VAR_21);
 }
 FUNC_14(VAR_17);


 if (VAR_11 == VAR_1)
  goto out_neigh;


 if (VAR_23) {



  if (VAR_20->ttl <= 2 &&
      VAR_10 != VAR_11) {
   FUNC_1(VAR_0, VAR_12,
       "Drop packet: OGM from secondary interface and wrong outgoing interface\n");
   goto out_neigh;
  }

  FUNC_5(VAR_9, VAR_27, VAR_20,
          VAR_23,
          VAR_22, VAR_10,
          VAR_11);

  FUNC_1(VAR_0, VAR_12,
      "Forwarding packet: rebroadcast neighbor packet with direct link flag\n");
  goto out_neigh;
 }


 if (!VAR_29) {
  FUNC_1(VAR_0, VAR_12,
      "Drop packet: not received via bidirectional link\n");
  goto out_neigh;
 }

 if (VAR_21 == VAR_2) {
  FUNC_1(VAR_0, VAR_12,
      "Drop packet: duplicate packet received\n");
  goto out_neigh;
 }

 FUNC_1(VAR_0, VAR_12,
     "Forwarding packet: rebroadcast originator packet\n");
 FUNC_5(VAR_9, VAR_27, VAR_20,
         VAR_23, VAR_22,
         VAR_10, VAR_11);

out_neigh:
 if (VAR_16 && !VAR_23)
  FUNC_15(VAR_16);
out:
 if (VAR_19)
  FUNC_11(VAR_19);
 if (VAR_14)
  FUNC_12(VAR_14);
 if (VAR_15)
  FUNC_12(VAR_15);
 if (VAR_18)
  FUNC_12(VAR_18);
 if (VAR_13)
  FUNC_3(VAR_13);

 FUNC_18(VAR_26);
}
