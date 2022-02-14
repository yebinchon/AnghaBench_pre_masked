
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff_head {int lock; } ;
struct sk_buff {int dummy; } ;
struct net {int dummy; } ;
struct list_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct list_head*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int,int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*) ;
 int FUNC_4 (struct sk_buff_head*) ;
 int FUNC_5 (struct sk_buff_head*,struct sk_buff*) ;
 struct tipc_msg* FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct tipc_msg*) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 scalar_t__ FUNC_10 (struct tipc_msg*) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 scalar_t__ FUNC_12 (struct tipc_msg*) ;
 scalar_t__ FUNC_13 (struct tipc_msg*) ;
 scalar_t__ FUNC_14 (struct tipc_msg*) ;
 int FUNC_15 (struct tipc_msg*,scalar_t__) ;
 int FUNC_16 (struct tipc_msg*) ;
 int FUNC_17 (struct tipc_msg*) ;
 int FUNC_18 (char*) ;
 int FUNC_19 (struct sk_buff*) ;
 struct sk_buff* FUNC_20 (struct sk_buff_head*) ;
 int FUNC_21 (struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (struct list_head*,int *,scalar_t__*) ;
 int FUNC_25 (struct net*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int,struct list_head*) ;
 scalar_t__ FUNC_26 (struct net*) ;
 int FUNC_27 (struct net*,struct sk_buff_head*) ;
 struct sk_buff* FUNC_28 (struct sk_buff_head*,int *) ;

void FUNC_29(struct net *VAR_5, struct sk_buff_head *VAR_6,
         struct sk_buff_head *VAR_7)
{
 u32 VAR_8 = FUNC_26(VAR_5);
 u32 VAR_9, VAR_10, VAR_11, VAR_12;
 struct sk_buff *VAR_13, *VAR_14;
 u32 VAR_15, VAR_16;
 struct sk_buff_head VAR_17;
 struct list_head VAR_18;
 struct tipc_msg *VAR_19;
 int VAR_20, VAR_21, VAR_22;
 bool VAR_23;

 FUNC_3(&VAR_17);
 FUNC_0(&VAR_18);

 VAR_13 = FUNC_28(VAR_6, &VAR_7->lock);
 for (; VAR_13; VAR_13 = FUNC_28(VAR_6, &VAR_7->lock)) {
  VAR_19 = FUNC_6(VAR_13);
  VAR_20 = FUNC_17(VAR_19);
  VAR_21 = FUNC_16(VAR_19);
  VAR_22 = FUNC_19(VAR_13) + FUNC_8(VAR_19);
  VAR_16 = FUNC_14(VAR_19);
  VAR_9 = FUNC_12(VAR_19);

  if (VAR_21 == VAR_3 || VAR_20 == VAR_1) {
   FUNC_22(&VAR_7->lock);
   if (FUNC_20(VAR_6) == VAR_13) {
    FUNC_2(VAR_6);
    FUNC_5(VAR_7, VAR_13);
   }
   FUNC_7(VAR_13);
   FUNC_23(&VAR_7->lock);
   continue;
  }


  if (FUNC_9(VAR_19)) {
   VAR_10 = 0;
   VAR_11 = ~0;
   VAR_12 = FUNC_10(VAR_19);
   VAR_23 = 1;
  } else {

   if (VAR_16 == VAR_8)
    VAR_12 = VAR_4;
   else
    VAR_12 = VAR_2;
   VAR_23 = 0;
   VAR_10 = FUNC_11(VAR_19);
   VAR_11 = FUNC_13(VAR_19);
  }


  FUNC_25(VAR_5, VAR_9, VAR_10, VAR_11,
           VAR_12, VAR_23, &VAR_18);


  while (FUNC_24(&VAR_18, ((void*)0), &VAR_15)) {
   VAR_14 = FUNC_1(VAR_13, VAR_22, VAR_0);
   if (VAR_14) {
    FUNC_15(FUNC_6(VAR_14), VAR_15);
    FUNC_5(&VAR_17, VAR_14);
    continue;
   }
   FUNC_18("Failed to clone mcast rcv buffer\n");
  }

  FUNC_22(&VAR_7->lock);
  if (FUNC_20(VAR_6) == VAR_13) {
   FUNC_21(&VAR_17, VAR_7);
   FUNC_7(FUNC_2(VAR_6));
  }
  FUNC_23(&VAR_7->lock);
  FUNC_4(&VAR_17);
  FUNC_7(VAR_13);
 }
 FUNC_27(VAR_5, VAR_7);
}
