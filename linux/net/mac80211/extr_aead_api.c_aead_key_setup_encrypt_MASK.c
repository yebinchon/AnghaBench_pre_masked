
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 struct crypto_aead* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,size_t) ;
 int FUNC_3 (struct crypto_aead*,int const*,size_t) ;
 struct crypto_aead* FUNC_4 (char const*,int ,int ) ;
 int FUNC_5 (struct crypto_aead*) ;

struct crypto_aead *
FUNC_6(const char *VAR_1, const u8 VAR_2[],
         size_t VAR_3, size_t VAR_4)
{
 struct crypto_aead *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_4(VAR_1, 0, VAR_0);
 if (FUNC_1(VAR_5))
  return VAR_5;

 VAR_6 = FUNC_3(VAR_5, VAR_2, VAR_3);
 if (VAR_6)
  goto free_aead;
 VAR_6 = FUNC_2(VAR_5, VAR_4);
 if (VAR_6)
  goto free_aead;

 return VAR_5;

free_aead:
 FUNC_5(VAR_5);
 return FUNC_0(VAR_6);
}
