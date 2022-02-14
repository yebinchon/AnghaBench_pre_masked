
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct crypto_shash {int dummy; } ;
typedef int m ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (struct crypto_shash*,int const*,int *,int,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int const*,int) ;

__attribute__((used)) static int FUNC_4(struct crypto_shash *VAR_0, const u8 VAR_1[32], const u8 VAR_2[32],
    const u8 VAR_3[16], const u8 VAR_4[16], u32 *VAR_5)
{
 u8 VAR_6[80], VAR_7[16];
 int VAR_8;

 FUNC_0("u %32phN", VAR_1);
 FUNC_0("v %32phN", VAR_2);
 FUNC_0("x %16phN y %16phN", VAR_3, VAR_4);

 FUNC_3(VAR_6, VAR_4, 16);
 FUNC_3(VAR_6 + 16, VAR_2, 32);
 FUNC_3(VAR_6 + 48, VAR_1, 32);

 VAR_8 = FUNC_1(VAR_0, VAR_3, VAR_6, sizeof(VAR_6), VAR_7);
 if (VAR_8)
  return VAR_8;

 *VAR_5 = FUNC_2(VAR_7);
 *VAR_5 %= 1000000;

 FUNC_0("val %06u", *VAR_5);

 return 0;
}
