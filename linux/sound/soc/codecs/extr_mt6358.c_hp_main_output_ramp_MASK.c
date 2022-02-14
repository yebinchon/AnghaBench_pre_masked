
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
 int VAR_3 = 0, VAR_4 = 0;
 int VAR_5 = 7;


 for (VAR_3 = 0; VAR_3 <= VAR_5; VAR_3++) {
  VAR_4 = VAR_2 ? VAR_3 : VAR_5 - VAR_3;
  FUNC_0(VAR_1->regmap, VAR_0,
       0x7 << 8, VAR_4 << 8);
  FUNC_0(VAR_1->regmap, VAR_0,
       0x7 << 11, VAR_4 << 11);
  FUNC_1(100, 150);
 }
}
