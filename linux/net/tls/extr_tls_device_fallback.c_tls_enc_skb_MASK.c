
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct tls_offload_context_tx {int aead_send; } ;
struct TYPE_3__ {int salt; } ;
struct TYPE_4__ {TYPE_1__ aes_gcm_128; } ;
struct tls_context {TYPE_2__ crypto_send; } ;
struct sk_buff {int len; struct sk_buff* prev; } ;
struct scatterlist {int dummy; } ;
typedef void aead_request ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_0 (scalar_t__,int ) ;
 int FUNC_1 (struct sk_buff*,struct sk_buff*,int) ;
 int FUNC_2 (struct scatterlist*,void*,struct tls_context*,struct sk_buff*,int,int,int,void*) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (struct sk_buff*) ;
 void* FUNC_5 (int,int ) ;
 int FUNC_6 (void*,int ,int) ;
 scalar_t__ FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*) ;
 void* FUNC_11 (int ,int ) ;
 scalar_t__ FUNC_12 (void*,int ,struct scatterlist*,struct scatterlist*,void*,void*,int ,int) ;
 struct tls_offload_context_tx* FUNC_13 (struct tls_context*) ;

__attribute__((used)) static struct sk_buff *FUNC_14(struct tls_context *VAR_5,
       struct scatterlist VAR_6[3],
       struct scatterlist *VAR_7,
       struct sk_buff *VAR_8,
       s32 VAR_9, u64 VAR_10)
{
 int VAR_11 = FUNC_9(VAR_8) + FUNC_10(VAR_8);
 struct tls_offload_context_tx *VAR_12 = FUNC_13(VAR_5);
 int VAR_13 = VAR_8->len - VAR_11;
 void *VAR_14, *VAR_15, *VAR_16, *VAR_17;
 struct aead_request *VAR_18;
 struct sk_buff *VAR_19 = ((void*)0);
 int VAR_20;

 VAR_18 = FUNC_11(VAR_12->aead_send, VAR_0);
 if (!VAR_18)
  return ((void*)0);

 VAR_20 = VAR_3 +
    VAR_2 +
    VAR_1 +
    VAR_9 +
    VAR_4;
 VAR_14 = FUNC_5(VAR_20, VAR_0);
 if (!VAR_14)
  goto free_req;

 VAR_15 = VAR_14;
 FUNC_6(VAR_15, VAR_5->crypto_send.aes_gcm_128.salt,
        VAR_3);
 VAR_16 = VAR_14 + VAR_3 +
       VAR_2;
 VAR_17 = VAR_16 + VAR_1;

 VAR_19 = FUNC_0(FUNC_7(VAR_8) + VAR_8->len, VAR_0);
 if (!VAR_19)
  goto free_buf;

 FUNC_8(VAR_19, FUNC_7(VAR_8));

 FUNC_2(VAR_6, VAR_14, VAR_5, VAR_19, VAR_11,
      VAR_13, VAR_9, VAR_17);

 if (FUNC_12(VAR_18, VAR_12->aead_send, VAR_7, VAR_6, VAR_16, VAR_15,
       VAR_10, VAR_9 + VAR_13) < 0)
  goto free_nskb;

 FUNC_1(VAR_19, VAR_8, VAR_11);




 VAR_19->prev = VAR_19;

free_buf:
 FUNC_3(VAR_14);
free_req:
 FUNC_3(VAR_18);
 return VAR_19;
free_nskb:
 FUNC_4(VAR_19);
 VAR_19 = ((void*)0);
 goto free_buf;
}
