
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct shash_desc {int dummy; } ;
struct TYPE_2__ {struct crypto_shash* tfm; } ;
struct kdf_sdesc {TYPE_1__ shash; } ;
struct crypto_shash {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (struct crypto_shash*) ;
 int FUNC_4 (struct crypto_shash*) ;
 scalar_t__ FUNC_5 (struct crypto_shash*) ;
 struct kdf_sdesc* FUNC_6 (int,int ) ;
 int FUNC_7 (char*,char*) ;

__attribute__((used)) static int FUNC_8(struct kdf_sdesc **VAR_3, char *VAR_4)
{
 struct crypto_shash *VAR_5;
 struct kdf_sdesc *VAR_6;
 int VAR_7;
 int VAR_8;


 VAR_5 = FUNC_2(VAR_4, 0, 0);
 if (FUNC_0(VAR_5)) {
  FUNC_7("could not allocate digest TFM handle %s\n", VAR_4);
  return FUNC_1(VAR_5);
 }

 VAR_8 = -VAR_0;
 if (FUNC_5(VAR_5) == 0)
  goto out_free_tfm;

 VAR_8 = -VAR_1;
 VAR_7 = sizeof(struct shash_desc) + FUNC_4(VAR_5);
 VAR_6 = FUNC_6(VAR_7, VAR_2);
 if (!VAR_6)
  goto out_free_tfm;
 VAR_6->shash.tfm = VAR_5;

 *VAR_3 = VAR_6;

 return 0;

out_free_tfm:
 FUNC_3(VAR_5);
 return VAR_8;
}
