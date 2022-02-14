
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adau1977 {int enabled; scalar_t__ dvdd_reg; scalar_t__ avdd_reg; int regmap; int reset_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct adau1977 *VAR_2)
{
 int VAR_3 = 0;

 if (!VAR_2->enabled)
  return 0;

 VAR_3 = FUNC_3(VAR_2->regmap, VAR_1,
  VAR_0, 0);
 if (VAR_3)
  return VAR_3;

 FUNC_2(VAR_2->regmap);

 FUNC_0(VAR_2->reset_gpio, 0);

 FUNC_1(VAR_2->regmap, 1);

 FUNC_4(VAR_2->avdd_reg);
 if (VAR_2->dvdd_reg)
  FUNC_4(VAR_2->dvdd_reg);

 VAR_2->enabled = 0;

 return 0;
}
