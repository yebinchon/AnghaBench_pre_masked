
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tls_sw_context_tx {struct tls_rec* open_rec; int encrypt_pending; int tx_list; int aead_send; } ;
struct TYPE_3__ {int curr; } ;
struct sk_msg {TYPE_1__ sg; } ;
struct tls_rec {int list; int tx_ready; int * iv_data; int sg_aead_out; int sg_aead_in; struct sk_msg msg_encrypted; } ;
struct tls_prot_info {scalar_t__ cipher_type; scalar_t__ prepend_size; int aad_size; int version; scalar_t__ salt_size; scalar_t__ iv_size; } ;
struct TYPE_4__ {int rec_seq; int iv; } ;
struct tls_context {TYPE_2__ tx; struct tls_prot_info prot_info; } ;
struct sock {int dummy; } ;
struct scatterlist {int length; int offset; } ;
struct list_head {int dummy; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct aead_request*,int ) ;
 int FUNC_2 (struct aead_request*,int ,int ,struct sock*) ;
 int FUNC_3 (struct aead_request*,int ,int ,size_t,int *) ;
 int FUNC_4 (struct aead_request*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct aead_request*) ;
 int FUNC_8 (struct list_head*,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,scalar_t__) ;
 struct scatterlist* FUNC_11 (struct sk_msg*,int ) ;
 int FUNC_12 (struct sock*,struct tls_prot_info*,TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_13 (int ,int *,int ) ;

__attribute__((used)) static int FUNC_14(struct sock *VAR_5,
        struct tls_context *VAR_6,
        struct tls_sw_context_tx *VAR_7,
        struct aead_request *VAR_8,
        size_t VAR_9, u32 VAR_10)
{
 struct tls_prot_info *VAR_11 = &VAR_6->prot_info;
 struct tls_rec *VAR_12 = VAR_7->open_rec;
 struct sk_msg *VAR_13 = &VAR_12->msg_encrypted;
 struct scatterlist *VAR_14 = FUNC_11(VAR_13, VAR_10);
 int VAR_15, VAR_16 = 0;


 if (VAR_11->cipher_type == VAR_3) {
  VAR_12->iv_data[0] = VAR_2;
  VAR_16 = 1;
 }

 FUNC_10(&VAR_12->iv_data[VAR_16], VAR_6->tx.iv,
        VAR_11->iv_size + VAR_11->salt_size);

 FUNC_13(VAR_11->version, VAR_12->iv_data, VAR_6->tx.rec_seq);

 VAR_14->offset += VAR_11->prepend_size;
 VAR_14->length -= VAR_11->prepend_size;

 VAR_13->sg.curr = VAR_10;

 FUNC_4(VAR_8, VAR_7->aead_send);
 FUNC_1(VAR_8, VAR_11->aad_size);
 FUNC_3(VAR_8, VAR_12->sg_aead_in,
          VAR_12->sg_aead_out,
          VAR_9, VAR_12->iv_data);

 FUNC_2(VAR_8, VAR_0,
      VAR_4, VAR_5);


 FUNC_8((struct list_head *)&VAR_12->list, &VAR_7->tx_list);
 FUNC_6(&VAR_7->encrypt_pending);

 VAR_15 = FUNC_7(VAR_8);
 if (!VAR_15 || VAR_15 != -VAR_1) {
  FUNC_5(&VAR_7->encrypt_pending);
  VAR_14->offset -= VAR_11->prepend_size;
  VAR_14->length += VAR_11->prepend_size;
 }

 if (!VAR_15) {
  FUNC_0(VAR_12->tx_ready, 1);
 } else if (VAR_15 != -VAR_1) {
  FUNC_9(&VAR_12->list);
  return VAR_15;
 }


 VAR_7->open_rec = ((void*)0);
 FUNC_12(VAR_5, VAR_11, &VAR_6->tx);
 return VAR_15;
}
