
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_shash {int dummy; } ;


 int FUNC_0 (struct crypto_shash*) ;
 struct crypto_shash* FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (struct crypto_shash*,int const*,size_t) ;

struct crypto_shash *FUNC_3(const u8 VAR_0[],
        size_t VAR_1)
{
 struct crypto_shash *VAR_2;

 VAR_2 = FUNC_1("cmac(aes)", 0, 0);
 if (!FUNC_0(VAR_2))
  FUNC_2(VAR_2, VAR_0, VAR_1);

 return VAR_2;
}
