
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; int sk_receive_queue; } ;
struct sk_buff {int dummy; } ;
struct cmtp_session {int flags; TYPE_1__* sock; int terminate; } ;
struct TYPE_2__ {int file; struct sock* sk; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,struct cmtp_session*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct cmtp_session*) ;
 int FUNC_4 (int ,int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct cmtp_session*) ;
 int FUNC_7 (struct cmtp_session*) ;
 int FUNC_8 (struct cmtp_session*,struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct cmtp_session*) ;
 int FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int *) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (struct sock*) ;
 struct sk_buff* FUNC_17 (int *) ;
 int FUNC_18 (struct sk_buff*) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (int *) ;
 int VAR_6 ;
 int FUNC_21 (int *,int ,int ) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_22(void *VAR_8)
{
 struct cmtp_session *VAR_9 = VAR_8;
 struct sock *VAR_10 = VAR_9->sock->sk;
 struct sk_buff *VAR_11;
 FUNC_2(VAR_6, VAR_7);

 FUNC_1("session %p", VAR_9);

 FUNC_15(VAR_5, -15);

 FUNC_4(FUNC_16(VAR_10), &VAR_6);
 while (1) {
  if (FUNC_5(&VAR_9->terminate))
   break;
  if (VAR_10->sk_state != VAR_0)
   break;

  while ((VAR_11 = FUNC_17(&VAR_10->sk_receive_queue))) {
   FUNC_19(VAR_11);
   if (!FUNC_18(VAR_11))
    FUNC_8(VAR_9, VAR_11);
   else
    FUNC_12(VAR_11);
  }

  FUNC_7(VAR_9);





  FUNC_21(&VAR_6, VAR_3, VAR_2);
 }
 FUNC_14(FUNC_16(VAR_10), &VAR_6);

 FUNC_9(&VAR_4);

 if (!(VAR_9->flags & FUNC_0(VAR_1)))
  FUNC_6(VAR_9);

 FUNC_10(VAR_9->sock->file);

 FUNC_3(VAR_9);

 FUNC_20(&VAR_4);

 FUNC_11(VAR_9);
 FUNC_13(0);
 return 0;
}
