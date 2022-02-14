
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_shash {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_shash*) ;
 int FUNC_1 (struct crypto_shash*) ;
 int FUNC_2 (struct crypto_shash*,int *,int const*,unsigned int) ;
 struct crypto_shash* FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct crypto_shash*) ;
 int FUNC_5 (struct crypto_shash*,int const*,unsigned int) ;
 int VAR_0 ;
 int FUNC_6 (char*,int ,int) ;

__attribute__((used)) static int FUNC_7(u8 *VAR_1, const u8 *VAR_2, unsigned int VAR_3,
       const u8 *VAR_4, unsigned int VAR_5)
{
 struct crypto_shash *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_3(VAR_0, 0, 0);
 if (FUNC_0(VAR_6)) {
  FUNC_6("encrypted_key: can't alloc %s transform: %ld\n",
         VAR_0, FUNC_1(VAR_6));
  return FUNC_1(VAR_6);
 }

 VAR_7 = FUNC_5(VAR_6, VAR_2, VAR_3);
 if (!VAR_7)
  VAR_7 = FUNC_2(VAR_6, VAR_1, VAR_4, VAR_5);
 FUNC_4(VAR_6);
 return VAR_7;
}
