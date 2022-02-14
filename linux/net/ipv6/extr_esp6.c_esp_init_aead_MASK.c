
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xfrm_state {char* geniv; TYPE_1__* aead; struct crypto_aead* data; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {char* alg_name; int alg_key_len; int alg_icv_len; int alg_key; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int) ;
 int FUNC_3 (struct crypto_aead*,int ,int) ;
 struct crypto_aead* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (char*,int,char*,char*,char*) ;

__attribute__((used)) static int FUNC_6(struct xfrm_state *VAR_2)
{
 char VAR_3[VAR_0];
 struct crypto_aead *VAR_4;
 int VAR_5;

 VAR_5 = -VAR_1;
 if (FUNC_5(VAR_3, VAR_0, "%s(%s)",
       VAR_2->geniv, VAR_2->aead->alg_name) >= VAR_0)
  goto error;

 VAR_4 = FUNC_4(VAR_3, 0, 0);
 VAR_5 = FUNC_1(VAR_4);
 if (FUNC_0(VAR_4))
  goto error;

 VAR_2->data = VAR_4;

 VAR_5 = FUNC_3(VAR_4, VAR_2->aead->alg_key,
     (VAR_2->aead->alg_key_len + 7) / 8);
 if (VAR_5)
  goto error;

 VAR_5 = FUNC_2(VAR_4, VAR_2->aead->alg_icv_len / 8);
 if (VAR_5)
  goto error;

error:
 return VAR_5;
}
