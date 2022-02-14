
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_prot; } ;
struct sk_psock {scalar_t__ sk_proto; } ;
struct proto {int dummy; } ;


 int VAR_0 ;
 struct proto* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 struct sk_psock* FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (struct proto*) ;
 int FUNC_6 (struct sock*,struct proto*) ;
 int FUNC_7 (struct sock*,struct sk_psock*) ;
 scalar_t__ FUNC_8 (int) ;

int FUNC_9(struct sock *VAR_1)
{
 struct proto *VAR_2 = FUNC_0(VAR_1->sk_prot);
 struct sk_psock *VAR_3;

 FUNC_4(VAR_1);

 FUNC_1();
 VAR_3 = FUNC_3(VAR_1);
 if (FUNC_8(!VAR_3 || VAR_3->sk_proto ||
       FUNC_5(VAR_2))) {
  FUNC_2();
  return -VAR_0;
 }
 FUNC_6(VAR_1, VAR_2);
 FUNC_7(VAR_1, VAR_3);
 FUNC_2();
 return 0;
}
