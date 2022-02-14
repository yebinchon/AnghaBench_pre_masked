
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct i2c_device_id {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {struct device dev; } ;
struct device_node {int dummy; } ;
struct cs53l30_private {int use_sdout2; TYPE_1__* supplies; int * regmap; int * mute_gpio; int * mclk; scalar_t__ mclk_rate; int * reset_gpio; } ;
struct TYPE_5__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int * VAR_20 ;
 int FUNC_3 (struct device*,char*,int,...) ;
 int FUNC_4 (struct device*,char*,unsigned int) ;
 int * FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 struct cs53l30_private* FUNC_7 (struct device*,int,int ) ;
 int * FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (struct device*,int,TYPE_1__*) ;
 int FUNC_10 (struct device*,int *,int *,int) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,int) ;
 int FUNC_13 (struct i2c_client*,struct cs53l30_private*) ;
 scalar_t__ FUNC_14 (struct device_node const*,char*) ;
 int FUNC_15 (struct device_node const*,char*,int *) ;
 int FUNC_16 (int *,int ,unsigned int*) ;
 int FUNC_17 (int *,int ,int ,int ) ;
 int FUNC_18 (int *,int ,int ) ;
 int FUNC_19 (int,TYPE_1__*) ;
 int FUNC_20 (int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_21,
        const struct i2c_device_id *VAR_22)
{
 const struct device_node *VAR_23 = VAR_21->dev.of_node;
 struct device *VAR_24 = &VAR_21->dev;
 struct cs53l30_private *VAR_25;
 unsigned int VAR_26 = 0;
 unsigned int VAR_27;
 int VAR_28 = 0, VAR_29;
 u8 VAR_30;

 VAR_25 = FUNC_7(VAR_24, sizeof(*VAR_25), VAR_14);
 if (!VAR_25)
  return -VAR_13;

 for (VAR_29 = 0; VAR_29 < FUNC_0(VAR_25->supplies); VAR_29++)
  VAR_25->supplies[VAR_29].supply = VAR_20[VAR_29];

 VAR_28 = FUNC_9(VAR_24, FUNC_0(VAR_25->supplies),
          VAR_25->supplies);
 if (VAR_28) {
  FUNC_3(VAR_24, "failed to get supplies: %d\n", VAR_28);
  return VAR_28;
 }

 VAR_28 = FUNC_20(FUNC_0(VAR_25->supplies),
        VAR_25->supplies);
 if (VAR_28) {
  FUNC_3(VAR_24, "failed to enable supplies: %d\n", VAR_28);
  return VAR_28;
 }


 VAR_25->reset_gpio = FUNC_6(VAR_24, "reset",
            VAR_16);
 if (FUNC_1(VAR_25->reset_gpio)) {
  VAR_28 = FUNC_2(VAR_25->reset_gpio);
  goto error;
 }

 FUNC_12(VAR_25->reset_gpio, 1);

 FUNC_13(VAR_21, VAR_25);

 VAR_25->mclk_rate = 0;

 VAR_25->regmap = FUNC_8(VAR_21, &VAR_19);
 if (FUNC_1(VAR_25->regmap)) {
  VAR_28 = FUNC_2(VAR_25->regmap);
  FUNC_3(VAR_24, "regmap_init() failed: %d\n", VAR_28);
  goto error;
 }


 VAR_28 = FUNC_16(VAR_25->regmap, VAR_1, &VAR_27);
 VAR_26 = VAR_27 << 12;

 VAR_28 = FUNC_16(VAR_25->regmap, VAR_2, &VAR_27);
 VAR_26 |= VAR_27 << 4;

 VAR_28 = FUNC_16(VAR_25->regmap, VAR_3, &VAR_27);
 VAR_26 |= (VAR_27 & 0xF0) >> 4;

 if (VAR_26 != VAR_0) {
  VAR_28 = -VAR_11;
  FUNC_3(VAR_24, "Device ID (%X). Expected %X\n",
   VAR_26, VAR_0);
  goto error;
 }

 VAR_28 = FUNC_16(VAR_25->regmap, VAR_10, &VAR_27);
 if (VAR_28 < 0) {
  FUNC_3(VAR_24, "failed to get Revision ID: %d\n", VAR_28);
  goto error;
 }


 VAR_25->mclk = FUNC_5(VAR_24, "mclk");
 if (FUNC_1(VAR_25->mclk)) {
  if (FUNC_2(VAR_25->mclk) != -VAR_12) {
   VAR_28 = FUNC_2(VAR_25->mclk);
   goto error;
  }

  VAR_25->mclk = ((void*)0);
 }


 VAR_25->mute_gpio = FUNC_6(VAR_24, "mute",
           VAR_15);
 if (FUNC_1(VAR_25->mute_gpio)) {
  VAR_28 = FUNC_2(VAR_25->mute_gpio);
  goto error;
 }

 if (VAR_25->mute_gpio) {

  FUNC_18(VAR_25->regmap, VAR_6,
        VAR_7);

  if (FUNC_11(VAR_25->mute_gpio))
   FUNC_17(VAR_25->regmap, VAR_8,
        VAR_9, 0);
 }

 if (!FUNC_15(VAR_23, "cirrus,micbias-lvl", &VAR_30))
  FUNC_17(VAR_25->regmap, VAR_4,
       VAR_5, VAR_30);

 if (FUNC_14(VAR_23, "cirrus,use-sdout2"))
  VAR_25->use_sdout2 = 1;

 FUNC_4(VAR_24, "Cirrus Logic CS53L30, Revision: %02X\n", VAR_27 & 0xFF);

 VAR_28 = FUNC_10(VAR_24, &VAR_18, &VAR_17, 1);
 if (VAR_28) {
  FUNC_3(VAR_24, "failed to register component: %d\n", VAR_28);
  goto error;
 }

 return 0;

error:
 FUNC_19(FUNC_0(VAR_25->supplies),
          VAR_25->supplies);
 return VAR_28;
}
