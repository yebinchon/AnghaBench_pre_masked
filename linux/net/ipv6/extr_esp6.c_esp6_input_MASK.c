
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_4__ {int flags; } ;
struct xfrm_state {TYPE_1__ props; struct crypto_aead* data; } ;
struct sk_buff {int len; int ip_summed; } ;
struct scatterlist {int dummy; } ;
struct ip_esp_hdr {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
typedef int __be32 ;
struct TYPE_6__ {void* tmp; } ;
struct TYPE_5__ {int nr_frags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_4 ;
 int FUNC_1 (struct aead_request*,int) ;
 int FUNC_2 (struct aead_request*,int ,int ,struct sk_buff*) ;
 int FUNC_3 (struct aead_request*,struct scatterlist*,struct scatterlist*,int,int *) ;
 int FUNC_4 (struct aead_request*) ;
 int FUNC_5 (struct crypto_aead*) ;
 int FUNC_6 (struct sk_buff*,int) ;
 void* FUNC_7 (struct crypto_aead*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int *) ;
 struct scatterlist* FUNC_10 (struct crypto_aead*,struct aead_request*) ;
 int * FUNC_11 (struct crypto_aead*,void*,int) ;
 struct aead_request* FUNC_12 (struct crypto_aead*,int *) ;
 int * FUNC_13 (void*) ;
 int FUNC_14 (void*) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct scatterlist*,int) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int ,struct sk_buff**) ;
 int FUNC_19 (struct sk_buff*) ;
 int FUNC_20 (struct sk_buff*) ;
 TYPE_2__* FUNC_21 (struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*,struct scatterlist*,int ,int) ;
 scalar_t__ FUNC_23 (int) ;

__attribute__((used)) static int FUNC_24(struct xfrm_state *VAR_7, struct sk_buff *VAR_8)
{
 struct crypto_aead *VAR_9 = VAR_7->data;
 struct aead_request *VAR_10;
 struct sk_buff *VAR_11;
 int VAR_12 = FUNC_5(VAR_9);
 int VAR_13 = VAR_8->len - sizeof(struct ip_esp_hdr) - VAR_12;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17 = 0;
 void *VAR_18;
 __be32 *VAR_19;
 u8 *VAR_20;
 struct scatterlist *VAR_21;

 if (!FUNC_15(VAR_8, sizeof(struct ip_esp_hdr) + VAR_12)) {
  VAR_17 = -VAR_2;
  goto out;
 }

 if (VAR_13 <= 0) {
  VAR_17 = -VAR_2;
  goto out;
 }

 VAR_15 = sizeof(struct ip_esp_hdr);
 VAR_16 = 0;

 if (VAR_7->props.flags & VAR_4) {
  VAR_16 += sizeof(__be32);
  VAR_15 += VAR_16;
 }

 if (!FUNC_17(VAR_8)) {
  if (!FUNC_20(VAR_8)) {
   VAR_14 = 1;

   goto skip_cow;
  } else if (!FUNC_19(VAR_8)) {
   VAR_14 = FUNC_21(VAR_8)->nr_frags;
   VAR_14++;

   goto skip_cow;
  }
 }

 VAR_14 = FUNC_18(VAR_8, 0, &VAR_11);
 if (VAR_14 < 0) {
  VAR_17 = -VAR_2;
  goto out;
 }

skip_cow:
 VAR_17 = -VAR_3;
 VAR_18 = FUNC_7(VAR_9, VAR_14, VAR_16);
 if (!VAR_18)
  goto out;

 FUNC_0(VAR_8)->tmp = VAR_18;
 VAR_19 = FUNC_13(VAR_18);
 VAR_20 = FUNC_11(VAR_9, VAR_18, VAR_16);
 VAR_10 = FUNC_12(VAR_9, VAR_20);
 VAR_21 = FUNC_10(VAR_9, VAR_10);

 FUNC_9(VAR_8, VAR_19);

 FUNC_16(VAR_21, VAR_14);
 VAR_17 = FUNC_22(VAR_8, VAR_21, 0, VAR_8->len);
 if (FUNC_23(VAR_17 < 0)) {
  FUNC_14(VAR_18);
  goto out;
 }

 VAR_8->ip_summed = VAR_0;

 if ((VAR_7->props.flags & VAR_4))
  FUNC_2(VAR_10, 0, VAR_6, VAR_8);
 else
  FUNC_2(VAR_10, 0, VAR_5, VAR_8);

 FUNC_3(VAR_10, VAR_21, VAR_21, VAR_13 + VAR_12, VAR_20);
 FUNC_1(VAR_10, VAR_15);

 VAR_17 = FUNC_4(VAR_10);
 if (VAR_17 == -VAR_1)
  goto out;

 if ((VAR_7->props.flags & VAR_4))
  FUNC_8(VAR_8);

 VAR_17 = FUNC_6(VAR_8, VAR_17);

out:
 return VAR_17;
}
