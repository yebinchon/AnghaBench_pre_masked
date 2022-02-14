
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tpa6130a2_data {scalar_t__ power_gpio; int dev; int supply; int regmap; } ;


 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct tpa6130a2_data *VAR_0, bool VAR_1)
{
 int VAR_2 = 0, VAR_3;

 if (VAR_1) {
  VAR_2 = FUNC_6(VAR_0->supply);
  if (VAR_2 != 0) {
   FUNC_0(VAR_0->dev,
    "Failed to enable supply: %d\n", VAR_2);
   return VAR_2;
  }

  if (VAR_0->power_gpio >= 0)
   FUNC_1(VAR_0->power_gpio, 1);


  FUNC_2(VAR_0->regmap, 0);
  VAR_2 = FUNC_4(VAR_0->regmap);
  if (VAR_2 != 0) {
   FUNC_0(VAR_0->dev,
    "Failed to sync registers: %d\n", VAR_2);
   FUNC_2(VAR_0->regmap, 1);
   if (VAR_0->power_gpio >= 0)
    FUNC_1(VAR_0->power_gpio, 0);
   VAR_3 = FUNC_5(VAR_0->supply);
   if (VAR_3 != 0)
    FUNC_0(VAR_0->dev,
     "Failed to disable supply: %d\n", VAR_3);
   return VAR_2;
  }
 } else {




  FUNC_3(VAR_0->regmap);
  FUNC_2(VAR_0->regmap, 1);


  if (VAR_0->power_gpio >= 0)
   FUNC_1(VAR_0->power_gpio, 0);

  VAR_2 = FUNC_5(VAR_0->supply);
  if (VAR_2 != 0) {
   FUNC_0(VAR_0->dev,
    "Failed to disable supply: %d\n", VAR_2);
   return VAR_2;
  }
 }

 return VAR_2;
}
