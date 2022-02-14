
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tls_offload_context_tx {int * aead_send; } ;
struct tls_crypto_info {int dummy; } ;
struct tls12_crypto_info_aes_gcm_128 {int * key; } ;
struct sock {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int const*,int ) ;
 int * FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;

int FUNC_7(struct sock *VAR_3,
    struct tls_offload_context_tx *VAR_4,
    struct tls_crypto_info *VAR_5)
{
 const u8 *VAR_6;
 int VAR_7;

 VAR_4->aead_send =
     FUNC_4("gcm(aes)", 0, VAR_0);
 if (FUNC_0(VAR_4->aead_send)) {
  VAR_7 = FUNC_1(VAR_4->aead_send);
  FUNC_6("crypto_alloc_aead failed rc=%d\n", VAR_7);
  VAR_4->aead_send = ((void*)0);
  goto err_out;
 }

 VAR_6 = ((struct tls12_crypto_info_aes_gcm_128 *)VAR_5)->key;

 VAR_7 = FUNC_3(VAR_4->aead_send, VAR_6,
    VAR_1);
 if (VAR_7)
  goto free_aead;

 VAR_7 = FUNC_2(VAR_4->aead_send,
         VAR_2);
 if (VAR_7)
  goto free_aead;

 return 0;
free_aead:
 FUNC_5(VAR_4->aead_send);
err_out:
 return VAR_7;
}
