
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iphdr {int ihl; int daddr; scalar_t__ frag_off; scalar_t__ ttl; scalar_t__ tos; scalar_t__ check; int tot_len; } ;
typedef struct iphdr u8 ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {int spi; } ;
struct xfrm_state {TYPE_2__ props; TYPE_1__ id; struct ah_data* data; } ;
struct sk_buff {scalar_t__ len; } ;
struct scatterlist {int dummy; } ;
struct ip_auth_hdr {int hdrlen; struct iphdr* auth_data; void* seq_no; int spi; scalar_t__ reserved; int nexthdr; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
struct ah_data {int icv_trunc_len; struct crypto_ahash* ahash; } ;
typedef void* __be32 ;
struct TYPE_12__ {struct iphdr* tmp; } ;
struct TYPE_9__ {int hi; int low; } ;
struct TYPE_10__ {TYPE_3__ output; } ;
struct TYPE_11__ {TYPE_4__ seq; } ;


 TYPE_6__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 TYPE_5__* FUNC_3 (struct sk_buff*) ;
 int VAR_5 ;
 int VAR_6 ;
 struct iphdr* FUNC_4 (struct crypto_ahash*,int,int) ;
 int VAR_7 ;
 struct scatterlist* FUNC_5 (struct crypto_ahash*,struct ahash_request*) ;
 struct iphdr* FUNC_6 (struct crypto_ahash*,void**,int) ;
 struct ahash_request* FUNC_7 (struct crypto_ahash*,struct iphdr*) ;
 int FUNC_8 (struct ahash_request*,int ,int ,struct sk_buff*) ;
 int FUNC_9 (struct ahash_request*,struct scatterlist*,struct iphdr*,scalar_t__) ;
 int FUNC_10 (struct ahash_request*) ;
 void* FUNC_11 (int ) ;
 int FUNC_12 (scalar_t__) ;
 struct ip_auth_hdr* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct iphdr*,int *) ;
 struct iphdr* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct iphdr*) ;
 int FUNC_18 (struct iphdr*,struct iphdr*,int) ;
 int FUNC_19 (struct iphdr*,int ,int) ;
 int FUNC_20 (struct scatterlist*,int) ;
 int FUNC_21 (struct scatterlist*,void**,int) ;
 int FUNC_22 (struct sk_buff*,int ,struct sk_buff**) ;
 int * FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,int ) ;
 int FUNC_26 (struct sk_buff*,struct scatterlist*,int ,scalar_t__) ;
 scalar_t__ FUNC_27 (int) ;

__attribute__((used)) static int FUNC_28(struct xfrm_state *VAR_8, struct sk_buff *VAR_9)
{
 int VAR_10;
 int VAR_11;
 int VAR_12;
 u8 *VAR_13;
 struct sk_buff *VAR_14;
 struct crypto_ahash *VAR_15;
 struct ahash_request *VAR_16;
 struct scatterlist *VAR_17;
 struct iphdr *VAR_18, *VAR_19;
 struct ip_auth_hdr *VAR_20;
 struct ah_data *VAR_21;
 int VAR_22 = 0;
 __be32 *VAR_23;
 int VAR_24 = 0;
 struct scatterlist *VAR_25;

 VAR_21 = VAR_8->data;
 VAR_15 = VAR_21->ahash;

 if ((VAR_10 = FUNC_22(VAR_9, 0, &VAR_14)) < 0)
  goto out;
 VAR_11 = VAR_10;

 FUNC_25(VAR_9, -FUNC_24(VAR_9));
 VAR_20 = FUNC_13(VAR_9);
 VAR_12 = FUNC_16(VAR_9);

 if (VAR_8->props.flags & VAR_6) {
  VAR_24 = 1;
  VAR_22 = sizeof(*VAR_23);
 }
 VAR_10 = -VAR_1;
 VAR_18 = FUNC_4(VAR_15, VAR_11 + VAR_24, VAR_12 + VAR_22);
 if (!VAR_18)
  goto out;
 VAR_23 = (__be32 *)((char *)VAR_18 + VAR_12);
 VAR_13 = FUNC_6(VAR_15, VAR_23, VAR_22);
 VAR_16 = FUNC_7(VAR_15, VAR_13);
 VAR_17 = FUNC_5(VAR_15, VAR_16);
 VAR_25 = VAR_17 + VAR_11;

 FUNC_19(VAR_20->auth_data, 0, VAR_21->icv_trunc_len);

 VAR_19 = FUNC_15(VAR_9);

 VAR_18->tos = VAR_19->tos;
 VAR_18->ttl = VAR_19->ttl;
 VAR_18->frag_off = VAR_19->frag_off;

 if (VAR_19->ihl != 5) {
  VAR_18->daddr = VAR_19->daddr;
  FUNC_18(VAR_18+1, VAR_19+1, VAR_19->ihl*4 - sizeof(struct iphdr));
  VAR_10 = FUNC_14(VAR_19, &VAR_19->daddr);
  if (VAR_10)
   goto out_free;
 }

 VAR_20->nexthdr = *FUNC_23(VAR_9);
 *FUNC_23(VAR_9) = VAR_3;

 VAR_19->tos = 0;
 VAR_19->tot_len = FUNC_12(VAR_9->len);
 VAR_19->frag_off = 0;
 VAR_19->ttl = 0;
 VAR_19->check = 0;

 if (VAR_8->props.flags & VAR_5)
  VAR_20->hdrlen = (FUNC_1(sizeof(*VAR_20) + VAR_21->icv_trunc_len) >> 2) - 2;
 else
  VAR_20->hdrlen = (FUNC_2(sizeof(*VAR_20) + VAR_21->icv_trunc_len) >> 2) - 2;

 VAR_20->reserved = 0;
 VAR_20->spi = VAR_8->id.spi;
 VAR_20->seq_no = FUNC_11(FUNC_3(VAR_9)->seq.output.low);

 FUNC_20(VAR_17, VAR_11 + VAR_24);
 VAR_10 = FUNC_26(VAR_9, VAR_17, 0, VAR_9->len);
 if (FUNC_27(VAR_10 < 0))
  goto out_free;

 if (VAR_8->props.flags & VAR_6) {

  *VAR_23 = FUNC_11(FUNC_3(VAR_9)->seq.output.hi);
  FUNC_21(VAR_25, VAR_23, VAR_22);
 }
 FUNC_9(VAR_16, VAR_17, VAR_13, VAR_9->len + VAR_22);
 FUNC_8(VAR_16, 0, VAR_7, VAR_9);

 FUNC_0(VAR_9)->tmp = VAR_18;

 VAR_10 = FUNC_10(VAR_16);
 if (VAR_10) {
  if (VAR_10 == -VAR_0)
   goto out;

  if (VAR_10 == -VAR_2)
   VAR_10 = VAR_4;
  goto out_free;
 }

 FUNC_18(VAR_20->auth_data, VAR_13, VAR_21->icv_trunc_len);

 VAR_19->tos = VAR_18->tos;
 VAR_19->ttl = VAR_18->ttl;
 VAR_19->frag_off = VAR_18->frag_off;
 if (VAR_19->ihl != 5) {
  VAR_19->daddr = VAR_18->daddr;
  FUNC_18(VAR_19+1, VAR_18+1, VAR_19->ihl*4 - sizeof(struct iphdr));
 }

out_free:
 FUNC_17(VAR_18);
out:
 return VAR_10;
}
