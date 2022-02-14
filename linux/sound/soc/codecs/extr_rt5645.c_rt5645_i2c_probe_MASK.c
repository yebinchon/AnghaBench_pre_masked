
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct rt5645_platform_data {int jd_mode; int dmic1_data_pin; int dmic2_data_pin; scalar_t__ level_trigger_irq; scalar_t__ inv_jd1_1; scalar_t__ in2_diff; } ;
struct rt5645_priv {scalar_t__ codec_type; unsigned int v_id; TYPE_1__* supplies; struct i2c_client* i2c; int rcclock_work; int jack_detect_work; int btn_check_timer; struct regmap* regmap; struct rt5645_platform_data pdata; struct regmap* gpiod_hp_det; } ;
struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct dmi_system_id {struct rt5645_platform_data* driver_data; int ident; } ;
struct TYPE_10__ {int supply; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_2 (struct regmap*) ;
 int FUNC_3 (struct regmap*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;







 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;

 int VAR_63 ;
 int FUNC_10 (int *,char*,int) ;
 struct rt5645_platform_data* FUNC_11 (int *) ;
 int FUNC_12 (int *,char*,...) ;
 int FUNC_13 (int *,char*,int) ;
 struct regmap* FUNC_14 (int *,char*,int ) ;
 struct rt5645_priv* FUNC_15 (int *,int,int ) ;
 void* FUNC_16 (struct i2c_client*,int *) ;
 int FUNC_17 (int *,int,TYPE_1__*) ;
 int FUNC_18 (int *,int *,TYPE_1__*,int) ;
 struct dmi_system_id* FUNC_19 (int ) ;
 int VAR_64 ;
 int FUNC_20 (scalar_t__,struct rt5645_priv*) ;
 int FUNC_21 (struct i2c_client*,struct rt5645_priv*) ;
 TYPE_1__* VAR_65 ;
 struct rt5645_platform_data VAR_66 ;
 int FUNC_22 (int ) ;
 int VAR_67 ;
 int FUNC_23 (struct regmap*,int ,unsigned int*) ;
 int FUNC_24 (struct regmap*,TYPE_1__*,int) ;
 int FUNC_25 (struct regmap*,int ,int,int) ;
 int FUNC_26 (struct regmap*,int ,int) ;
 int FUNC_27 (int,TYPE_1__*) ;
 int FUNC_28 (int,TYPE_1__*) ;
 int FUNC_29 (scalar_t__,int *,int ,int,char*,struct rt5645_priv*) ;
 int VAR_68 ;
 scalar_t__ FUNC_30 (int *) ;
 TYPE_1__* VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int FUNC_31 (struct rt5645_priv*,int *) ;
 int VAR_72 ;
 int VAR_73 ;
 int * VAR_74 ;
 TYPE_1__* VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int FUNC_32 (int *,int ,int ) ;

__attribute__((used)) static int FUNC_33(struct i2c_client *VAR_79,
      const struct i2c_device_id *VAR_80)
{
 struct rt5645_platform_data *VAR_81 = FUNC_11(&VAR_79->dev);
 const struct dmi_system_id *VAR_82;
 struct rt5645_priv *VAR_83;
 int VAR_84, VAR_85;
 unsigned int VAR_86;
 struct regmap *VAR_87;

 VAR_83 = FUNC_15(&VAR_79->dev, sizeof(struct rt5645_priv),
    VAR_5);
 if (VAR_83 == ((void*)0))
  return -VAR_4;

 VAR_83->i2c = VAR_79;
 FUNC_21(VAR_79, VAR_83);

 VAR_82 = FUNC_19(VAR_64);
 if (VAR_82) {
  FUNC_12(&VAR_79->dev, "Detected %s platform\n", VAR_82->ident);
  VAR_81 = VAR_82->driver_data;
 }

 if (VAR_81)
  VAR_83->pdata = *VAR_81;
 else if (FUNC_30(&VAR_79->dev))
  FUNC_31(VAR_83, &VAR_79->dev);
 else
  VAR_83->pdata = VAR_66;

 if (VAR_67 != -1) {
  VAR_83->pdata.in2_diff = FUNC_6(VAR_67);
  VAR_83->pdata.level_trigger_irq = FUNC_9(VAR_67);
  VAR_83->pdata.inv_jd1_1 = FUNC_7(VAR_67);
  VAR_83->pdata.jd_mode = FUNC_8(VAR_67);
  VAR_83->pdata.dmic1_data_pin = FUNC_4(VAR_67);
  VAR_83->pdata.dmic2_data_pin = FUNC_5(VAR_67);
 }

 VAR_83->gpiod_hp_det = FUNC_14(&VAR_79->dev, "hp-detect",
             VAR_6);

 if (FUNC_2(VAR_83->gpiod_hp_det)) {
  FUNC_12(&VAR_79->dev, "failed to initialize gpiod\n");
  VAR_84 = FUNC_3(VAR_83->gpiod_hp_det);




  if (VAR_84 != -VAR_3)
   return VAR_84;
 }

 for (VAR_85 = 0; VAR_85 < FUNC_0(VAR_83->supplies); VAR_85++)
  VAR_83->supplies[VAR_85].supply = VAR_74[VAR_85];

 VAR_84 = FUNC_17(&VAR_79->dev,
          FUNC_0(VAR_83->supplies),
          VAR_83->supplies);
 if (VAR_84) {
  FUNC_10(&VAR_79->dev, "Failed to request supplies: %d\n", VAR_84);
  return VAR_84;
 }

 VAR_84 = FUNC_28(FUNC_0(VAR_83->supplies),
        VAR_83->supplies);
 if (VAR_84) {
  FUNC_10(&VAR_79->dev, "Failed to enable supplies: %d\n", VAR_84);
  return VAR_84;
 }

 VAR_87 = FUNC_16(VAR_79, &VAR_78);
 if (FUNC_2(VAR_87)) {
  VAR_84 = FUNC_3(VAR_87);
  FUNC_10(&VAR_79->dev, "Failed to allocate temp register map: %d\n",
   VAR_84);
  return VAR_84;
 }





 FUNC_22(VAR_63);
 FUNC_23(VAR_87, VAR_62, &VAR_86);

 switch (VAR_86) {
 case 136:
  VAR_83->regmap = FUNC_16(VAR_79, &VAR_73);
  VAR_83->codec_type = VAR_0;
  break;
 case 128:
  VAR_83->regmap = FUNC_16(VAR_79, &VAR_76);
  VAR_83->codec_type = VAR_1;
  break;
 default:
  FUNC_10(&VAR_79->dev,
   "Device with ID register %#x is not rt5645 or rt5650\n",
   VAR_86);
  VAR_84 = -VAR_2;
  goto err_enable;
 }

 if (FUNC_2(VAR_83->regmap)) {
  VAR_84 = FUNC_3(VAR_83->regmap);
  FUNC_10(&VAR_79->dev, "Failed to allocate register map: %d\n",
   VAR_84);
  return VAR_84;
 }

 FUNC_26(VAR_83->regmap, VAR_60, 0);

 FUNC_23(VAR_87, VAR_61, &VAR_86);
 VAR_83->v_id = VAR_86 & 0xff;

 FUNC_26(VAR_83->regmap, VAR_11, 0x8080);

 VAR_84 = FUNC_24(VAR_83->regmap, VAR_65,
        FUNC_0(VAR_65));
 if (VAR_84 != 0)
  FUNC_13(&VAR_79->dev, "Failed to apply regmap patch: %d\n", VAR_84);

 if (VAR_83->codec_type == VAR_1) {
  VAR_84 = FUNC_24(VAR_83->regmap, VAR_75,
        FUNC_0(VAR_75));
  if (VAR_84 != 0)
   FUNC_13(&VAR_79->dev, "Apply rt5650 patch failed: %d\n",
        VAR_84);
 }

 FUNC_25(VAR_83->regmap, VAR_13, 0xc0, 0xc0);

 if (VAR_83->pdata.in2_diff)
  FUNC_25(VAR_83->regmap, VAR_44,
     VAR_45, VAR_45);

 if (VAR_83->pdata.dmic1_data_pin || VAR_83->pdata.dmic2_data_pin) {
  FUNC_25(VAR_83->regmap, VAR_38,
   VAR_33, VAR_32);
 }
 switch (VAR_83->pdata.dmic1_data_pin) {
 case 130:
  FUNC_25(VAR_83->regmap, VAR_23,
   VAR_17, VAR_16);
  break;

 case 132:
  FUNC_25(VAR_83->regmap, VAR_38,
   VAR_41, VAR_40);
  FUNC_25(VAR_83->regmap, VAR_23,
   VAR_17, VAR_15);
  FUNC_25(VAR_83->regmap, VAR_38,
   VAR_35, VAR_34);
  break;

 case 134:
  FUNC_25(VAR_83->regmap, VAR_23,
   VAR_17, VAR_14);
  FUNC_25(VAR_83->regmap, VAR_38,
   VAR_28,
   VAR_27);
  break;

 default:
  break;
 }

 switch (VAR_83->pdata.dmic2_data_pin) {
 case 129:
  FUNC_25(VAR_83->regmap, VAR_23,
   VAR_22, VAR_21);
  break;

 case 131:
  FUNC_25(VAR_83->regmap, VAR_23,
   VAR_22, VAR_20);
  FUNC_25(VAR_83->regmap, VAR_38,
   VAR_37, VAR_36);
  break;

 case 135:
  FUNC_25(VAR_83->regmap, VAR_23,
   VAR_22, VAR_18);
  FUNC_25(VAR_83->regmap, VAR_38,
   VAR_26,
   VAR_25);
  break;

 case 133:
  FUNC_25(VAR_83->regmap, VAR_23,
   VAR_22, VAR_19);
  FUNC_25(VAR_83->regmap, VAR_38,
   VAR_30,
   VAR_29);
  break;

 default:
  break;
 }

 if (VAR_83->pdata.jd_mode) {
  FUNC_25(VAR_83->regmap, VAR_24,
       VAR_46,
       VAR_46);
  FUNC_25(VAR_83->regmap, VAR_59,
       VAR_47, VAR_47);
  FUNC_25(VAR_83->regmap, VAR_48,
       VAR_49, VAR_49);
  FUNC_25(VAR_83->regmap, VAR_24,
       VAR_57, VAR_57);
  FUNC_25(VAR_83->regmap, VAR_39,
       VAR_50, VAR_50);
  FUNC_25(VAR_83->regmap, VAR_59,
       VAR_58, VAR_58);
  FUNC_25(VAR_83->regmap, VAR_38,
       VAR_31, VAR_31);
  switch (VAR_83->pdata.jd_mode) {
  case 1:
   FUNC_25(VAR_83->regmap, VAR_12,
        VAR_54,
        VAR_51);
   break;
  case 2:
   FUNC_25(VAR_83->regmap, VAR_12,
        VAR_54,
        VAR_52);
   break;
  case 3:
   FUNC_25(VAR_83->regmap, VAR_12,
        VAR_54,
        VAR_53);
   break;
  default:
   break;
  }
  if (VAR_83->pdata.inv_jd1_1) {
   FUNC_25(VAR_83->regmap, VAR_48,
    VAR_56, VAR_55);
  }
 }

 FUNC_25(VAR_83->regmap, VAR_10,
  VAR_43, VAR_42);

 if (VAR_83->pdata.level_trigger_irq) {
  FUNC_25(VAR_83->regmap, VAR_48,
   VAR_56, VAR_55);
 }
 FUNC_32(&VAR_83->btn_check_timer, VAR_68, 0);

 FUNC_1(&VAR_83->jack_detect_work, VAR_71);
 FUNC_1(&VAR_83->rcclock_work, VAR_72);

 if (VAR_83->i2c->irq) {
  VAR_84 = FUNC_29(VAR_83->i2c->irq, ((void*)0), VAR_70,
   VAR_9 | VAR_8
   | VAR_7, "rt5645", VAR_83);
  if (VAR_84) {
   FUNC_10(&VAR_79->dev, "Failed to reguest IRQ: %d\n", VAR_84);
   goto err_enable;
  }
 }

 VAR_84 = FUNC_18(&VAR_79->dev, &VAR_77,
         VAR_69, FUNC_0(VAR_69));
 if (VAR_84)
  goto err_irq;

 return 0;

err_irq:
 if (VAR_83->i2c->irq)
  FUNC_20(VAR_83->i2c->irq, VAR_83);
err_enable:
 FUNC_27(FUNC_0(VAR_83->supplies), VAR_83->supplies);
 return VAR_84;
}
