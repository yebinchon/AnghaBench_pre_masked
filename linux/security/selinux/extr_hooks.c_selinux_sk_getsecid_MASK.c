
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sock {struct sk_security_struct* sk_security; } ;
struct sk_security_struct {int sid; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sock *VAR_1, u32 *VAR_2)
{
 if (!VAR_1)
  *VAR_2 = VAR_0;
 else {
  struct sk_security_struct *VAR_3 = VAR_1->sk_security;

  *VAR_2 = VAR_3->sid;
 }
}
