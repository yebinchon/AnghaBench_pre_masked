
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int (* sk_destruct ) (struct sock*) ;} ;
struct sock {int dummy; } ;
struct inet_connection_sock {int icsk_ulp_data; } ;


 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*,struct tls_context*) ;
 struct tls_context* FUNC_4 (struct sock*) ;

__attribute__((used)) static void FUNC_5(struct sock *VAR_0)
{
 struct tls_context *VAR_1 = FUNC_4(VAR_0);
 struct inet_connection_sock *VAR_2 = FUNC_0(VAR_0);

 VAR_1->sk_destruct(VAR_0);

 FUNC_1(VAR_2->icsk_ulp_data, ((void*)0));
 FUNC_3(VAR_0, VAR_1);
}
