
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8962_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct wm8962_priv *VAR_5, int VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0;



 switch (VAR_6) {
 case 2:
  VAR_7 = VAR_1;
  VAR_8 = 1 << VAR_2;
  break;
 case 3:
  VAR_7 = VAR_3;
  VAR_8 = 1 << VAR_4;
  break;
 default:
  break;
 }

 if (VAR_7)
  FUNC_0(VAR_5->regmap, VAR_0,
       VAR_7, VAR_8);
}
