
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const u8 ;
struct crypto_shash {int dummy; } ;
typedef int m ;


 int FUNC_0 (char*,int const*,...) ;
 int FUNC_1 (struct crypto_shash*,int const*,int const*,int,int const*) ;
 int FUNC_2 (int const*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_0, const u8 VAR_1[16],
    const u8 VAR_2[16], const u8 VAR_3[16], const u8 VAR_4[16],
    const u8 VAR_5[3], const u8 VAR_6[7], const u8 VAR_7[7],
    u8 VAR_8[16])
{
 u8 VAR_9[65];
 int VAR_10;

 FUNC_0("w %16phN", VAR_1);
 FUNC_0("n1 %16phN n2 %16phN", VAR_2, VAR_3);
 FUNC_0("r %16phN io_cap %3phN a1 %7phN a2 %7phN", VAR_4, VAR_5, VAR_6, VAR_7);

 FUNC_2(VAR_9, VAR_7, 7);
 FUNC_2(VAR_9 + 7, VAR_6, 7);
 FUNC_2(VAR_9 + 14, VAR_5, 3);
 FUNC_2(VAR_9 + 17, VAR_4, 16);
 FUNC_2(VAR_9 + 33, VAR_3, 16);
 FUNC_2(VAR_9 + 49, VAR_2, 16);

 VAR_10 = FUNC_1(VAR_0, VAR_1, VAR_9, sizeof(VAR_9), VAR_8);
 if (VAR_10)
  return VAR_10;

 FUNC_0("res %16phN", VAR_8);

 return VAR_10;
}
