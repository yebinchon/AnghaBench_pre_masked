
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aic31xx_priv {int regmap; scalar_t__ gpio_reset; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct aic31xx_priv *VAR_1)
{
 int VAR_2 = 0;

 if (VAR_1->gpio_reset) {
  FUNC_0(VAR_1->gpio_reset, 1);
  FUNC_2(10);
  FUNC_0(VAR_1->gpio_reset, 0);
 } else {
  VAR_2 = FUNC_3(VAR_1->regmap, VAR_0, 1);
 }
 FUNC_1(1);

 return VAR_2;
}
