
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_err; int (* sk_error_report ) (struct sock*) ;int sk_shutdown; } ;


 int VAR_0 ;
 int FUNC_0 (char*,struct sock*,int) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(struct sock *VAR_1, int VAR_2)
{
 FUNC_0("sk=%p err=%d\n", VAR_1, VAR_2);

 VAR_1->sk_shutdown = VAR_0;
 VAR_1->sk_err = -VAR_2;
 VAR_1->sk_error_report(VAR_1);

 FUNC_1(VAR_1);
}
