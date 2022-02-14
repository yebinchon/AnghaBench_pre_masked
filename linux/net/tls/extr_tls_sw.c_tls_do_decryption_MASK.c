
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {struct sock* sk; } ;
struct tls_sw_context_rx {int decrypt_pending; struct sk_buff async_wait; int aead_recv; } ;
struct tls_prot_info {scalar_t__ tag_size; int aad_size; } ;
struct tls_context {struct tls_prot_info prot_info; } ;
struct sock {int dummy; } ;
struct scatterlist {int dummy; } ;
struct aead_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct aead_request*,int ) ;
 int FUNC_1 (struct aead_request*,int ,int ,struct sk_buff*) ;
 int FUNC_2 (struct aead_request*,struct scatterlist*,struct scatterlist*,scalar_t__,int *) ;
 int FUNC_3 (struct aead_request*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct aead_request*) ;
 int VAR_2 ;
 int FUNC_7 (int,struct sk_buff*) ;
 int VAR_3 ;
 struct tls_context* FUNC_8 (struct sock*) ;
 struct tls_sw_context_rx* FUNC_9 (struct tls_context*) ;

__attribute__((used)) static int FUNC_10(struct sock *VAR_4,
        struct sk_buff *VAR_5,
        struct scatterlist *VAR_6,
        struct scatterlist *VAR_7,
        char *VAR_8,
        size_t VAR_9,
        struct aead_request *VAR_10,
        bool VAR_11)
{
 struct tls_context *VAR_12 = FUNC_8(VAR_4);
 struct tls_prot_info *VAR_13 = &VAR_12->prot_info;
 struct tls_sw_context_rx *VAR_14 = FUNC_9(VAR_12);
 int VAR_15;

 FUNC_3(VAR_10, VAR_14->aead_recv);
 FUNC_0(VAR_10, VAR_13->aad_size);
 FUNC_2(VAR_10, VAR_6, VAR_7,
          VAR_9 + VAR_13->tag_size,
          (u8 *)VAR_8);

 if (VAR_11) {






  VAR_5->sk = VAR_4;
  FUNC_1(VAR_10,
       VAR_0,
       VAR_3, VAR_5);
  FUNC_5(&VAR_14->decrypt_pending);
 } else {
  FUNC_1(VAR_10,
       VAR_0,
       VAR_2, &VAR_14->async_wait);
 }

 VAR_15 = FUNC_6(VAR_10);
 if (VAR_15 == -VAR_1) {
  if (VAR_11)
   return VAR_15;

  VAR_15 = FUNC_7(VAR_15, &VAR_14->async_wait);
 }

 if (VAR_11)
  FUNC_4(&VAR_14->decrypt_pending);

 return VAR_15;
}
