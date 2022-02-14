
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adau1977 {int enabled; scalar_t__ avdd_reg; scalar_t__ dvdd_reg; int regmap; int dev; int (* switch_mode ) (int ) ;int reset_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct adau1977*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,unsigned int*) ;
 int FUNC_6 (int ,int ,int ,int ) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct adau1977 *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5 = 0;

 if (VAR_3->enabled)
  return 0;

 VAR_5 = FUNC_9(VAR_3->avdd_reg);
 if (VAR_5)
  return VAR_5;

 if (VAR_3->dvdd_reg) {
  VAR_5 = FUNC_9(VAR_3->dvdd_reg);
  if (VAR_5)
   goto err_disable_avdd;
 }

 FUNC_1(VAR_3->reset_gpio, 1);

 FUNC_3(VAR_3->regmap, 0);

 if (VAR_3->switch_mode)
  VAR_3->switch_mode(VAR_3->dev);

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5)
  goto err_disable_dvdd;

 VAR_5 = FUNC_6(VAR_3->regmap, VAR_2,
  VAR_0, VAR_0);
 if (VAR_5)
  goto err_disable_dvdd;

 VAR_5 = FUNC_4(VAR_3->regmap);
 if (VAR_5)
  goto err_disable_dvdd;
 VAR_5 = FUNC_5(VAR_3->regmap, VAR_1, &VAR_4);
 if (VAR_5)
  goto err_disable_dvdd;

 if (VAR_4 == 0x41) {
  FUNC_2(VAR_3->regmap, 1);
  VAR_5 = FUNC_7(VAR_3->regmap, VAR_1,
   0x41);
  if (VAR_5)
   goto err_disable_dvdd;
  FUNC_2(VAR_3->regmap, 0);
 }

 VAR_3->enabled = 1;

 return VAR_5;

err_disable_dvdd:
 if (VAR_3->dvdd_reg)
  FUNC_8(VAR_3->dvdd_reg);
err_disable_avdd:
  FUNC_8(VAR_3->avdd_reg);
 return VAR_5;
}
