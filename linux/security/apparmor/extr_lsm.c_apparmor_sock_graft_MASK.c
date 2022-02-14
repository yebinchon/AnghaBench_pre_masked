
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct socket {int dummy; } ;
struct sock {int dummy; } ;
struct aa_sk_ctx {scalar_t__ label; } ;


 struct aa_sk_ctx* FUNC_0 (struct sock*) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, struct socket *VAR_1)
{
 struct aa_sk_ctx *VAR_2 = FUNC_0(VAR_0);

 if (!VAR_2->label)
  VAR_2->label = FUNC_1();
}
