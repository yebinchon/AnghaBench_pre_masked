
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct sgtl5000_priv {int revision; scalar_t__ num_supplies; int micbias_resistor; int micbias_voltage; int lrclk_strength; int sclk_strength; int supplies; int mclk; int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
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
 scalar_t__ VAR_25 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,...) ;
 int FUNC_6 (TYPE_1__*,char*,...) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 struct sgtl5000_priv* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (TYPE_1__*,int *,int *,int) ;
 int FUNC_11 (struct i2c_client*,struct sgtl5000_priv*) ;
 int FUNC_12 (struct device_node*,char*,int*) ;
 int FUNC_13 (int ,int ,int*) ;
 int FUNC_14 (int ,int ,int ,int ) ;
 int FUNC_15 (int ,int ,int) ;
 int FUNC_16 (scalar_t__,int ) ;
 int FUNC_17 (scalar_t__,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_18 (struct i2c_client*) ;
 int FUNC_19 (struct i2c_client*) ;
 int VAR_28 ;
 int FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_29,
         const struct i2c_device_id *VAR_30)
{
 struct sgtl5000_priv *VAR_31;
 int VAR_32, VAR_33, VAR_34;
 struct device_node *VAR_35 = VAR_29->dev.of_node;
 u32 VAR_36;
 u16 VAR_37;

 VAR_31 = FUNC_8(&VAR_29->dev, sizeof(*VAR_31), VAR_4);
 if (!VAR_31)
  return -VAR_2;

 FUNC_11(VAR_29, VAR_31);

 VAR_32 = FUNC_18(VAR_29);
 if (VAR_32)
  return VAR_32;

 VAR_31->regmap = FUNC_9(VAR_29, &VAR_28);
 if (FUNC_0(VAR_31->regmap)) {
  VAR_32 = FUNC_1(VAR_31->regmap);
  FUNC_5(&VAR_29->dev, "Failed to allocate regmap: %d\n", VAR_32);
  goto disable_regs;
 }

 VAR_31->mclk = FUNC_7(&VAR_29->dev, ((void*)0));
 if (FUNC_0(VAR_31->mclk)) {
  VAR_32 = FUNC_1(VAR_31->mclk);

  if (VAR_32 == -VAR_1)
   VAR_32 = -VAR_3;

  if (VAR_32 != -VAR_3)
   FUNC_5(&VAR_29->dev, "Failed to get mclock: %d\n",
    VAR_32);
  goto disable_regs;
 }

 VAR_32 = FUNC_3(VAR_31->mclk);
 if (VAR_32) {
  FUNC_5(&VAR_29->dev, "Error enabling clock %d\n", VAR_32);
  goto disable_regs;
 }


 FUNC_20(1);


 VAR_32 = FUNC_13(VAR_31->regmap, VAR_14, &VAR_33);
 if (VAR_32) {
  FUNC_5(&VAR_29->dev, "Error reading chip id %d\n", VAR_32);
  goto disable_clk;
 }

 if (((VAR_33 & VAR_19) >> VAR_21) !=
     VAR_20) {
  FUNC_5(&VAR_29->dev,
   "Device with ID register %x is not a sgtl5000\n", VAR_33);
  VAR_32 = -VAR_0;
  goto disable_clk;
 }

 VAR_34 = (VAR_33 & VAR_22) >> VAR_23;
 FUNC_6(&VAR_29->dev, "sgtl5000 revision 0x%x\n", VAR_34);
 VAR_31->revision = VAR_34;


 VAR_32 = FUNC_15(VAR_31->regmap,
      VAR_12,
      VAR_13);
 if (VAR_32)
  FUNC_5(&VAR_29->dev,
   "Error %d initializing CHIP_CLK_CTRL\n", VAR_32);


 VAR_37 = VAR_10;
 if (VAR_31->num_supplies <= VAR_25) {

  VAR_32 = FUNC_14(VAR_31->regmap,
      VAR_15,
      VAR_18,
      VAR_9);
  if (VAR_32)
   FUNC_5(&VAR_29->dev,
    "Error %d setting LINREG_VDDD\n", VAR_32);

  VAR_37 |= VAR_16;
  FUNC_6(&VAR_29->dev,
    "Using internal LDO instead of VDDD: check ER1 erratum\n");
 } else {




  VAR_37 &= ~(VAR_24
        | VAR_17);
  FUNC_4(&VAR_29->dev, "Using external VDDD\n");
 }
 VAR_32 = FUNC_15(VAR_31->regmap, VAR_11, VAR_37);
 if (VAR_32)
  FUNC_5(&VAR_29->dev,
   "Error %d setting CHIP_ANA_POWER to %04x\n",
   VAR_32, VAR_37);

 if (VAR_35) {
  if (!FUNC_12(VAR_35,
   "micbias-resistor-k-ohms", &VAR_36)) {
   switch (VAR_36) {
   case 128:
    VAR_31->micbias_resistor = 0;
    break;
   case 131:
    VAR_31->micbias_resistor = 1;
    break;
   case 130:
    VAR_31->micbias_resistor = 2;
    break;
   case 129:
    VAR_31->micbias_resistor = 3;
    break;
   default:
    VAR_31->micbias_resistor = 2;
    FUNC_5(&VAR_29->dev,
     "Unsuitable MicBias resistor\n");
   }
  } else {

   VAR_31->micbias_resistor = 2;
  }
  if (!FUNC_12(VAR_35,
   "micbias-voltage-m-volts", &VAR_36)) {


   if ((VAR_36 >= 1250) && (VAR_36 <= 3000))
    VAR_31->micbias_voltage = (VAR_36 / 250) - 5;
   else {
    VAR_31->micbias_voltage = 0;
    FUNC_5(&VAR_29->dev,
     "Unsuitable MicBias voltage\n");
   }
  } else {
   VAR_31->micbias_voltage = 0;
  }
 }

 VAR_31->lrclk_strength = VAR_6;
 if (!FUNC_12(VAR_35, "lrclk-strength", &VAR_36)) {
  if (VAR_36 > VAR_5)
   VAR_36 = VAR_6;
  VAR_31->lrclk_strength = VAR_36;
 }

 VAR_31->sclk_strength = VAR_8;
 if (!FUNC_12(VAR_35, "sclk-strength", &VAR_36)) {
  if (VAR_36 > VAR_7)
   VAR_36 = VAR_8;
  VAR_31->sclk_strength = VAR_36;
 }


 FUNC_19(VAR_29);

 VAR_32 = FUNC_10(&VAR_29->dev,
   &VAR_27, &VAR_26, 1);
 if (VAR_32)
  goto disable_clk;

 return 0;

disable_clk:
 FUNC_2(VAR_31->mclk);

disable_regs:
 FUNC_16(VAR_31->num_supplies, VAR_31->supplies);
 FUNC_17(VAR_31->num_supplies, VAR_31->supplies);

 return VAR_32;
}
