
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int deferredq; } ;
struct tipc_sock {TYPE_1__ mc_method; struct tipc_group* group; } ;
struct tipc_msg {int dummy; } ;
struct tipc_group {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sock {int (* sk_data_ready ) (struct sock*) ;struct sk_buff_head sk_receive_queue; int sk_drops; } ;
struct sk_buff {int truesize; } ;
struct net {int dummy; } ;
struct TYPE_4__ {scalar_t__ bytes_read; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_2__* FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sk_buff_head*) ;
 int FUNC_2 (struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_4 (int *) ;
 struct tipc_msg* FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 scalar_t__ FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct sock*,struct sk_buff*) ;
 int FUNC_11 (struct sock*) ;
 int FUNC_12 (struct sk_buff*,struct sock*) ;
 struct net* FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*) ;
 int FUNC_15 (struct tipc_group*,struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_16 (struct net*,int *,struct sk_buff_head*) ;
 scalar_t__ FUNC_17 (int ,struct sk_buff**,int) ;
 int FUNC_18 (struct net*) ;
 struct tipc_sock* FUNC_19 (struct sock*) ;
 int FUNC_20 (struct tipc_sock*,struct sk_buff*) ;
 int FUNC_21 (struct sock*,struct sk_buff_head*,struct sk_buff_head*) ;
 int FUNC_22 (struct sock*) ;
 int FUNC_23 (struct sock*,struct sk_buff*,int ,char*) ;
 int FUNC_24 (struct sock*,struct sk_buff*,int ,char*) ;
 int FUNC_25 (struct sock*,struct sk_buff*,int ,char*) ;
 int FUNC_26 (struct sock*,struct sk_buff*,int ,char*) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static void FUNC_28(struct sock *VAR_6, struct sk_buff *VAR_7,
          struct sk_buff_head *VAR_8)
{
 bool VAR_9 = !FUNC_22(VAR_6);
 struct tipc_sock *VAR_10 = FUNC_19(VAR_6);
 struct tipc_group *VAR_11 = VAR_10->group;
 struct tipc_msg *VAR_12 = FUNC_5(VAR_7);
 struct net *VAR_13 = FUNC_13(VAR_6);
 struct sk_buff_head VAR_14;
 int VAR_15 = FUNC_9(VAR_12);
 int VAR_16, VAR_17 = VAR_5;

 FUNC_24(VAR_6, VAR_7, VAR_0, " ");
 FUNC_0(VAR_7)->bytes_read = 0;
 FUNC_2(&VAR_14);
 FUNC_3(&VAR_14, VAR_7);

 if (FUNC_27(!FUNC_8(VAR_12)))
  FUNC_21(VAR_6, &VAR_14, VAR_8);

 if (FUNC_27(VAR_11))
  FUNC_15(VAR_11, &VAR_14, VAR_8);

 if (FUNC_27(!VAR_11) && VAR_15 == VAR_4)
  FUNC_16(VAR_13, &VAR_10->mc_method.deferredq, &VAR_14);


 while ((VAR_7 = FUNC_1(&VAR_14))) {
  VAR_12 = FUNC_5(VAR_7);
  VAR_16 = FUNC_10(VAR_6, VAR_7);
  if ((VAR_9 && !FUNC_20(VAR_10, VAR_7)) ||
      (!VAR_9 && FUNC_6(VAR_12)) ||
      (!VAR_11 && FUNC_7(VAR_12)))
   VAR_17 = VAR_2;
  else if (FUNC_11(VAR_6) + VAR_7->truesize >= VAR_16) {
   FUNC_23(VAR_6, VAR_7, VAR_0,
        "err_overload2!");
   FUNC_4(&VAR_6->sk_drops);
   VAR_17 = VAR_3;
  }

  if (FUNC_27(VAR_17)) {
   if (FUNC_17(FUNC_18(VAR_13), &VAR_7, VAR_17)) {
    FUNC_26(VAR_6, VAR_7, VAR_1,
            "@filter_rcv!");
    FUNC_3(VAR_8, VAR_7);
   }
   VAR_17 = VAR_5;
   continue;
  }
  FUNC_3(&VAR_6->sk_receive_queue, VAR_7);
  FUNC_12(VAR_7, VAR_6);
  FUNC_25(VAR_6, VAR_7, VAR_0,
      "rcvq >90% allocated!");
  VAR_6->sk_data_ready(VAR_6);
 }
}
