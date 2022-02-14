
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx_spdif_info {int reg_base; int mapbase; int dai_clk; } ;
struct resource {int start; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,struct resource*) ;
 struct zx_spdif_info* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *,int *,int) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct zx_spdif_info*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_5)
{
 struct resource *VAR_6;
 struct zx_spdif_info *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_5(&VAR_5->dev, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->dai_clk = FUNC_3(&VAR_5->dev, "tx");
 if (FUNC_0(VAR_7->dai_clk)) {
  FUNC_2(&VAR_5->dev, "Fail to get clk\n");
  return FUNC_1(VAR_7->dai_clk);
 }

 VAR_6 = FUNC_8(VAR_5, VAR_2, 0);
 VAR_7->mapbase = VAR_6->start;
 VAR_7->reg_base = FUNC_4(&VAR_5->dev, VAR_6);
 if (FUNC_0(VAR_7->reg_base)) {
  FUNC_2(&VAR_5->dev, "ioremap failed!\n");
  return FUNC_1(VAR_7->reg_base);
 }

 FUNC_10(VAR_7->reg_base);
 FUNC_9(VAR_5, VAR_7);

 VAR_8 = FUNC_7(&VAR_5->dev, &VAR_3,
      &VAR_4, 1);
 if (VAR_8) {
  FUNC_2(&VAR_5->dev, "Register DAI failed: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_8 = FUNC_6(&VAR_5->dev, ((void*)0), 0);
 if (VAR_8)
  FUNC_2(&VAR_5->dev, "Register platform PCM failed: %d\n", VAR_8);

 return VAR_8;
}
