
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_err; int (* sk_error_report ) (struct sock*) ;} ;


 int FUNC_0 (struct sock*) ;

void FUNC_1(struct sock *VAR_0, int VAR_1)
{
 VAR_0->sk_err = VAR_1;

 VAR_0->sk_error_report(VAR_0);
}
