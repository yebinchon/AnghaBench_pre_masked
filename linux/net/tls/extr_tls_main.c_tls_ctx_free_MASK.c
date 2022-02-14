
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_context {int tx_lock; int crypto_recv; int crypto_send; } ;
struct sock {int dummy; } ;


 int FUNC_0 (struct tls_context*) ;
 int FUNC_1 (struct tls_context*,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

void FUNC_4(struct sock *VAR_1, struct tls_context *VAR_2)
{
 if (!VAR_2)
  return;

 FUNC_2(&VAR_2->crypto_send, sizeof(VAR_2->crypto_send));
 FUNC_2(&VAR_2->crypto_recv, sizeof(VAR_2->crypto_recv));
 FUNC_3(&VAR_2->tx_lock);

 if (VAR_1)
  FUNC_1(VAR_2, VAR_0);
 else
  FUNC_0(VAR_2);
}
