
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct pistachio_internal_dac {int supply; int regmap; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int) ;
 struct pistachio_internal_dac* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct device*,int *,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (struct pistachio_internal_dac*) ;
 int FUNC_8 (struct pistachio_internal_dac*) ;
 int FUNC_9 (struct platform_device*,struct pistachio_internal_dac*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*) ;

__attribute__((used)) static int FUNC_19(struct platform_device *VAR_8)
{
 struct pistachio_internal_dac *VAR_9;
 int VAR_10, VAR_11;
 struct device *VAR_12 = &VAR_8->dev;
 u32 VAR_13;

 VAR_9 = FUNC_4(VAR_12, sizeof(*VAR_9), VAR_3);

 if (!VAR_9)
  return -VAR_1;

 FUNC_9(VAR_8, VAR_9);

 VAR_9->regmap = FUNC_18(VAR_8->dev.of_node,
           "img,cr-top");
 if (FUNC_1(VAR_9->regmap))
  return FUNC_2(VAR_9->regmap);

 VAR_9->supply = FUNC_5(VAR_12, "VDD");
 if (FUNC_1(VAR_9->supply)) {
  VAR_10 = FUNC_2(VAR_9->supply);
  if (VAR_10 != -VAR_2)
   FUNC_3(VAR_12, "failed to acquire supply 'VDD-supply': %d\n", VAR_10);
  return VAR_10;
 }

 VAR_10 = FUNC_16(VAR_9->supply);
 if (VAR_10) {
  FUNC_3(VAR_12, "failed to enable supply: %d\n", VAR_10);
  return VAR_10;
 }

 VAR_11 = FUNC_17(VAR_9->supply);

 switch (VAR_11) {
 case 1800000:
  VAR_13 = 0;
  break;
 case 3300000:
  VAR_13 = VAR_5;
  break;
 default:
  FUNC_3(VAR_12, "invalid voltage: %d\n", VAR_11);
  VAR_10 = -VAR_0;
  goto err_regulator;
 }

 FUNC_14(VAR_9->regmap, VAR_4,
   VAR_5, VAR_13);

 FUNC_7(VAR_9);
 FUNC_8(VAR_9);

 FUNC_13(VAR_12);
 FUNC_11(VAR_12);
 FUNC_12(VAR_12);

 VAR_10 = FUNC_6(VAR_12,
   &VAR_7,
   VAR_6,
   FUNC_0(VAR_6));
 if (VAR_10) {
  FUNC_3(VAR_12, "failed to register component: %d\n", VAR_10);
  goto err_pwr;
 }

 return 0;

err_pwr:
 FUNC_10(&VAR_8->dev);
 FUNC_7(VAR_9);
err_regulator:
 FUNC_15(VAR_9->supply);

 return VAR_10;
}
