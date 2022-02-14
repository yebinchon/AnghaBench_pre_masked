
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct tipc_member {int state; int bc_rcv_nxt; struct sk_buff_head deferredq; int instance; } ;
struct tipc_group {int events; int instance; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int orig_member; } ;


 int VAR_0 ;
 int VAR_1 ;




 TYPE_1__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (struct tipc_msg*) ;
 int FUNC_15 (struct tipc_msg*) ;
 struct sk_buff* FUNC_16 (struct sk_buff_head*) ;
 int FUNC_17 (struct tipc_group*,struct tipc_member*) ;
 struct tipc_member* FUNC_18 (struct tipc_group*,int ,int ) ;
 int FUNC_19 (struct tipc_member*) ;
 int FUNC_20 (struct tipc_group*,struct tipc_member*,int ,struct sk_buff_head*) ;
 int FUNC_21 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_22 (struct tipc_group*,int,int ,int ,struct sk_buff_head*) ;

void FUNC_23(struct tipc_group *VAR_2, struct sk_buff_head *VAR_3,
      struct sk_buff_head *VAR_4)
{
 struct sk_buff *VAR_5 = FUNC_1(VAR_3);
 bool VAR_6, VAR_7, VAR_8, VAR_9 = 0;
 struct sk_buff_head *VAR_10;
 struct tipc_member *VAR_11;
 struct tipc_msg *VAR_12;
 u32 VAR_13, VAR_14;
 int VAR_15, VAR_16;

 if (!VAR_5)
  return;

 VAR_12 = FUNC_4(VAR_5);
 VAR_13 = FUNC_13(VAR_12);
 VAR_14 = FUNC_14(VAR_12);

 if (!FUNC_11(VAR_12))
  goto drop;

 VAR_11 = FUNC_18(VAR_2, VAR_13, VAR_14);
 if (!FUNC_19(VAR_11))
  goto drop;

 if (FUNC_6(FUNC_10(VAR_12), VAR_11->bc_rcv_nxt))
  goto drop;

 FUNC_0(VAR_5)->orig_member = VAR_11->instance;
 VAR_10 = &VAR_11->deferredq;
 FUNC_21(VAR_5, VAR_10);

 while ((VAR_5 = FUNC_16(VAR_10))) {
  VAR_12 = FUNC_4(VAR_5);
  VAR_15 = FUNC_15(VAR_12);
  VAR_16 = FUNC_8(VAR_12);
  VAR_7 = 1;
  VAR_6 = 0;
  VAR_8 = 0;

  if (FUNC_7(FUNC_10(VAR_12), VAR_11->bc_rcv_nxt))
   break;


  switch (VAR_15) {
  case 130:
   if (FUNC_12(VAR_12) != VAR_2->instance) {
    VAR_8 = 1;
    VAR_7 = 0;
   }

  case 131:
   VAR_11->bc_rcv_nxt++;
   VAR_6 = FUNC_9(VAR_12);
   break;
  case 128:
   break;
  case 129:
   if (VAR_11->state == VAR_1)
    VAR_9 = 1;
   if (!VAR_2->events)
    VAR_7 = 0;
   break;
  default:
   break;
  }


  FUNC_1(VAR_10);
  if (VAR_7)
   FUNC_3(VAR_3, VAR_5);
  else
   FUNC_5(VAR_5);

  if (VAR_6)
   FUNC_20(VAR_2, VAR_11, VAR_0, VAR_4);

  if (VAR_9) {
   FUNC_2(VAR_10);
   FUNC_17(VAR_2, VAR_11);
   break;
  }
  if (!VAR_8)
   continue;

  FUNC_22(VAR_2, VAR_16, VAR_13, VAR_14, VAR_4);
 }
 return;
drop:
 FUNC_5(VAR_5);
}
