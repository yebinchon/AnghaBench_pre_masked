
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct snd_soc_dai_driver {int resume; int suspend; int * ops; } ;
struct resource {int dummy; } ;
struct TYPE_10__ {struct i2s_platform_data* platform_data; } ;
struct platform_device {TYPE_1__ dev; int name; } ;
struct i2s_platform_data {int cap; int quirks; int i2s_clk_cfg; int i2s_reg_comp2; int i2s_reg_comp1; } ;
struct dw_i2s_dev {int capability; int quirks; int use_pio; int clk; int i2s_clk_cfg; int i2s_reg_comp2; int i2s_reg_comp1; TYPE_1__* dev; int i2s_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,char*,...) ;
 int FUNC_5 (TYPE_1__*,struct dw_i2s_dev*) ;
 int FUNC_6 (TYPE_1__*,char const*) ;
 int FUNC_7 (TYPE_1__*,struct resource*) ;
 void* FUNC_8 (TYPE_1__*,int,int ) ;
 int FUNC_9 (TYPE_1__*,int,int ,int ,int ,struct dw_i2s_dev*) ;
 int FUNC_10 (TYPE_1__*,int *,int ) ;
 int FUNC_11 (TYPE_1__*,int *,struct snd_soc_dai_driver*,int) ;
 int FUNC_12 (struct dw_i2s_dev*,struct snd_soc_dai_driver*,struct resource*) ;
 int FUNC_13 (struct dw_i2s_dev*,struct snd_soc_dai_driver*,struct resource*,struct i2s_platform_data const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_14 (struct platform_device*) ;
 int VAR_12 ;
 int FUNC_15 (struct platform_device*,int ) ;
 struct resource* FUNC_16 (struct platform_device*,int ,int ) ;
 int FUNC_17 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_13)
{
 const struct i2s_platform_data *VAR_14 = VAR_13->dev.platform_data;
 struct dw_i2s_dev *VAR_15;
 struct resource *VAR_16;
 int VAR_17, VAR_18;
 struct snd_soc_dai_driver *VAR_19;
 const char *VAR_20;

 VAR_15 = FUNC_8(&VAR_13->dev, sizeof(*VAR_15), VAR_4);
 if (!VAR_15)
  return -VAR_3;

 VAR_19 = FUNC_8(&VAR_13->dev, sizeof(*VAR_19), VAR_4);
 if (!VAR_19)
  return -VAR_3;

 VAR_19->ops = &VAR_9;
 VAR_19->suspend = VAR_11;
 VAR_19->resume = VAR_10;

 VAR_16 = FUNC_16(VAR_13, VAR_7, 0);
 VAR_15->i2s_base = FUNC_7(&VAR_13->dev, VAR_16);
 if (FUNC_0(VAR_15->i2s_base))
  return FUNC_1(VAR_15->i2s_base);

 VAR_15->dev = &VAR_13->dev;

 VAR_18 = FUNC_15(VAR_13, 0);
 if (VAR_18 >= 0) {
  VAR_17 = FUNC_9(&VAR_13->dev, VAR_18, VAR_12, 0,
    VAR_13->name, VAR_15);
  if (VAR_17 < 0) {
   FUNC_4(&VAR_13->dev, "failed to request irq\n");
   return VAR_17;
  }
 }

 VAR_15->i2s_reg_comp1 = VAR_5;
 VAR_15->i2s_reg_comp2 = VAR_6;
 if (VAR_14) {
  VAR_15->capability = VAR_14->cap;
  VAR_20 = ((void*)0);
  VAR_15->quirks = VAR_14->quirks;
  if (VAR_15->quirks & VAR_1) {
   VAR_15->i2s_reg_comp1 = VAR_14->i2s_reg_comp1;
   VAR_15->i2s_reg_comp2 = VAR_14->i2s_reg_comp2;
  }
  VAR_17 = FUNC_13(VAR_15, VAR_19, VAR_16, VAR_14);
 } else {
  VAR_20 = "i2sclk";
  VAR_17 = FUNC_12(VAR_15, VAR_19, VAR_16);
 }
 if (VAR_17 < 0)
  return VAR_17;

 if (VAR_15->capability & VAR_0) {
  if (VAR_14) {
   VAR_15->i2s_clk_cfg = VAR_14->i2s_clk_cfg;
   if (!VAR_15->i2s_clk_cfg) {
    FUNC_4(&VAR_13->dev, "no clock configure method\n");
    return -VAR_2;
   }
  }
  VAR_15->clk = FUNC_6(&VAR_13->dev, VAR_20);

  if (FUNC_0(VAR_15->clk))
   return FUNC_1(VAR_15->clk);

  VAR_17 = FUNC_3(VAR_15->clk);
  if (VAR_17 < 0)
   return VAR_17;
 }

 FUNC_5(&VAR_13->dev, VAR_15);
 VAR_17 = FUNC_11(&VAR_13->dev, &VAR_8,
      VAR_19, 1);
 if (VAR_17 != 0) {
  FUNC_4(&VAR_13->dev, "not able to register dai\n");
  goto err_clk_disable;
 }

 if (!VAR_14) {
  if (VAR_18 >= 0) {
   VAR_17 = FUNC_14(VAR_13);
   VAR_15->use_pio = 1;
  } else {
   VAR_17 = FUNC_10(&VAR_13->dev, ((void*)0),
     0);
   VAR_15->use_pio = 0;
  }

  if (VAR_17) {
   FUNC_4(&VAR_13->dev, "could not register pcm: %d\n",
     VAR_17);
   goto err_clk_disable;
  }
 }

 FUNC_17(&VAR_13->dev);
 return 0;

err_clk_disable:
 if (VAR_15->capability & VAR_0)
  FUNC_2(VAR_15->clk);
 return VAR_17;
}
