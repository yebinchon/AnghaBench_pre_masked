
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct tipc_node {int state; int sync_point; int capabilities; TYPE_1__* links; } ;
struct tipc_msg {int dummy; } ;
struct tipc_media_addr {int dummy; } ;
struct tipc_link {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct tipc_link* link; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (struct tipc_node*,int*,struct sk_buff_head*,struct tipc_media_addr**) ;
 int FUNC_1 (struct tipc_node*,int,struct sk_buff_head*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int,int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int,int) ;
 struct tipc_msg* FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (struct tipc_link*,int ) ;
 int FUNC_16 (struct tipc_link*) ;
 int FUNC_17 (struct tipc_link*) ;
 scalar_t__ FUNC_18 (struct tipc_link*) ;
 scalar_t__ FUNC_19 (struct tipc_link*) ;
 int FUNC_20 (struct tipc_link*) ;
 int FUNC_21 (struct tipc_link*,struct tipc_msg*) ;
 int FUNC_22 (struct tipc_node*,int ) ;
 int FUNC_23 (struct tipc_node*,struct tipc_link*,struct tipc_link*,struct sk_buff_head*) ;
 int FUNC_24 (int ,int ) ;
 int FUNC_25 (struct tipc_link*,int ,char*) ;
 int FUNC_26 (struct tipc_node*,int,char*) ;
 scalar_t__ FUNC_27 () ;
 int FUNC_28 (struct tipc_node*,int,char*) ;
 int FUNC_29 (struct sk_buff*,int,char*) ;

__attribute__((used)) static bool FUNC_30(struct tipc_node *VAR_21, struct sk_buff *VAR_22,
      int VAR_23, struct sk_buff_head *VAR_24)
{
 struct tipc_msg *VAR_25 = FUNC_2(VAR_22);
 int VAR_26 = FUNC_13(VAR_25);
 int VAR_27 = FUNC_12(VAR_25);
 u16 VAR_28 = FUNC_10(VAR_25);
 u16 VAR_29 = FUNC_7(VAR_25);
 u16 VAR_30, VAR_31, VAR_32, VAR_33;
 int VAR_34 = VAR_21->state;
 struct tipc_link *VAR_35, *VAR_36, *VAR_37 = ((void*)0);
 struct tipc_media_addr *VAR_38;
 int VAR_39;

 if (FUNC_27()) {
  FUNC_29(VAR_22, 0, "skb for node state check");
  FUNC_26(VAR_21, 1, " ");
 }
 VAR_35 = VAR_21->links[VAR_23].link;
 if (!VAR_35)
  return 0;
 VAR_30 = FUNC_20(VAR_35);


 if (FUNC_4((VAR_34 == VAR_16) && (VAR_26 != VAR_20)))
  return 1;


 for (VAR_39 = 0; VAR_39 < VAR_5; VAR_39++) {
  if ((VAR_39 != VAR_23) && VAR_21->links[VAR_39].link) {
   VAR_37 = VAR_21->links[VAR_39].link;
   break;
  }
 }

 if (!FUNC_21(VAR_35, VAR_25)) {
  FUNC_29(VAR_22, 0, "PROTO invalid (2)!");
  FUNC_25(VAR_35, VAR_18, "PROTO invalid (2)!");
  return 0;
 }


 if (VAR_34 == VAR_15) {
  if (!FUNC_19(VAR_35))
   return 1;
  if (!FUNC_8(VAR_25))
   return 1;
  FUNC_22(VAR_21, VAR_11);
 }

 if (VAR_34 == VAR_13) {
  if (FUNC_9(VAR_25))
   return 0;
  FUNC_22(VAR_21, VAR_12);
  return 1;
 }

 if (VAR_34 == VAR_14)
  return 0;


 if ((VAR_26 != VAR_2) && FUNC_3(VAR_28, VAR_30))
  return 1;


 if ((VAR_26 == VAR_20) && (VAR_27 == VAR_0)) {
  VAR_31 = VAR_28 + VAR_29 - 1;
  if (VAR_37 && !FUNC_17(VAR_37)) {
   FUNC_0(VAR_21, &VAR_39, VAR_24, &VAR_38);
   FUNC_28(VAR_21, 1,
        "node link down <- failover!");
   FUNC_24(FUNC_16(VAR_37),
       FUNC_16(VAR_35));
  }







  if (VAR_21->state != VAR_6)
   FUNC_23(VAR_21, VAR_37, VAR_35, VAR_24);


  if (FUNC_3(VAR_31, VAR_21->sync_point))
   VAR_21->sync_point = VAR_31;
 }


 if ((VAR_21->state == VAR_6) && FUNC_19(VAR_35)) {
  if (!FUNC_5(VAR_30, VAR_21->sync_point))
   return 1;
  FUNC_22(VAR_21, VAR_7);
  if (VAR_37)
   FUNC_15(VAR_37, VAR_1);
  return 1;
 }


 if (!VAR_37 || !FUNC_19(VAR_37))
  return 1;


 if ((VAR_26 == VAR_20) && (VAR_27 == VAR_17) && (VAR_28 == 1)) {
  if (VAR_21->capabilities & VAR_19)
   VAR_31 = FUNC_11(VAR_25);
  else
   VAR_31 = FUNC_10(FUNC_6(VAR_25)) + VAR_29 - 1;
  if (!FUNC_19(VAR_35))
   FUNC_1(VAR_21, VAR_23, VAR_24);
  if (VAR_21->state == VAR_16) {
   VAR_21->sync_point = VAR_31;
   FUNC_15(VAR_35, VAR_3);
   FUNC_22(VAR_21, VAR_9);
  }
 }


 if (VAR_21->state == VAR_8) {
  if (FUNC_18(VAR_35)) {
   VAR_36 = VAR_35;
  } else {
   VAR_36 = VAR_37;
   VAR_37 = VAR_35;
  }
  VAR_33 = FUNC_14(FUNC_16(VAR_37));
  VAR_32 = FUNC_20(VAR_37) - VAR_33;
  if (FUNC_5(VAR_32, VAR_21->sync_point)) {
   FUNC_15(VAR_36, VAR_4);
   FUNC_22(VAR_21, VAR_10);
   return 1;
  }
  if (VAR_35 == VAR_37)
   return 1;
  if ((VAR_26 == VAR_20) && (VAR_27 == VAR_17))
   return 1;
  if (VAR_26 == VAR_2)
   return 1;
  return 0;
 }
 return 1;
}
