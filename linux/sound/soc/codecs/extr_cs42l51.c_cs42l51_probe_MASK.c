
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct device {int dummy; } ;
struct cs42l51_private {TYPE_1__* supplies; struct regmap* reset_gpio; struct regmap* mclk_handle; struct regmap* regmap; } ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_1 (int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*) ;
 int VAR_10 ;
 int * VAR_11 ;
 int FUNC_4 (struct device*,char*) ;
 int FUNC_5 (struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*,unsigned int) ;
 int FUNC_7 (struct device*,struct cs42l51_private*) ;
 struct regmap* FUNC_8 (struct device*,char*) ;
 struct regmap* FUNC_9 (struct device*,char*,int ) ;
 struct cs42l51_private* FUNC_10 (struct device*,int,int ) ;
 int FUNC_11 (struct device*,int,TYPE_1__*) ;
 int FUNC_12 (struct device*,int *,int *,int) ;
 int FUNC_13 (struct regmap*,int ) ;
 int FUNC_14 (int) ;
 int FUNC_15 (struct regmap*,int ,unsigned int*) ;
 int FUNC_16 (int,TYPE_1__*) ;
 int FUNC_17 (int,TYPE_1__*) ;
 int VAR_12 ;

int FUNC_18(struct device *VAR_13, struct regmap *VAR_14)
{
 struct cs42l51_private *VAR_15;
 unsigned int VAR_16;
 int VAR_17, VAR_18;

 if (FUNC_2(VAR_14))
  return FUNC_3(VAR_14);

 VAR_15 = FUNC_10(VAR_13, sizeof(struct cs42l51_private),
          VAR_8);
 if (!VAR_15)
  return -VAR_7;

 FUNC_7(VAR_13, VAR_15);
 VAR_15->regmap = VAR_14;

 VAR_15->mclk_handle = FUNC_8(VAR_13, "MCLK");
 if (FUNC_2(VAR_15->mclk_handle)) {
  if (FUNC_3(VAR_15->mclk_handle) != -VAR_6)
   return FUNC_3(VAR_15->mclk_handle);
  VAR_15->mclk_handle = ((void*)0);
 }

 for (VAR_18 = 0; VAR_18 < FUNC_0(VAR_15->supplies); VAR_18++)
  VAR_15->supplies[VAR_18].supply = VAR_11[VAR_18];

 VAR_17 = FUNC_11(VAR_13, FUNC_0(VAR_15->supplies),
          VAR_15->supplies);
 if (VAR_17 != 0) {
  FUNC_5(VAR_13, "Failed to request supplies: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_17 = FUNC_17(FUNC_0(VAR_15->supplies),
        VAR_15->supplies);
 if (VAR_17 != 0) {
  FUNC_5(VAR_13, "Failed to enable supplies: %d\n", VAR_17);
  return VAR_17;
 }

 VAR_15->reset_gpio = FUNC_9(VAR_13, "reset",
            VAR_9);
 if (FUNC_2(VAR_15->reset_gpio))
  return FUNC_3(VAR_15->reset_gpio);

 if (VAR_15->reset_gpio) {
  FUNC_4(VAR_13, "Release reset gpio\n");
  FUNC_13(VAR_15->reset_gpio, 0);
  FUNC_14(2);
 }


 VAR_17 = FUNC_15(VAR_14, VAR_3, &VAR_16);
 if (VAR_17 < 0) {
  FUNC_5(VAR_13, "failed to read I2C\n");
  goto error;
 }

 if ((VAR_16 != FUNC_1(VAR_0, VAR_1)) &&
     (VAR_16 != FUNC_1(VAR_0, VAR_2))) {
  FUNC_5(VAR_13, "Invalid chip id: %x\n", VAR_16);
  VAR_17 = -VAR_5;
  goto error;
 }
 FUNC_6(VAR_13, "Cirrus Logic CS42L51, Revision: %02X\n",
   VAR_16 & VAR_4);

 VAR_17 = FUNC_12(VAR_13,
   &VAR_12, &VAR_10, 1);
 if (VAR_17 < 0)
  goto error;

 return 0;

error:
 FUNC_16(FUNC_0(VAR_15->supplies),
          VAR_15->supplies);
 return VAR_17;
}
