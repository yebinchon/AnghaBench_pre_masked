
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_7__ {struct sock* sk; int work; } ;
struct tls_sw_context_tx {int async_capable; int strp; struct crypto_aead* aead_recv; int rx_list; int async_wait; TYPE_3__ tx_work; int tx_list; struct crypto_aead* aead_send; } ;
struct tls_sw_context_rx {int async_capable; int strp; struct crypto_aead* aead_recv; int rx_list; int async_wait; TYPE_3__ tx_work; int tx_list; struct crypto_aead* aead_send; } ;
struct tls_prot_info {int tail_size; scalar_t__ version; int cipher_type; scalar_t__ tag_size; scalar_t__ rec_seq_size; scalar_t__ salt_size; scalar_t__ iv_size; scalar_t__ prepend_size; scalar_t__ overhead_size; scalar_t__ aad_size; } ;
struct tls_crypto_info {int cipher_type; scalar_t__ version; } ;
struct cipher_context {struct tls_sw_context_tx* iv; struct tls_sw_context_tx* rec_seq; } ;
struct TYPE_8__ {struct tls_crypto_info info; } ;
struct TYPE_6__ {struct tls_crypto_info info; } ;
struct tls_context {struct tls_sw_context_tx* priv_ctx_rx; struct tls_sw_context_tx* priv_ctx_tx; int push_pending_record; struct cipher_context rx; TYPE_4__ crypto_recv; struct cipher_context tx; TYPE_2__ crypto_send; struct tls_prot_info prot_info; } ;
struct tls12_crypto_info_aes_gcm_256 {char* iv; char* rec_seq; char* key; char* salt; } ;
struct tls12_crypto_info_aes_gcm_128 {char* iv; char* rec_seq; char* key; char* salt; } ;
struct tls12_crypto_info_aes_ccm_128 {char* iv; char* rec_seq; char* key; char* salt; } ;
struct strp_callbacks {int parse_msg; int rcv_msg; } ;
struct sock {int dummy; } ;
struct crypto_tfm {TYPE_1__* __crt_alg; } ;
struct crypto_aead {int dummy; } ;
typedef int cb ;
struct TYPE_5__ {int cra_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (struct crypto_aead*) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct crypto_aead*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;

 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;

 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;

 scalar_t__ VAR_17 ;
 size_t VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 int FUNC_4 (struct crypto_aead*,scalar_t__) ;
 int FUNC_5 (struct crypto_aead*,char*,size_t) ;
 struct crypto_tfm* FUNC_6 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (struct crypto_aead*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct tls_sw_context_tx*) ;
 struct tls_sw_context_tx* FUNC_11 (scalar_t__,int ) ;
 struct tls_sw_context_tx* FUNC_12 (char*,scalar_t__,int ) ;
 void* FUNC_13 (int,int ) ;
 int FUNC_14 (struct tls_sw_context_tx*,char*,scalar_t__) ;
 int FUNC_15 (struct strp_callbacks*,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,struct sock*,struct strp_callbacks*) ;
 struct tls_context* FUNC_18 (struct sock*) ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;

int FUNC_19(struct sock *VAR_28, struct tls_context *VAR_29, int VAR_30)
{
 struct tls_context *VAR_31 = FUNC_18(VAR_28);
 struct tls_prot_info *VAR_32 = &VAR_31->prot_info;
 struct tls_crypto_info *VAR_33;
 struct tls12_crypto_info_aes_gcm_128 *VAR_34;
 struct tls12_crypto_info_aes_gcm_256 *VAR_35;
 struct tls12_crypto_info_aes_ccm_128 *VAR_36;
 struct tls_sw_context_tx *VAR_37 = ((void*)0);
 struct tls_sw_context_rx *VAR_38 = ((void*)0);
 struct cipher_context *VAR_39;
 struct crypto_aead **VAR_40;
 struct strp_callbacks VAR_41;
 u16 VAR_42, VAR_43, VAR_44, VAR_45, VAR_46;
 struct crypto_tfm *VAR_47;
 char *VAR_48, *VAR_49, *VAR_50, *VAR_51, *VAR_52;
 size_t VAR_53;
 int VAR_54 = 0;

 if (!VAR_29) {
  VAR_54 = -VAR_1;
  goto out;
 }

 if (VAR_30) {
  if (!VAR_29->priv_ctx_tx) {
   VAR_37 = FUNC_13(sizeof(*VAR_37), VAR_3);
   if (!VAR_37) {
    VAR_54 = -VAR_2;
    goto out;
   }
   VAR_29->priv_ctx_tx = VAR_37;
  } else {
   VAR_37 =
    (struct tls_sw_context_tx *)VAR_29->priv_ctx_tx;
  }
 } else {
  if (!VAR_29->priv_ctx_rx) {
   VAR_38 = FUNC_13(sizeof(*VAR_38), VAR_3);
   if (!VAR_38) {
    VAR_54 = -VAR_2;
    goto out;
   }
   VAR_29->priv_ctx_rx = VAR_38;
  } else {
   VAR_38 =
    (struct tls_sw_context_rx *)VAR_29->priv_ctx_rx;
  }
 }

 if (VAR_30) {
  FUNC_9(&VAR_37->async_wait);
  VAR_33 = &VAR_29->crypto_send.info;
  VAR_39 = &VAR_29->tx;
  VAR_40 = &VAR_37->aead_send;
  FUNC_1(&VAR_37->tx_list);
  FUNC_0(&VAR_37->tx_work.work, VAR_27);
  VAR_37->tx_work.sk = VAR_28;
 } else {
  FUNC_9(&VAR_38->async_wait);
  VAR_33 = &VAR_29->crypto_recv.info;
  VAR_39 = &VAR_29->rx;
  FUNC_16(&VAR_38->rx_list);
  VAR_40 = &VAR_38->aead_recv;
 }

 switch (VAR_33->cipher_type) {
 case 129: {
  VAR_42 = VAR_12;
  VAR_43 = VAR_16;
  VAR_44 = VAR_12;
  VAR_48 = ((struct tls12_crypto_info_aes_gcm_128 *)VAR_33)->iv;
  VAR_45 = VAR_14;
  VAR_49 =
   ((struct tls12_crypto_info_aes_gcm_128 *)VAR_33)->rec_seq;
  VAR_34 =
   (struct tls12_crypto_info_aes_gcm_128 *)VAR_33;
  VAR_53 = VAR_13;
  VAR_50 = VAR_34->key;
  VAR_51 = VAR_34->salt;
  VAR_46 = VAR_15;
  VAR_52 = "gcm(aes)";
  break;
 }
 case 128: {
  VAR_42 = VAR_17;
  VAR_43 = VAR_21;
  VAR_44 = VAR_17;
  VAR_48 = ((struct tls12_crypto_info_aes_gcm_256 *)VAR_33)->iv;
  VAR_45 = VAR_19;
  VAR_49 =
   ((struct tls12_crypto_info_aes_gcm_256 *)VAR_33)->rec_seq;
  VAR_35 =
   (struct tls12_crypto_info_aes_gcm_256 *)VAR_33;
  VAR_53 = VAR_18;
  VAR_50 = VAR_35->key;
  VAR_51 = VAR_35->salt;
  VAR_46 = VAR_20;
  VAR_52 = "gcm(aes)";
  break;
 }
 case 130: {
  VAR_42 = VAR_7;
  VAR_43 = VAR_11;
  VAR_44 = VAR_7;
  VAR_48 = ((struct tls12_crypto_info_aes_ccm_128 *)VAR_33)->iv;
  VAR_45 = VAR_9;
  VAR_49 =
  ((struct tls12_crypto_info_aes_ccm_128 *)VAR_33)->rec_seq;
  VAR_36 =
  (struct tls12_crypto_info_aes_ccm_128 *)VAR_33;
  VAR_53 = VAR_8;
  VAR_50 = VAR_36->key;
  VAR_51 = VAR_36->salt;
  VAR_46 = VAR_10;
  VAR_52 = "ccm(aes)";
  break;
 }
 default:
  VAR_54 = -VAR_1;
  goto free_priv;
 }


 if (VAR_44 > VAR_4 || VAR_42 > VAR_4 ||
     VAR_45 > VAR_23) {
  VAR_54 = -VAR_1;
  goto free_priv;
 }

 if (VAR_33->version == VAR_5) {
  VAR_42 = 0;
  VAR_32->aad_size = VAR_22;
  VAR_32->tail_size = 1;
 } else {
  VAR_32->aad_size = VAR_6;
  VAR_32->tail_size = 0;
 }

 VAR_32->version = VAR_33->version;
 VAR_32->cipher_type = VAR_33->cipher_type;
 VAR_32->prepend_size = VAR_22 + VAR_42;
 VAR_32->tag_size = VAR_43;
 VAR_32->overhead_size = VAR_32->prepend_size +
         VAR_32->tag_size + VAR_32->tail_size;
 VAR_32->iv_size = VAR_44;
 VAR_32->salt_size = VAR_46;
 VAR_39->iv = FUNC_11(VAR_44 + VAR_46, VAR_3);
 if (!VAR_39->iv) {
  VAR_54 = -VAR_2;
  goto free_priv;
 }

 VAR_32->rec_seq_size = VAR_45;
 FUNC_14(VAR_39->iv, VAR_51, VAR_46);
 FUNC_14(VAR_39->iv + VAR_46, VAR_48, VAR_44);
 VAR_39->rec_seq = FUNC_12(VAR_49, VAR_45, VAR_3);
 if (!VAR_39->rec_seq) {
  VAR_54 = -VAR_2;
  goto free_iv;
 }

 if (!*VAR_40) {
  *VAR_40 = FUNC_7(VAR_52, 0, 0);
  if (FUNC_2(*VAR_40)) {
   VAR_54 = FUNC_3(*VAR_40);
   *VAR_40 = ((void*)0);
   goto free_rec_seq;
  }
 }

 VAR_29->push_pending_record = VAR_26;

 VAR_54 = FUNC_5(*VAR_40, VAR_50, VAR_53);

 if (VAR_54)
  goto free_aead;

 VAR_54 = FUNC_4(*VAR_40, VAR_32->tag_size);
 if (VAR_54)
  goto free_aead;

 if (VAR_38) {
  VAR_47 = FUNC_6(VAR_38->aead_recv);

  if (VAR_33->version == VAR_5)
   VAR_38->async_capable = 0;
  else
   VAR_38->async_capable =
    VAR_47->__crt_alg->cra_flags & VAR_0;


  FUNC_15(&VAR_41, 0, sizeof(VAR_41));
  VAR_41.rcv_msg = VAR_24;
  VAR_41.parse_msg = VAR_25;

  FUNC_17(&VAR_38->strp, VAR_28, &VAR_41);
 }

 goto out;

free_aead:
 FUNC_8(*VAR_40);
 *VAR_40 = ((void*)0);
free_rec_seq:
 FUNC_10(VAR_39->rec_seq);
 VAR_39->rec_seq = ((void*)0);
free_iv:
 FUNC_10(VAR_39->iv);
 VAR_39->iv = ((void*)0);
free_priv:
 if (VAR_30) {
  FUNC_10(VAR_29->priv_ctx_tx);
  VAR_29->priv_ctx_tx = ((void*)0);
 } else {
  FUNC_10(VAR_29->priv_ctx_rx);
  VAR_29->priv_ctx_rx = ((void*)0);
 }
out:
 return VAR_54;
}
