
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u16 ;
struct sock {int dummy; } ;
struct sk_buff {scalar_t__ protocol; int dev; } ;
struct net_bridge_port {scalar_t__ state; int flags; struct net_bridge* br; } ;
struct net_bridge_mdb_entry {int host_joined; } ;
struct net_bridge_fdb_entry {unsigned long used; int dst; scalar_t__ is_local; } ;
struct net_bridge {TYPE_2__* dev; } ;
struct net {int dummy; } ;
struct nd_msg {int dummy; } ;
struct ipv6hdr {int dummy; } ;
typedef enum br_pkt_type { ____Placeholder_br_pkt_type } br_pkt_type ;
struct TYPE_11__ {int src_port_isolated; TYPE_2__* brdev; } ;
struct TYPE_10__ {int h_dest; int h_source; } ;
struct TYPE_9__ {scalar_t__ nexthdr; } ;
struct TYPE_7__ {int multicast; } ;
struct TYPE_8__ {int flags; TYPE_1__ stats; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct net_bridge*,int ,struct sk_buff*,int *) ;
 int FUNC_4 (struct sk_buff*,struct net_bridge*,int ,struct net_bridge_port*) ;
 int FUNC_5 (struct sk_buff*,struct net_bridge*,int ,struct net_bridge_port*,struct nd_msg*) ;
 struct net_bridge_fdb_entry* FUNC_6 (struct net_bridge*,int ,int ) ;
 int FUNC_7 (struct net_bridge*,struct net_bridge_port*,int ,int ,int) ;
 int FUNC_8 (struct net_bridge*,struct sk_buff*,int,int,int) ;
 int FUNC_9 (int ,struct sk_buff*,int,int) ;
 struct nd_msg* FUNC_10 (struct sk_buff*,struct nd_msg*) ;
 struct net_bridge_mdb_entry* FUNC_11 (struct net_bridge*,struct sk_buff*,int ) ;
 int FUNC_12 (struct net_bridge_mdb_entry*,struct sk_buff*,int,int) ;
 int FUNC_13 (struct net_bridge*) ;
 int FUNC_14 (struct net_bridge*,TYPE_4__*) ;
 scalar_t__ FUNC_15 (struct net_bridge*,struct net_bridge_port*,struct sk_buff*,int ) ;
 scalar_t__ FUNC_16 (struct net_bridge*,int ) ;
 int FUNC_17 (struct sk_buff*) ;
 struct net_bridge_port* FUNC_18 (int ) ;
 TYPE_4__* FUNC_19 (struct sk_buff*) ;
 scalar_t__ FUNC_20 (int ) ;
 TYPE_3__* FUNC_21 (struct sk_buff*) ;
 scalar_t__ FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ) ;
 unsigned long VAR_13 ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct net_bridge_port*,struct sk_buff*) ;
 int FUNC_26 (struct net_bridge_port*) ;
 scalar_t__ FUNC_27 (struct sk_buff*,int) ;

int FUNC_28(struct net *VAR_14, struct sock *VAR_15, struct sk_buff *VAR_16)
{
 struct net_bridge_port *VAR_17 = FUNC_18(VAR_16->dev);
 enum br_pkt_type VAR_18 = 128;
 struct net_bridge_fdb_entry *VAR_19 = ((void*)0);
 struct net_bridge_mdb_entry *VAR_20;
 bool VAR_21, VAR_22 = 0;
 struct net_bridge *VAR_23;
 u16 VAR_24 = 0;

 if (!VAR_17 || VAR_17->state == VAR_4)
  goto drop;

 if (!FUNC_3(VAR_17->br, FUNC_26(VAR_17), VAR_16, &VAR_24))
  goto out;

 FUNC_25(VAR_17, VAR_16);


 VAR_23 = VAR_17->br;
 if (VAR_17->flags & VAR_2)
  FUNC_7(VAR_23, VAR_17, FUNC_19(VAR_16)->h_source, VAR_24, 0);

 VAR_21 = !!(VAR_23->dev->flags & VAR_11);
 if (FUNC_23(FUNC_19(VAR_16)->h_dest)) {

  if (FUNC_22(FUNC_19(VAR_16)->h_dest)) {
   VAR_18 = VAR_3;
   VAR_21 = 1;
  } else {
   VAR_18 = 129;
   if (FUNC_15(VAR_23, VAR_17, VAR_16, VAR_24))
    goto drop;
  }
 }

 if (VAR_17->state == VAR_5)
  goto drop;

 FUNC_0(VAR_16)->brdev = VAR_23->dev;
 FUNC_0(VAR_16)->src_port_isolated = !!(VAR_17->flags & VAR_1);

 if (FUNC_2(VAR_6) &&
     (VAR_16->protocol == FUNC_20(VAR_8) ||
      VAR_16->protocol == FUNC_20(VAR_10))) {
  FUNC_4(VAR_16, VAR_23, VAR_24, VAR_17);
 } else if (FUNC_2(VAR_7) &&
     VAR_16->protocol == FUNC_20(VAR_9) &&
     FUNC_16(VAR_23, VAR_0) &&
     FUNC_27(VAR_16, sizeof(struct ipv6hdr) +
     sizeof(struct nd_msg)) &&
     FUNC_21(VAR_16)->nexthdr == VAR_12) {
   struct nd_msg *VAR_25, VAR_26;

   VAR_25 = FUNC_10(VAR_16, &VAR_26);
   if (VAR_25)
    FUNC_5(VAR_16, VAR_23, VAR_24, VAR_17, VAR_25);
 }

 switch (VAR_18) {
 case 129:
  VAR_20 = FUNC_11(VAR_23, VAR_16, VAR_24);
  if ((VAR_20 || FUNC_1(VAR_16)) &&
      FUNC_14(VAR_23, FUNC_19(VAR_16))) {
   if ((VAR_20 && VAR_20->host_joined) ||
       FUNC_13(VAR_23)) {
    VAR_21 = 1;
    VAR_23->dev->stats.multicast++;
   }
   VAR_22 = 1;
  } else {
   VAR_21 = 1;
   VAR_23->dev->stats.multicast++;
  }
  break;
 case 128:
  VAR_19 = FUNC_6(VAR_23, FUNC_19(VAR_16)->h_dest, VAR_24);
 default:
  break;
 }

 if (VAR_19) {
  unsigned long VAR_27 = VAR_13;

  if (VAR_19->is_local)
   return FUNC_17(VAR_16);

  if (VAR_27 != VAR_19->used)
   VAR_19->used = VAR_27;
  FUNC_9(VAR_19->dst, VAR_16, VAR_21, 0);
 } else {
  if (!VAR_22)
   FUNC_8(VAR_23, VAR_16, VAR_18, VAR_21, 0);
  else
   FUNC_12(VAR_20, VAR_16, VAR_21, 0);
 }

 if (VAR_21)
  return FUNC_17(VAR_16);

out:
 return 0;
drop:
 FUNC_24(VAR_16);
 goto out;
}
