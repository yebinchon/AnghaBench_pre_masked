
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_psock {int ingress_msg; } ;


 scalar_t__ FUNC_0 (struct sk_psock*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 struct sk_psock* FUNC_4 (struct sock const*) ;

__attribute__((used)) static bool FUNC_5(const struct sock *VAR_0)
{
 struct sk_psock *VAR_1;
 bool VAR_2 = 1;

 FUNC_2();
 VAR_1 = FUNC_4(VAR_0);
 if (FUNC_0(VAR_1))
  VAR_2 = FUNC_1(&VAR_1->ingress_msg);
 FUNC_3();
 return !VAR_2;
}
