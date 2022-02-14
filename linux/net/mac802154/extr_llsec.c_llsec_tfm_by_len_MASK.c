
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mac802154_llsec_key {struct crypto_aead** tfm; } ;
struct crypto_aead {int dummy; } ;


 int FUNC_0 (struct crypto_aead**) ;
 int FUNC_1 () ;
 int FUNC_2 (struct crypto_aead*) ;

__attribute__((used)) static struct crypto_aead*
FUNC_3(struct mac802154_llsec_key *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0->tfm); VAR_2++)
  if (FUNC_2(VAR_0->tfm[VAR_2]) == VAR_1)
   return VAR_0->tfm[VAR_2];

 FUNC_1();
}
