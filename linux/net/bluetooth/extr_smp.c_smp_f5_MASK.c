
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct crypto_shash {int dummy; } ;
typedef int m ;


 int FUNC_0 (char*,int const*,...) ;
 int FUNC_1 (struct crypto_shash*,int const*,int const*,int,int*) ;
 int FUNC_2 (int*,int const*,int) ;

__attribute__((used)) static int FUNC_3(struct crypto_shash *VAR_0, const u8 VAR_1[32],
    const u8 VAR_2[16], const u8 VAR_3[16], const u8 VAR_4[7],
    const u8 VAR_5[7], u8 VAR_6[16], u8 VAR_7[16])
{






 const u8 VAR_8[4] = { 0x65, 0x6c, 0x74, 0x62 };
 const u8 VAR_9[16] = { 0xbe, 0x83, 0x60, 0x5a, 0xdb, 0x0b, 0x37, 0x60,
         0x38, 0xa5, 0xf5, 0xaa, 0x91, 0x83, 0x88, 0x6c };
 const u8 VAR_10[2] = { 0x00, 0x01 };
 u8 VAR_11[53], VAR_12[16];
 int VAR_13;

 FUNC_0("w %32phN", VAR_1);
 FUNC_0("n1 %16phN n2 %16phN", VAR_2, VAR_3);
 FUNC_0("a1 %7phN a2 %7phN", VAR_4, VAR_5);

 VAR_13 = FUNC_1(VAR_0, VAR_9, VAR_1, 32, VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_0("t %16phN", VAR_12);

 FUNC_2(VAR_11, VAR_10, 2);
 FUNC_2(VAR_11 + 2, VAR_5, 7);
 FUNC_2(VAR_11 + 9, VAR_4, 7);
 FUNC_2(VAR_11 + 16, VAR_3, 16);
 FUNC_2(VAR_11 + 32, VAR_2, 16);
 FUNC_2(VAR_11 + 48, VAR_8, 4);

 VAR_11[52] = 0;

 VAR_13 = FUNC_1(VAR_0, VAR_12, VAR_11, sizeof(VAR_11), VAR_6);
 if (VAR_13)
  return VAR_13;

 FUNC_0("mackey %16phN", VAR_6);

 VAR_11[52] = 1;

 VAR_13 = FUNC_1(VAR_0, VAR_12, VAR_11, sizeof(VAR_11), VAR_7);
 if (VAR_13)
  return VAR_13;

 FUNC_0("ltk %16phN", VAR_7);

 return 0;
}
