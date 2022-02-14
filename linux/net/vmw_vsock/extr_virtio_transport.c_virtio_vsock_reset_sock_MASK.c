
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_error_report ) (struct sock*) ;int sk_err; int sk_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sock*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_2)
{
 FUNC_0(VAR_2);
 VAR_2->sk_state = VAR_1;
 VAR_2->sk_err = VAR_0;
 VAR_2->sk_error_report(VAR_2);
 FUNC_1(VAR_2);
}
