
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct adm6996_priv {int eesk; int eecs; int eedi; } ;
typedef enum admreg { ____Placeholder_admreg } admreg ;


 int FUNC_0 (struct adm6996_priv*,int) ;
 int FUNC_1 (struct adm6996_priv*,int ,int*,int) ;
 int FUNC_2 (struct adm6996_priv*,int ,int*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static u16
FUNC_5(struct adm6996_priv *VAR_0, enum admreg VAR_1)
{

 u8 VAR_2[6] = {
  0xFF, 0xFF, 0xFF, 0xFF,
  (0x06 << 4) | ((0 & 0x01) << 3 | (VAR_1&64)>>6),
  ((VAR_1&63)<<2)
 };

 u8 VAR_3[4];


 FUNC_4(VAR_0->eecs, 0);
 FUNC_4(VAR_0->eesk, 0);
 FUNC_4(VAR_0->eedi, 0);

 FUNC_2(VAR_0, 0, VAR_2, 46);
 FUNC_3(VAR_0->eedi);
 FUNC_0(VAR_0, 2);
 FUNC_1(VAR_0, 0, VAR_3, 32);


 FUNC_0(VAR_0, 2);


 FUNC_3(VAR_0->eecs);
 FUNC_3(VAR_0->eesk);


 return (VAR_1 & 0x01 ? (VAR_3[0]<<8) | VAR_3[1] : (VAR_3[2]<<8) | (VAR_3[3]));
}
