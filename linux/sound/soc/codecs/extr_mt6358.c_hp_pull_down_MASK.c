
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mt6358_priv {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(struct mt6358_priv *VAR_1, bool VAR_2)
{
 int VAR_3;

 if (VAR_2) {
  for (VAR_3 = 0x0; VAR_3 <= 0x6; VAR_3++) {
   FUNC_0(VAR_1->regmap, VAR_0,
        0x7, VAR_3);
   FUNC_1(600, 700);
  }
 } else {
  for (VAR_3 = 0x6; VAR_3 >= 0x1; VAR_3--) {
   FUNC_0(VAR_1->regmap, VAR_0,
        0x7, VAR_3);
   FUNC_1(600, 700);
  }
 }
}
