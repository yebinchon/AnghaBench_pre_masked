
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct of_device_id {TYPE_2__* data; } ;
struct device {int dummy; } ;
struct cs42xx8_priv {TYPE_3__* supplies; struct regmap* regmap; TYPE_2__* drvdata; struct regmap* clk; int sysclk; struct regmap* gpiod_reset; } ;
struct TYPE_9__ {int channels_max; } ;
struct TYPE_12__ {TYPE_1__ capture; int name; } ;
struct TYPE_11__ {int supply; } ;
struct TYPE_10__ {int num_adcs; int name; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*) ;
 TYPE_5__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*,int) ;
 int FUNC_6 (struct device*,struct cs42xx8_priv*) ;
 struct regmap* FUNC_7 (struct device*,char*) ;
 struct regmap* FUNC_8 (struct device*,char*,int ) ;
 struct cs42xx8_priv* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (struct device*,int,TYPE_3__*) ;
 int FUNC_11 (struct device*,int *,TYPE_5__*,int) ;
 int FUNC_12 (struct regmap*,int ) ;
 int FUNC_13 (int) ;
 struct of_device_id* FUNC_14 (int ,struct device*) ;
 int FUNC_15 (struct regmap*,int) ;
 int FUNC_16 (struct regmap*,int ,int*) ;
 int FUNC_17 (int,TYPE_3__*) ;
 int FUNC_18 (int,TYPE_3__*) ;

int FUNC_19(struct device *VAR_11, struct regmap *VAR_12)
{
 const struct of_device_id *VAR_13;
 struct cs42xx8_priv *VAR_14;
 int VAR_15, VAR_16, VAR_17;

 if (FUNC_1(VAR_12)) {
  VAR_15 = FUNC_2(VAR_12);
  FUNC_4(VAR_11, "failed to allocate regmap: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_14 = FUNC_9(VAR_11, sizeof(*VAR_14), VAR_5);
 if (VAR_14 == ((void*)0))
  return -VAR_4;

 VAR_14->regmap = VAR_12;
 FUNC_6(VAR_11, VAR_14);

 VAR_13 = FUNC_14(VAR_9, VAR_11);
 if (VAR_13)
  VAR_14->drvdata = VAR_13->data;

 if (!VAR_14->drvdata) {
  FUNC_4(VAR_11, "failed to find driver data\n");
  return -VAR_3;
 }

 VAR_14->gpiod_reset = FUNC_8(VAR_11, "reset",
       VAR_6);
 if (FUNC_1(VAR_14->gpiod_reset))
  return FUNC_2(VAR_14->gpiod_reset);

 FUNC_12(VAR_14->gpiod_reset, 0);

 VAR_14->clk = FUNC_7(VAR_11, "mclk");
 if (FUNC_1(VAR_14->clk)) {
  FUNC_4(VAR_11, "failed to get the clock: %ld\n",
    FUNC_2(VAR_14->clk));
  return -VAR_3;
 }

 VAR_14->sysclk = FUNC_3(VAR_14->clk);

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_14->supplies); VAR_17++)
  VAR_14->supplies[VAR_17].supply = VAR_10[VAR_17];

 VAR_15 = FUNC_10(VAR_11,
   FUNC_0(VAR_14->supplies), VAR_14->supplies);
 if (VAR_15) {
  FUNC_4(VAR_11, "failed to request supplies: %d\n", VAR_15);
  return VAR_15;
 }

 VAR_15 = FUNC_18(FUNC_0(VAR_14->supplies),
        VAR_14->supplies);
 if (VAR_15) {
  FUNC_4(VAR_11, "failed to enable supplies: %d\n", VAR_15);
  return VAR_15;
 }


 FUNC_13(5);


 VAR_15 = FUNC_16(VAR_14->regmap, VAR_0, &VAR_16);
 if (VAR_15 < 0) {
  FUNC_4(VAR_11, "failed to get device ID, ret = %d", VAR_15);
  goto err_enable;
 }


 if (((VAR_16 & VAR_1) >> 4) != 0x00) {
  FUNC_4(VAR_11, "unmatched chip ID: %d\n",
   (VAR_16 & VAR_1) >> 4);
  VAR_15 = -VAR_3;
  goto err_enable;
 }

 FUNC_5(VAR_11, "found device, revision %X\n",
   VAR_16 & VAR_2);

 VAR_7.name = VAR_14->drvdata->name;


 VAR_7.capture.channels_max = VAR_14->drvdata->num_adcs * 2;

 VAR_15 = FUNC_11(VAR_11, &VAR_8, &VAR_7, 1);
 if (VAR_15) {
  FUNC_4(VAR_11, "failed to register component:%d\n", VAR_15);
  goto err_enable;
 }

 FUNC_15(VAR_14->regmap, 1);

err_enable:
 FUNC_17(FUNC_0(VAR_14->supplies),
          VAR_14->supplies);

 return VAR_15;
}
