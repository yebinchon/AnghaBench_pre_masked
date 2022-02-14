
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int header_len; int mode; } ;
struct xfrm_state {struct ah_data* data; TYPE_4__ props; TYPE_3__* aalg; scalar_t__ encap; } ;
struct TYPE_5__ {int icv_fullbits; } ;
struct TYPE_6__ {TYPE_1__ auth; } ;
struct xfrm_algo_desc {TYPE_2__ uinfo; } ;
struct ipv6hdr {int dummy; } ;
struct ip_auth_hdr {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ah_data {int icv_full_len; int icv_trunc_len; struct crypto_ahash* ahash; } ;
struct TYPE_7__ {int alg_key_len; int alg_trunc_len; int alg_name; int alg_key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct crypto_ahash*) ;
 int FUNC_2 (int) ;



 int FUNC_3 (struct crypto_ahash*) ;
 scalar_t__ FUNC_4 (struct crypto_ahash*,int ,int) ;
 struct crypto_ahash* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct crypto_ahash*) ;
 int FUNC_7 (struct ah_data*) ;
 struct ah_data* FUNC_8 (int,int ) ;
 int FUNC_9 (char*,int ,int,int) ;
 struct xfrm_algo_desc* FUNC_10 (int ,int ) ;

__attribute__((used)) static int FUNC_11(struct xfrm_state *VAR_3)
{
 struct ah_data *VAR_4 = ((void*)0);
 struct xfrm_algo_desc *VAR_5;
 struct crypto_ahash *VAR_6;

 if (!VAR_3->aalg)
  goto error;

 if (VAR_3->encap)
  goto error;

 VAR_4 = FUNC_8(sizeof(*VAR_4), VAR_2);
 if (!VAR_4)
  return -VAR_1;

 VAR_6 = FUNC_5(VAR_3->aalg->alg_name, 0, 0);
 if (FUNC_1(VAR_6))
  goto error;

 VAR_4->ahash = VAR_6;
 if (FUNC_4(VAR_6, VAR_3->aalg->alg_key,
          (VAR_3->aalg->alg_key_len + 7) / 8))
  goto error;







 VAR_5 = FUNC_10(VAR_3->aalg->alg_name, 0);
 FUNC_0(!VAR_5);

 if (VAR_5->uinfo.auth.icv_fullbits/8 !=
     FUNC_3(VAR_6)) {
  FUNC_9("AH: %s digestsize %u != %hu\n",
   VAR_3->aalg->alg_name, FUNC_3(VAR_6),
   VAR_5->uinfo.auth.icv_fullbits/8);
  goto error;
 }

 VAR_4->icv_full_len = VAR_5->uinfo.auth.icv_fullbits/8;
 VAR_4->icv_trunc_len = VAR_3->aalg->alg_trunc_len/8;

 VAR_3->props.header_len = FUNC_2(sizeof(struct ip_auth_hdr) +
       VAR_4->icv_trunc_len);
 switch (VAR_3->props.mode) {
 case 130:
 case 129:
  break;
 case 128:
  VAR_3->props.header_len += sizeof(struct ipv6hdr);
  break;
 default:
  goto error;
 }
 VAR_3->data = VAR_4;

 return 0;

error:
 if (VAR_4) {
  FUNC_6(VAR_4->ahash);
  FUNC_7(VAR_4);
 }
 return -VAR_0;
}
