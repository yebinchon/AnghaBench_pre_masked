
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_err; int sk_write_queue; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct bnep_session {TYPE_1__* sock; int terminate; struct net_device* dev; } ;
struct TYPE_2__ {int file; struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct bnep_session*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (struct bnep_session*,struct sk_buff*) ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (struct bnep_session*,struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int ,int) ;
 int FUNC_15 (struct sock*) ;
 struct sk_buff* FUNC_16 (int *) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct net_device*) ;
 int FUNC_20 (int *) ;
 int VAR_6 ;
 int FUNC_21 (int *,int ,int ) ;
 int FUNC_22 (int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_23(void *VAR_8)
{
 struct bnep_session *VAR_9 = VAR_8;
 struct net_device *VAR_10 = VAR_9->dev;
 struct sock *VAR_11 = VAR_9->sock->sk;
 struct sk_buff *VAR_12;
 FUNC_1(VAR_6, VAR_7);

 FUNC_0("");

 FUNC_14(VAR_5, -15);

 FUNC_3(FUNC_15(VAR_11), &VAR_6);
 while (1) {
  if (FUNC_4(&VAR_9->terminate))
   break;

  while ((VAR_12 = FUNC_16(&VAR_11->sk_receive_queue))) {
   FUNC_18(VAR_12);
   if (!FUNC_17(VAR_12))
    FUNC_5(VAR_9, VAR_12);
   else
    FUNC_10(VAR_12);
  }

  if (VAR_11->sk_state != VAR_0)
   break;


  while ((VAR_12 = FUNC_16(&VAR_11->sk_write_queue)))
   if (FUNC_6(VAR_9, VAR_12))
    break;
  FUNC_12(VAR_10);





  FUNC_21(&VAR_6, VAR_3, VAR_2);
 }
 FUNC_13(FUNC_15(VAR_11), &VAR_6);


 FUNC_7(&VAR_4);


 FUNC_19(VAR_10);


 VAR_9->sock->sk->sk_err = VAR_1;

 FUNC_22(FUNC_15(VAR_9->sock->sk));


 FUNC_8(VAR_9->sock->file);

 FUNC_2(VAR_9);

 FUNC_20(&VAR_4);
 FUNC_9(VAR_10);
 FUNC_11(0);
 return 0;
}
