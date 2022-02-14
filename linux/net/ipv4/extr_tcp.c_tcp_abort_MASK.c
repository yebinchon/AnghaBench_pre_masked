
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; int sk_err; int (* sk_error_report ) (struct sock*) ;} ;
struct request_sock {int rsk_listener; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (int ,struct request_sock*) ;
 struct request_sock* FUNC_4 (struct sock*) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct sock*) ;
 int FUNC_8 (struct sock*) ;
 int FUNC_9 (struct sock*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct sock*,int ) ;
 int FUNC_12 (struct sock*) ;
 int FUNC_13 (struct sock*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 int FUNC_15 (struct sock*,int ) ;
 int FUNC_16 (struct sock*,int ) ;
 int FUNC_17 (struct sock*) ;

int FUNC_18(struct sock *VAR_6, int VAR_7)
{
 if (!FUNC_9(VAR_6)) {
  if (VAR_6->sk_state == VAR_5) {
   struct request_sock *VAR_8 = FUNC_4(VAR_6);

   FUNC_5();
   FUNC_3(VAR_8->rsk_listener, VAR_8);
   FUNC_6();
   return 0;
  }
  return -VAR_0;
 }


 FUNC_7(VAR_6);

 if (VAR_6->sk_state == VAR_4) {
  FUNC_16(VAR_6, VAR_3);
  FUNC_2(VAR_6);
 }


 FUNC_5();
 FUNC_0(VAR_6);

 if (!FUNC_11(VAR_6, VAR_2)) {
  VAR_6->sk_err = VAR_7;

  FUNC_10();
  VAR_6->sk_error_report(VAR_6);
  if (FUNC_14(VAR_6->sk_state))
   FUNC_15(VAR_6, VAR_1);
  FUNC_13(VAR_6);
 }

 FUNC_1(VAR_6);
 FUNC_6();
 FUNC_17(VAR_6);
 FUNC_8(VAR_6);
 return 0;
}
