
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int (* sk_error_report ) (struct sock*) ;int sk_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_0 () ;
 int FUNC_1 (struct sock*,int ) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*) ;

void FUNC_6(struct sock *VAR_4)
{
 FUNC_5(VAR_4);


 switch (VAR_4->sk_state) {
 case 128:
  VAR_4->sk_err = VAR_0;
  break;
 case 129:
  VAR_4->sk_err = VAR_2;
  break;
 case 130:
  return;
 default:
  VAR_4->sk_err = VAR_1;
 }

 FUNC_0();

 FUNC_4(VAR_4);
 FUNC_3(VAR_4);

 if (!FUNC_1(VAR_4, VAR_3))
  VAR_4->sk_error_report(VAR_4);
}
