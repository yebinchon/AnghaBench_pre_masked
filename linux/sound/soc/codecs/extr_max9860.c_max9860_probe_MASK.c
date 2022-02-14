
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int notifier_call; } ;
struct max9860_priv {int psclk; unsigned long pclk_rate; struct clk* dvddio; struct clk* regmap; TYPE_3__ dvddio_nb; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct clk {int dummy; } ;
struct TYPE_6__ {int num_reg_defaults; TYPE_1__* reg_defaults; } ;
struct TYPE_5__ {int reg; int def; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct clk*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct clk*) ;
 struct clk* FUNC_2 (struct device*,char*) ;
 unsigned long FUNC_3 (struct clk*) ;
 int FUNC_4 (struct clk*) ;
 int FUNC_5 (struct device*,char*,unsigned long,unsigned long) ;
 int FUNC_6 (struct device*,char*,int,...) ;
 int FUNC_7 (struct device*,struct max9860_priv*) ;
 struct max9860_priv* FUNC_8 (struct device*,int,int ) ;
 struct clk* FUNC_9 (struct i2c_client*,TYPE_2__*) ;
 struct clk* FUNC_10 (struct device*,char*) ;
 int FUNC_11 (struct clk*,TYPE_3__*) ;
 int FUNC_12 (struct device*,int *,int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_13 (struct device*) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct device*) ;
 int FUNC_17 (struct clk*,int) ;
 int FUNC_18 (struct clk*,int ,int*) ;
 int FUNC_19 (struct clk*,int ,int ) ;
 int FUNC_20 (struct clk*) ;
 int FUNC_21 (struct clk*) ;

__attribute__((used)) static int FUNC_22(struct i2c_client *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct max9860_priv *VAR_12;
 int VAR_13;
 struct clk *VAR_14;
 unsigned long VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_12 = FUNC_8(VAR_11, sizeof(struct max9860_priv), VAR_3);
 if (!VAR_12)
  return -VAR_1;

 VAR_12->dvddio = FUNC_10(VAR_11, "DVDDIO");
 if (FUNC_0(VAR_12->dvddio)) {
  VAR_13 = FUNC_1(VAR_12->dvddio);
  if (VAR_13 != -VAR_2)
   FUNC_6(VAR_11, "Failed to get DVDDIO supply: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_12->dvddio_nb.notifier_call = VAR_8;

 VAR_13 = FUNC_11(VAR_12->dvddio,
            &VAR_12->dvddio_nb);
 if (VAR_13)
  FUNC_6(VAR_11, "Failed to register DVDDIO notifier: %d\n", VAR_13);

 VAR_13 = FUNC_21(VAR_12->dvddio);
 if (VAR_13 != 0) {
  FUNC_6(VAR_11, "Failed to enable DVDDIO: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_12->regmap = FUNC_9(VAR_10, &VAR_9);
 if (FUNC_0(VAR_12->regmap)) {
  VAR_13 = FUNC_1(VAR_12->regmap);
  goto err_regulator;
 }

 FUNC_7(VAR_11, VAR_12);






 VAR_14 = FUNC_2(VAR_11, "mclk");

 if (FUNC_0(VAR_14)) {
  VAR_13 = FUNC_1(VAR_14);
  if (VAR_13 != -VAR_2)
   FUNC_6(VAR_11, "Failed to get MCLK: %d\n", VAR_13);
  goto err_regulator;
 }

 VAR_15 = FUNC_3(VAR_14);
 FUNC_4(VAR_14);

 if (VAR_15 > 60000000 || VAR_15 < 10000000) {
  FUNC_6(VAR_11, "Bad mclk %luHz (needs 10MHz - 60MHz)\n",
   VAR_15);
  VAR_13 = -VAR_0;
  goto err_regulator;
 }
 if (VAR_15 >= 40000000)
  VAR_12->psclk = 3;
 else if (VAR_15 >= 20000000)
  VAR_12->psclk = 2;
 else
  VAR_12->psclk = 1;
 VAR_12->pclk_rate = VAR_15 >> (VAR_12->psclk - 1);
 VAR_12->psclk <<= VAR_5;
 FUNC_5(VAR_11, "mclk %lu pclk %lu\n", VAR_15, VAR_12->pclk_rate);

 FUNC_17(VAR_12->regmap, 1);
 for (VAR_16 = 0; VAR_16 < VAR_9.num_reg_defaults; ++VAR_16) {
  VAR_13 = FUNC_19(VAR_12->regmap,
       VAR_9.reg_defaults[VAR_16].reg,
       VAR_9.reg_defaults[VAR_16].def);
  if (VAR_13) {
   FUNC_6(VAR_11, "Failed to initialize register %u: %d\n",
    VAR_9.reg_defaults[VAR_16].reg, VAR_13);
   goto err_regulator;
  }
 }
 FUNC_17(VAR_12->regmap, 0);

 VAR_13 = FUNC_18(VAR_12->regmap, VAR_4, &VAR_17);
 if (VAR_13) {
  FUNC_6(VAR_11, "Failed to clear INTRSTATUS: %d\n", VAR_13);
  goto err_regulator;
 }

 FUNC_16(VAR_11);
 FUNC_14(VAR_11);
 FUNC_15(VAR_11);

 VAR_13 = FUNC_12(VAR_11, &VAR_6,
           &VAR_7, 1);
 if (VAR_13) {
  FUNC_6(VAR_11, "Failed to register CODEC: %d\n", VAR_13);
  goto err_pm;
 }

 return 0;

err_pm:
 FUNC_13(VAR_11);
err_regulator:
 FUNC_20(VAR_12->dvddio);
 return VAR_13;
}
