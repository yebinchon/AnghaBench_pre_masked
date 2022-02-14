
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int sk_proto; int tx_lock; } ;
struct sock {int sk_prot; } ;
struct inet_connection_sock {int icsk_ulp_data; } ;


 int VAR_0 ;
 struct inet_connection_sock* FUNC_0 (struct sock*) ;
 struct tls_context* FUNC_1 (int,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,struct tls_context*) ;

__attribute__((used)) static struct tls_context *FUNC_4(struct sock *VAR_1)
{
 struct inet_connection_sock *VAR_2 = FUNC_0(VAR_1);
 struct tls_context *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 FUNC_2(&VAR_3->tx_lock);
 FUNC_3(VAR_2->icsk_ulp_data, VAR_3);
 VAR_3->sk_proto = VAR_1->sk_prot;
 return VAR_3;
}
