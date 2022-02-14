
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tls_offload_context_tx {int aead_send; scalar_t__ open_record; } ;
struct tls_context {scalar_t__ tx_conf; int refcount; int (* sk_destruct ) (struct sock*) ;} ;
struct sock {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct tls_offload_context_tx*) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct sock*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (struct sock*) ;
 int FUNC_7 (struct tls_context*) ;
 struct tls_context* FUNC_8 (struct sock*) ;
 struct tls_offload_context_tx* FUNC_9 (struct tls_context*) ;

__attribute__((used)) static void FUNC_10(struct sock *VAR_1)
{
 struct tls_context *VAR_2 = FUNC_8(VAR_1);
 struct tls_offload_context_tx *VAR_3 = FUNC_9(VAR_2);

 VAR_2->sk_destruct(VAR_1);

 if (VAR_2->tx_conf == VAR_0) {
  if (VAR_3->open_record)
   FUNC_3(VAR_3->open_record);
  FUNC_2(VAR_3);
  FUNC_1(VAR_3->aead_send);
  FUNC_0(FUNC_4(VAR_1));
 }

 if (FUNC_5(&VAR_2->refcount))
  FUNC_7(VAR_2);
}
