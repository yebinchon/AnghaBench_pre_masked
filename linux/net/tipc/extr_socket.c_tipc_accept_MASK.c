
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_sock {int conn_instance; int conn_type; } ;
struct tipc_msg {int dummy; } ;
struct socket {struct sock* sk; } ;
struct sock {scalar_t__ sk_state; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct msghdr {int * member_0; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct sk_buff*) ;
 int FUNC_2 (struct socket*,struct msghdr*,int ) ;
 struct tipc_msg* FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,int ) ;
 int FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 scalar_t__ FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*) ;
 int FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct sock*) ;
 int FUNC_14 (struct sock*,struct sock*) ;
 struct sk_buff* FUNC_15 (int *) ;
 int FUNC_16 (struct sk_buff*,struct sock*) ;
 int FUNC_17 (struct sock*) ;
 long FUNC_18 (struct sock*,int) ;
 struct tipc_sock* FUNC_19 (struct sock*) ;
 int FUNC_20 (int ,struct socket*,int ,int) ;
 int FUNC_21 (struct tipc_sock*,int ,int ) ;
 int FUNC_22 (struct socket*,long) ;
 int FUNC_23 (struct sock*) ;
 int FUNC_24 (struct sock*) ;
 int FUNC_25 (struct tipc_sock*,int ) ;

__attribute__((used)) static int FUNC_26(struct socket *VAR_4, struct socket *VAR_5, int VAR_6,
         bool VAR_7)
{
 struct sock *VAR_8, *VAR_9 = VAR_4->sk;
 struct sk_buff *VAR_10;
 struct tipc_sock *VAR_11;
 struct tipc_msg *VAR_12;
 long VAR_13;
 int VAR_14;

 FUNC_4(VAR_9);

 if (VAR_9->sk_state != VAR_3) {
  VAR_14 = -VAR_0;
  goto exit;
 }
 VAR_13 = FUNC_18(VAR_9, VAR_6 & VAR_1);
 VAR_14 = FUNC_22(VAR_4, VAR_13);
 if (VAR_14)
  goto exit;

 VAR_10 = FUNC_15(&VAR_9->sk_receive_queue);

 VAR_14 = FUNC_20(FUNC_17(VAR_4->sk), VAR_5, 0, VAR_7);
 if (VAR_14)
  goto exit;
 FUNC_14(VAR_4->sk, VAR_5->sk);

 VAR_8 = VAR_5->sk;
 VAR_11 = FUNC_19(VAR_8);
 VAR_12 = FUNC_3(VAR_10);


 FUNC_5(VAR_8, VAR_2);





 FUNC_24(VAR_8);


 FUNC_21(VAR_11, FUNC_12(VAR_12), FUNC_11(VAR_12));

 FUNC_25(VAR_11, FUNC_7(VAR_12));
 if (FUNC_8(VAR_12)) {
  VAR_11->conn_type = FUNC_10(VAR_12);
  VAR_11->conn_instance = FUNC_9(VAR_12);
 }





 if (!FUNC_6(VAR_12)) {
  struct msghdr VAR_15 = {((void*)0),};

  FUNC_23(VAR_9);
  FUNC_2(VAR_5, &VAR_15, 0);
 } else {
  FUNC_0(&VAR_9->sk_receive_queue);
  FUNC_1(&VAR_8->sk_receive_queue, VAR_10);
  FUNC_16(VAR_10, VAR_8);
 }
 FUNC_13(VAR_8);
exit:
 FUNC_13(VAR_9);
 return VAR_14;
}
