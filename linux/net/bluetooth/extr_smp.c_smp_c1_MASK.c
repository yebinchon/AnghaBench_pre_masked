
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u128 ;
typedef int bdaddr_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int *,...) ;
 int FUNC_2 (int *,int const*,int) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int const*,int *) ;
 int FUNC_5 (int *,int *,int *) ;

__attribute__((used)) static int FUNC_6(const u8 VAR_0[16],
    const u8 VAR_1[16], const u8 VAR_2[7], const u8 VAR_3[7], u8 VAR_4,
    const bdaddr_t *VAR_5, u8 VAR_6, const bdaddr_t *VAR_7, u8 VAR_8[16])
{
 u8 VAR_9[16], VAR_10[16];
 int VAR_11;

 FUNC_1("k %16phN r %16phN", VAR_0, VAR_1);
 FUNC_1("iat %u ia %6phN rat %u ra %6phN", &VAR_4, VAR_5, VAR_6, VAR_7);
 FUNC_1("preq %7phN pres %7phN", VAR_2, VAR_3);

 FUNC_3(VAR_9, 0, 16);


 VAR_9[0] = VAR_4;
 VAR_9[1] = VAR_6;
 FUNC_2(VAR_9 + 2, VAR_2, 7);
 FUNC_2(VAR_9 + 9, VAR_3, 7);

 FUNC_1("p1 %16phN", VAR_9);


 FUNC_5((u128 *) VAR_8, (u128 *) VAR_1, (u128 *) VAR_9);


 VAR_11 = FUNC_4(VAR_0, VAR_8);
 if (VAR_11) {
  FUNC_0("Encrypt data error");
  return VAR_11;
 }


 FUNC_2(VAR_10, VAR_7, 6);
 FUNC_2(VAR_10 + 6, VAR_5, 6);
 FUNC_3(VAR_10 + 12, 0, 4);

 FUNC_1("p2 %16phN", VAR_10);


 FUNC_5((u128 *) VAR_8, (u128 *) VAR_8, (u128 *) VAR_10);


 VAR_11 = FUNC_4(VAR_0, VAR_8);
 if (VAR_11)
  FUNC_0("Encrypt data error");

 return VAR_11;
}
