
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct hidp_session {int terminate; TYPE_1__* ctrl_sock; int ctrl_transmit; TYPE_1__* intr_sock; int intr_transmit; } ;
struct TYPE_2__ {struct sock* sk; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (struct hidp_session*,int *,TYPE_1__*) ;
 int FUNC_5 (struct hidp_session*,struct sk_buff*) ;
 int FUNC_6 (struct hidp_session*,struct sk_buff*) ;
 int VAR_3 ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,int *) ;
 struct sk_buff* FUNC_9 (int *) ;
 int FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_12 (int *,int ,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_13(struct hidp_session *VAR_6)
{
 struct sock *VAR_7 = VAR_6->ctrl_sock->sk;
 struct sock *VAR_8 = VAR_6->intr_sock->sk;
 struct sk_buff *VAR_9;
 FUNC_0(VAR_4, VAR_5);

 FUNC_1(&VAR_3, &VAR_4);
 for (;;) {
  if (FUNC_3(&VAR_6->terminate))
   break;

  if (VAR_7->sk_state != VAR_0 ||
      VAR_8->sk_state != VAR_0)
   break;


  while ((VAR_9 = FUNC_9(&VAR_8->sk_receive_queue))) {
   FUNC_11(VAR_9);
   if (!FUNC_10(VAR_9))
    FUNC_6(VAR_6, VAR_9);
   else
    FUNC_7(VAR_9);
  }


  FUNC_4(VAR_6, &VAR_6->intr_transmit,
          VAR_6->intr_sock);


  while ((VAR_9 = FUNC_9(&VAR_7->sk_receive_queue))) {
   FUNC_11(VAR_9);
   if (!FUNC_10(VAR_9))
    FUNC_5(VAR_6, VAR_9);
   else
    FUNC_7(VAR_9);
  }


  FUNC_4(VAR_6, &VAR_6->ctrl_transmit,
          VAR_6->ctrl_sock);





  FUNC_12(&VAR_4, VAR_2, VAR_1);
 }
 FUNC_8(&VAR_3, &VAR_4);

 FUNC_2(&VAR_6->terminate);
}
