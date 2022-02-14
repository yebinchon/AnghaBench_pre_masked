
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_tdm_info {struct regmap* regbase; int phy_addr; struct regmap* dai_pclk; struct regmap* dai_wclk; struct device* dev; } ;
struct resource {int start; } ;
struct regmap {int dummy; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;
struct of_phandle_args {unsigned int* args; int np; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct regmap*) ;
 int FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct device*,char*,...) ;
 void* FUNC_3 (struct device*,char*) ;
 struct regmap* FUNC_4 (struct device*,struct resource*) ;
 struct zx_tdm_info* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int *,int ) ;
 int FUNC_7 (struct device*,int *,int *,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*,int,int ,struct of_phandle_args*) ;
 struct resource* FUNC_10 (struct platform_device*,int ,int ) ;
 int FUNC_11 (struct platform_device*,struct zx_tdm_info*) ;
 int FUNC_12 (struct regmap*,unsigned int,unsigned int,unsigned int) ;
 struct regmap* FUNC_13 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_14 (struct zx_tdm_info*) ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct of_phandle_args VAR_7;
 unsigned int VAR_8;
 struct zx_tdm_info *VAR_9;
 unsigned int VAR_10;
 struct resource *VAR_11;
 struct regmap *VAR_12;
 int VAR_13;

 VAR_9 = FUNC_5(&VAR_5->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->dev = VAR_6;

 VAR_9->dai_wclk = FUNC_3(&VAR_5->dev, "wclk");
 if (FUNC_0(VAR_9->dai_wclk)) {
  FUNC_2(&VAR_5->dev, "Fail to get wclk\n");
  return FUNC_1(VAR_9->dai_wclk);
 }

 VAR_9->dai_pclk = FUNC_3(&VAR_5->dev, "pclk");
 if (FUNC_0(VAR_9->dai_pclk)) {
  FUNC_2(&VAR_5->dev, "Fail to get pclk\n");
  return FUNC_1(VAR_9->dai_pclk);
 }

 VAR_11 = FUNC_10(VAR_5, VAR_2, 0);
 VAR_9->phy_addr = VAR_11->start;
 VAR_9->regbase = FUNC_4(&VAR_5->dev, VAR_11);
 if (FUNC_0(VAR_9->regbase))
  return FUNC_1(VAR_9->regbase);

 VAR_13 = FUNC_9(VAR_5->dev.of_node,
    "zte,tdm-dma-sysctrl", 2, 0, &VAR_7);
 if (VAR_13) {
  FUNC_2(&VAR_5->dev, "Fail to get zte,tdm-dma-sysctrl\n");
  return VAR_13;
 }

 VAR_8 = VAR_7.args[0];
 VAR_10 = VAR_7.args[1];
 VAR_12 = FUNC_13(VAR_7.np);
 if (FUNC_0(VAR_12)) {
  FUNC_8(VAR_7.np);
  return FUNC_1(VAR_12);
 }

 FUNC_12(VAR_12, VAR_8, VAR_10, VAR_10);
 FUNC_8(VAR_7.np);

 FUNC_14(VAR_9);
 FUNC_11(VAR_5, VAR_9);

 VAR_13 = FUNC_7(&VAR_5->dev, &VAR_3,
      &VAR_4, 1);
 if (VAR_13) {
  FUNC_2(&VAR_5->dev, "Register DAI failed: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_6(&VAR_5->dev, ((void*)0), 0);
 if (VAR_13)
  FUNC_2(&VAR_5->dev, "Register platform PCM failed: %d\n", VAR_13);

 return VAR_13;
}
