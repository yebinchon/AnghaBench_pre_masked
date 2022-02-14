
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 struct crypto_aead* FUNC_0 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (struct crypto_aead*,int ) ;
 int FUNC_3 (struct crypto_aead*,int const*,size_t) ;
 struct crypto_aead* FUNC_4 (char*,int ,int ) ;
 int FUNC_5 (struct crypto_aead*) ;

struct crypto_aead *FUNC_6(const u8 VAR_2[],
       size_t VAR_3)
{
 struct crypto_aead *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_4("gcm(aes)", 0, VAR_0);
 if (FUNC_1(VAR_4))
  return VAR_4;

 VAR_5 = FUNC_3(VAR_4, VAR_2, VAR_3);
 if (!VAR_5)
  VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (!VAR_5)
  return VAR_4;

 FUNC_5(VAR_4);
 return FUNC_0(VAR_5);
}
