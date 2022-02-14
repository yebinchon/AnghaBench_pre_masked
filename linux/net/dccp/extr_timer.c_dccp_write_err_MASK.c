
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int (* sk_error_report ) (struct sock*) ;scalar_t__ sk_err_soft; int sk_err; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,int ) ;
 int FUNC_3 (struct sock*) ;

__attribute__((used)) static void FUNC_4(struct sock *VAR_3)
{
 VAR_3->sk_err = VAR_3->sk_err_soft ? : VAR_2;
 VAR_3->sk_error_report(VAR_3);

 FUNC_2(VAR_3, VAR_1);
 FUNC_1(VAR_3);
 FUNC_0(VAR_0);
}
