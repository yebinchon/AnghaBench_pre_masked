
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff_head {int dummy; } ;
struct TYPE_3__ {struct sk_buff_head inputq1; struct sk_buff_head namedq; int link; } ;
struct tipc_node {scalar_t__ state; TYPE_1__ bc_entry; struct tipc_link_entry* links; } ;
struct tipc_msg {int dummy; } ;
struct tipc_link_entry {int maddr; struct sk_buff_head inputq; scalar_t__ link; int lock; } ;
struct tipc_bearer {int identity; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct TYPE_4__ {int validated; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_1 (struct sk_buff_head*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (struct sk_buff_head*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct net*,int ,struct tipc_msg*) ;
 int FUNC_16 (struct net*,int,struct sk_buff_head*,int *) ;
 void FUNC_17 (struct net*,struct sk_buff*,struct tipc_bearer*) ;
 scalar_t__ FUNC_18 (int ) ;
 int FUNC_19 (scalar_t__,struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_20 (struct sk_buff**) ;
 int FUNC_21 (struct net*,struct sk_buff_head*) ;
 void FUNC_22 (struct net*,struct sk_buff*,int) ;
 int FUNC_23 (struct tipc_node*,struct tipc_msg*,int,struct sk_buff_head*) ;
 scalar_t__ FUNC_24 (struct tipc_node*,struct sk_buff*,int,struct sk_buff_head*) ;
 struct tipc_node* FUNC_25 (struct net*,int ) ;
 int FUNC_26 (struct tipc_node*,int,int) ;
 int FUNC_27 (struct tipc_node*,int,struct sk_buff_head*) ;
 int FUNC_28 (struct tipc_node*) ;
 int FUNC_29 (struct tipc_node*) ;
 int FUNC_30 (struct tipc_node*) ;
 int FUNC_31 (struct tipc_node*) ;
 int FUNC_32 (struct tipc_node*) ;
 int FUNC_33 (struct tipc_node*) ;
 scalar_t__ FUNC_34 (struct net*) ;
 int FUNC_35 (struct net*,struct sk_buff_head*) ;
 scalar_t__ FUNC_36 (int) ;

void FUNC_37(struct net *VAR_6, struct sk_buff *VAR_7, struct tipc_bearer *VAR_8)
{
 struct sk_buff_head VAR_9;
 struct tipc_node *VAR_10;
 struct tipc_msg *VAR_11;
 int VAR_12 = VAR_8->identity;
 struct tipc_link_entry *VAR_13;
 u32 VAR_14 = FUNC_34(VAR_6);
 int VAR_15, VAR_16 = 0;
 u16 VAR_17;

 FUNC_1(&VAR_9);


 FUNC_0(VAR_7)->validated = 0;
 if (FUNC_36(!FUNC_20(&VAR_7)))
  goto discard;
 VAR_11 = FUNC_2(VAR_7);
 VAR_15 = FUNC_10(VAR_11);
 VAR_17 = FUNC_5(VAR_11);


 if (FUNC_36(FUNC_7(VAR_11))) {
  if (FUNC_36(VAR_15 == VAR_0))
   return FUNC_17(VAR_6, VAR_7, VAR_8);
  else
   return FUNC_22(VAR_6, VAR_7, VAR_12);
 }


 if (FUNC_36(!FUNC_9(VAR_11) && (FUNC_6(VAR_11) != VAR_14)))
  goto discard;


 VAR_10 = FUNC_25(VAR_6, FUNC_8(VAR_11));
 if (FUNC_36(!VAR_10))
  goto discard;
 VAR_13 = &VAR_10->links[VAR_12];


 if (FUNC_36(VAR_15 == VAR_1))
  FUNC_23(VAR_10, VAR_11, VAR_12, &VAR_9);
 else if (FUNC_36(FUNC_18(VAR_10->bc_entry.link) != VAR_17))
  FUNC_15(VAR_6, VAR_10->bc_entry.link, VAR_11);


 FUNC_30(VAR_10);
 if (FUNC_4((VAR_10->state == VAR_2) && (VAR_15 != VAR_5))) {
  FUNC_13(&VAR_13->lock);
  if (VAR_13->link) {
   VAR_16 = FUNC_19(VAR_13->link, VAR_7, &VAR_9);
   VAR_7 = ((void*)0);
  }
  FUNC_14(&VAR_13->lock);
 }
 FUNC_31(VAR_10);


 if (FUNC_36(VAR_7)) {
  if (FUNC_36(FUNC_11(VAR_7)))
   goto discard;
  FUNC_32(VAR_10);
  if (FUNC_24(VAR_10, VAR_7, VAR_12, &VAR_9)) {
   if (VAR_13->link) {
    VAR_16 = FUNC_19(VAR_13->link, VAR_7, &VAR_9);
    VAR_7 = ((void*)0);
   }
  }
  FUNC_33(VAR_10);
 }

 if (FUNC_36(VAR_16 & VAR_4))
  FUNC_27(VAR_10, VAR_12, &VAR_9);

 if (FUNC_36(VAR_16 & VAR_3))
  FUNC_26(VAR_10, VAR_12, 0);

 if (FUNC_36(!FUNC_12(&VAR_10->bc_entry.namedq)))
  FUNC_21(VAR_6, &VAR_10->bc_entry.namedq);

 if (FUNC_36(!FUNC_12(&VAR_10->bc_entry.inputq1)))
  FUNC_28(VAR_10);

 if (!FUNC_12(&VAR_13->inputq))
  FUNC_35(VAR_6, &VAR_13->inputq);

 if (!FUNC_12(&VAR_9))
  FUNC_16(VAR_6, VAR_12, &VAR_9, &VAR_13->maddr);

 FUNC_29(VAR_10);
discard:
 FUNC_3(VAR_7);
}
