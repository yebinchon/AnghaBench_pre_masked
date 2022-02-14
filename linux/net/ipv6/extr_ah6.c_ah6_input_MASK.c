
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ipv6hdr {scalar_t__ hop_limit; scalar_t__* flow_lbl; scalar_t__ priority; } ;
typedef struct ipv6hdr u8 ;
typedef int u16 ;
struct TYPE_8__ {int flags; scalar_t__ mode; } ;
struct xfrm_state {TYPE_3__ props; struct ah_data* data; } ;
struct sk_buff {int network_header; scalar_t__ len; scalar_t__ data; int ip_summed; } ;
struct scatterlist {int dummy; } ;
struct ip_auth_hdr {int nexthdr; struct ipv6hdr* auth_data; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
struct ah_data {int icv_full_len; int icv_trunc_len; struct crypto_ahash* ahash; } ;
typedef int __be32 ;
struct TYPE_10__ {struct ipv6hdr* tmp; } ;
struct TYPE_6__ {int hi; } ;
struct TYPE_7__ {TYPE_1__ input; } ;
struct TYPE_9__ {TYPE_2__ seq; } ;


 TYPE_5__* FUNC_0 (struct sk_buff*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_4__* FUNC_2 (struct sk_buff*) ;
 int VAR_7 ;
 int FUNC_3 (struct sk_buff*,int) ;
 int VAR_8 ;
 struct ipv6hdr* FUNC_4 (struct crypto_ahash*,int,int) ;
 struct scatterlist* FUNC_5 (struct crypto_ahash*,struct ahash_request*) ;
 struct ipv6hdr* FUNC_6 (struct ipv6hdr*,int) ;
 struct ipv6hdr* FUNC_7 (struct crypto_ahash*,int *,int) ;
 struct ahash_request* FUNC_8 (struct crypto_ahash*,struct ipv6hdr*) ;
 int FUNC_9 (struct ahash_request*,int ,int ,struct sk_buff*) ;
 int FUNC_10 (struct ahash_request*,struct scatterlist*,struct ipv6hdr*,scalar_t__) ;
 int FUNC_11 (struct ahash_request*) ;
 scalar_t__ FUNC_12 (struct ipv6hdr*,struct ipv6hdr*,int) ;
 int FUNC_13 (struct ip_auth_hdr*) ;
 scalar_t__ FUNC_14 (struct ipv6hdr*,int,int ) ;
 struct ipv6hdr* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct ipv6hdr*) ;
 int FUNC_17 (struct ipv6hdr*,struct ipv6hdr*,int) ;
 int FUNC_18 (struct ipv6hdr*,int ,int) ;
 int FUNC_19 (struct sk_buff*,int) ;
 int FUNC_20 (struct scatterlist*,int) ;
 int FUNC_21 (struct scatterlist*,int *,int) ;
 int FUNC_22 (struct sk_buff*,int ,struct sk_buff**) ;
 struct ipv6hdr* FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,int) ;
 int FUNC_26 (struct sk_buff*) ;
 int FUNC_27 (struct sk_buff*,int) ;
 int FUNC_28 (struct sk_buff*,struct scatterlist*,int ,scalar_t__) ;
 scalar_t__ FUNC_29 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_30 (int) ;

__attribute__((used)) static int FUNC_31(struct xfrm_state *VAR_9, struct sk_buff *VAR_10)
{
 u8 *VAR_11;
 u8 *VAR_12;
 u8 *VAR_13;
 struct sk_buff *VAR_14;
 struct crypto_ahash *VAR_15;
 struct ahash_request *VAR_16;
 struct scatterlist *VAR_17;
 struct ip_auth_hdr *VAR_18;
 struct ipv6hdr *VAR_19;
 struct ah_data *VAR_20;
 u16 VAR_21;
 u16 VAR_22;
 int VAR_23;
 int VAR_24;
 int VAR_25 = -VAR_3;
 int VAR_26 = 0;
 __be32 *VAR_27;
 int VAR_28 = 0;
 struct scatterlist *VAR_29;

 if (!FUNC_19(VAR_10, sizeof(struct ip_auth_hdr)))
  goto out;



 if (FUNC_29(VAR_10, VAR_4))
  goto out;

 VAR_10->ip_summed = VAR_0;

 VAR_21 = FUNC_24(VAR_10);
 VAR_18 = (struct ip_auth_hdr *)VAR_10->data;
 VAR_20 = VAR_9->data;
 VAR_15 = VAR_20->ahash;

 VAR_23 = VAR_18->nexthdr;
 VAR_22 = FUNC_13(VAR_18);

 if (VAR_22 != FUNC_1(sizeof(*VAR_18) + VAR_20->icv_full_len) &&
     VAR_22 != FUNC_1(sizeof(*VAR_18) + VAR_20->icv_trunc_len))
  goto out;

 if (!FUNC_19(VAR_10, VAR_22))
  goto out;

 VAR_25 = FUNC_22(VAR_10, 0, &VAR_14);
 if (VAR_25 < 0)
  goto out;
 VAR_24 = VAR_25;

 VAR_18 = (struct ip_auth_hdr *)VAR_10->data;
 VAR_19 = FUNC_15(VAR_10);

 FUNC_25(VAR_10, VAR_21);

 if (VAR_9->props.flags & VAR_7) {
  VAR_28 = 1;
  VAR_26 = sizeof(*VAR_27);
 }

 VAR_13 = FUNC_4(VAR_15, VAR_24 + VAR_28, VAR_21 +
    VAR_20->icv_trunc_len + VAR_26);
 if (!VAR_13) {
  VAR_25 = -VAR_3;
  goto out;
 }

 VAR_11 = FUNC_6((u8 *)VAR_13, VAR_21);
 VAR_27 = (__be32 *)(VAR_11 + VAR_20->icv_trunc_len);
 VAR_12 = FUNC_7(VAR_15, VAR_27, VAR_26);
 VAR_16 = FUNC_8(VAR_15, VAR_12);
 VAR_17 = FUNC_5(VAR_15, VAR_16);
 VAR_29 = VAR_17 + VAR_24;

 FUNC_17(VAR_13, VAR_19, VAR_21);
 FUNC_17(VAR_11, VAR_18->auth_data, VAR_20->icv_trunc_len);
 FUNC_18(VAR_18->auth_data, 0, VAR_20->icv_trunc_len);

 if (FUNC_14(VAR_19, VAR_21, VAR_6))
  goto out_free;

 VAR_19->priority = 0;
 VAR_19->flow_lbl[0] = 0;
 VAR_19->flow_lbl[1] = 0;
 VAR_19->flow_lbl[2] = 0;
 VAR_19->hop_limit = 0;

 FUNC_20(VAR_17, VAR_24 + VAR_28);
 VAR_25 = FUNC_28(VAR_10, VAR_17, 0, VAR_10->len);
 if (FUNC_30(VAR_25 < 0))
  goto out_free;

 if (VAR_9->props.flags & VAR_7) {

  *VAR_27 = FUNC_2(VAR_10)->seq.input.hi;
  FUNC_21(VAR_29, VAR_27, VAR_26);
 }

 FUNC_10(VAR_16, VAR_17, VAR_12, VAR_10->len + VAR_26);
 FUNC_9(VAR_16, 0, VAR_8, VAR_10);

 FUNC_0(VAR_10)->tmp = VAR_13;

 VAR_25 = FUNC_11(VAR_16);
 if (VAR_25) {
  if (VAR_25 == -VAR_2)
   goto out;

  goto out_free;
 }

 VAR_25 = FUNC_12(VAR_12, VAR_11, VAR_20->icv_trunc_len) ? -VAR_1 : 0;
 if (VAR_25)
  goto out_free;

 VAR_10->network_header += VAR_22;
 FUNC_17(FUNC_23(VAR_10), VAR_13, VAR_21);
 FUNC_3(VAR_10, VAR_22 + VAR_21);

 if (VAR_9->props.mode == VAR_5)
  FUNC_26(VAR_10);
 else
  FUNC_27(VAR_10, -VAR_21);

 VAR_25 = VAR_23;

out_free:
 FUNC_16(VAR_13);
out:
 return VAR_25;
}
