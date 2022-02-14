
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas5086_private {int pwm_start_mid_z; scalar_t__ charge_period; int regmap; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct device*,char*,scalar_t__) ;
 int FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct device *VAR_8, struct tas5086_private *VAR_9)
{
 int VAR_10, VAR_11;






 if (VAR_9->pwm_start_mid_z)
  FUNC_3(VAR_9->regmap, VAR_1,
        VAR_2 |
    VAR_9->pwm_start_mid_z);


 if (VAR_9->charge_period == 0) {
  FUNC_3(VAR_9->regmap, VAR_5, 0);
 } else {
  VAR_11 = FUNC_2(VAR_7,
       FUNC_0(VAR_7),
       VAR_9->charge_period);
  if (VAR_11 >= 0)
   FUNC_3(VAR_9->regmap, VAR_5,
         VAR_11 + 0x08);
  else
   FUNC_1(VAR_8,
     "Invalid split-cap charge period of %d ns.\n",
     VAR_9->charge_period);
 }


 VAR_10 = FUNC_3(VAR_9->regmap, VAR_0, 0x00);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9->regmap, VAR_6, 0x20);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_10 = FUNC_3(VAR_9->regmap, VAR_3,
      VAR_4);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
