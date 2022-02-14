
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5514_priv {int pll3_cal_value; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct rt5514_priv *VAR_6, bool VAR_7)
{
 if (VAR_7) {
  FUNC_1(VAR_6->regmap, VAR_0, 0x0000000a);
  FUNC_0(VAR_6->regmap, VAR_4, 0xf,
   0xa);
  FUNC_0(VAR_6->regmap, VAR_5, 0x301,
   0x301);
  FUNC_1(VAR_6->regmap, VAR_2,
   0x80000000 | VAR_6->pll3_cal_value);
  FUNC_1(VAR_6->regmap, VAR_1,
   0x8bb80800);
  FUNC_0(VAR_6->regmap, VAR_3,
   0xc0000000, 0x80000000);
  FUNC_0(VAR_6->regmap, VAR_3,
   0xc0000000, 0xc0000000);
 } else {
  FUNC_0(VAR_6->regmap, VAR_3,
   0xc0000000, 0x40000000);
  FUNC_0(VAR_6->regmap, VAR_5, 0x301, 0);
  FUNC_0(VAR_6->regmap, VAR_4, 0xf,
   0x4);
 }

 return 0;
}
