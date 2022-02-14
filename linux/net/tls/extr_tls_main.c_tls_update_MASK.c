
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {struct proto* sk_proto; } ;
struct sock {struct proto* sk_prot; } ;
struct proto {int dummy; } ;


 scalar_t__ FUNC_0 (struct tls_context*) ;
 struct tls_context* FUNC_1 (struct sock*) ;

__attribute__((used)) static void FUNC_2(struct sock *VAR_0, struct proto *VAR_1)
{
 struct tls_context *VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (FUNC_0(VAR_2))
  VAR_2->sk_proto = VAR_1;
 else
  VAR_0->sk_prot = VAR_1;
}
