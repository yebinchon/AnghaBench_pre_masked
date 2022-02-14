
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int flags; } ;
struct xfrm_state {TYPE_5__* ealg; TYPE_4__* aalg; struct crypto_aead* data; scalar_t__ geniv; TYPE_1__ props; } ;
struct TYPE_7__ {int icv_fullbits; } ;
struct TYPE_8__ {TYPE_2__ auth; } ;
struct xfrm_algo_desc {TYPE_3__ uinfo; } ;
struct rtattr {int rta_len; int rta_type; } ;
struct crypto_authenc_key_param {int enckeylen; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_10__ {char* alg_name; int alg_key_len; int alg_key; } ;
struct TYPE_9__ {char* alg_name; int alg_key_len; int alg_trunc_len; int alg_key; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*) ;
 struct crypto_authenc_key_param* FUNC_3 (struct rtattr*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int VAR_6 ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct crypto_aead*) ;
 int FUNC_8 (struct crypto_aead*,int) ;
 int FUNC_9 (struct crypto_aead*,char*,unsigned int) ;
 struct crypto_aead* FUNC_10 (char*,int ,int ) ;
 int FUNC_11 (char*) ;
 char* FUNC_12 (unsigned int,int ) ;
 int FUNC_13 (char*,int ,int) ;
 int FUNC_14 (char*,char*,int,int) ;
 int FUNC_15 (char*,int,char*,char*,char*,char*,char*,char*) ;
 struct xfrm_algo_desc* FUNC_16 (char*,int ) ;

__attribute__((used)) static int FUNC_17(struct xfrm_state *VAR_7)
{
 struct crypto_aead *VAR_8;
 struct crypto_authenc_key_param *VAR_9;
 struct rtattr *VAR_10;
 char *VAR_11;
 char *VAR_12;
 char VAR_13[VAR_1];
 unsigned int VAR_14;
 int VAR_15;

 VAR_15 = -VAR_2;
 if (!VAR_7->ealg)
  goto error;

 VAR_15 = -VAR_3;

 if ((VAR_7->props.flags & VAR_6)) {
  if (FUNC_15(VAR_13, VAR_1,
        "%s%sauthencesn(%s,%s)%s",
        VAR_7->geniv ?: "", VAR_7->geniv ? "(" : "",
        VAR_7->aalg ? VAR_7->aalg->alg_name : "digest_null",
        VAR_7->ealg->alg_name,
        VAR_7->geniv ? ")" : "") >= VAR_1)
   goto error;
 } else {
  if (FUNC_15(VAR_13, VAR_1,
        "%s%sauthenc(%s,%s)%s",
        VAR_7->geniv ?: "", VAR_7->geniv ? "(" : "",
        VAR_7->aalg ? VAR_7->aalg->alg_name : "digest_null",
        VAR_7->ealg->alg_name,
        VAR_7->geniv ? ")" : "") >= VAR_1)
   goto error;
 }

 VAR_8 = FUNC_10(VAR_13, 0, 0);
 VAR_15 = FUNC_2(VAR_8);
 if (FUNC_1(VAR_8))
  goto error;

 VAR_7->data = VAR_8;

 VAR_14 = (VAR_7->aalg ? (VAR_7->aalg->alg_key_len + 7) / 8 : 0) +
   (VAR_7->ealg->alg_key_len + 7) / 8 + FUNC_5(sizeof(*VAR_9));
 VAR_15 = -VAR_4;
 VAR_11 = FUNC_12(VAR_14, VAR_5);
 if (!VAR_11)
  goto error;

 VAR_12 = VAR_11;
 VAR_10 = (void *)VAR_12;
 VAR_10->rta_type = VAR_0;
 VAR_10->rta_len = FUNC_4(sizeof(*VAR_9));
 VAR_9 = FUNC_3(VAR_10);
 VAR_12 += FUNC_5(sizeof(*VAR_9));

 if (VAR_7->aalg) {
  struct xfrm_algo_desc *VAR_16;

  FUNC_13(VAR_12, VAR_7->aalg->alg_key, (VAR_7->aalg->alg_key_len + 7) / 8);
  VAR_12 += (VAR_7->aalg->alg_key_len + 7) / 8;

  VAR_16 = FUNC_16(VAR_7->aalg->alg_name, 0);
  FUNC_0(!VAR_16);

  VAR_15 = -VAR_2;
  if (VAR_16->uinfo.auth.icv_fullbits / 8 !=
      FUNC_7(VAR_8)) {
   FUNC_14("ESP: %s digestsize %u != %hu\n",
    VAR_7->aalg->alg_name,
    FUNC_7(VAR_8),
    VAR_16->uinfo.auth.icv_fullbits / 8);
   goto free_key;
  }

  VAR_15 = FUNC_8(
   VAR_8, VAR_7->aalg->alg_trunc_len / 8);
  if (VAR_15)
   goto free_key;
 }

 VAR_9->enckeylen = FUNC_6((VAR_7->ealg->alg_key_len + 7) / 8);
 FUNC_13(VAR_12, VAR_7->ealg->alg_key, (VAR_7->ealg->alg_key_len + 7) / 8);

 VAR_15 = FUNC_9(VAR_8, VAR_11, VAR_14);

free_key:
 FUNC_11(VAR_11);

error:
 return VAR_15;
}
