
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct of_device_id {scalar_t__ data; } ;
struct jz4740_i2s {int version; void* clk_i2s; void* clk_aic; int phys_base; void* base; } ;
typedef enum jz47xx_i2s_version { ____Placeholder_jz47xx_i2s_version } jz47xx_i2s_version ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (void*) ;
 int VAR_4 ;
 void* FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,struct resource*) ;
 struct jz4740_i2s* FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int *,int ) ;
 int FUNC_6 (int *,int *,int *,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct of_device_id* FUNC_7 (int ,int *) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int ) ;
 int FUNC_9 (struct platform_device*,struct jz4740_i2s*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_9)
{
 struct jz4740_i2s *VAR_10;
 struct resource *VAR_11;
 int VAR_12;
 const struct of_device_id *VAR_13;

 VAR_10 = FUNC_4(&VAR_9->dev, sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;

 VAR_13 = FUNC_7(VAR_7, &VAR_9->dev);
 if (VAR_13)
  VAR_10->version = (enum jz47xx_i2s_version)VAR_13->data;

 VAR_11 = FUNC_8(VAR_9, VAR_2, 0);
 VAR_10->base = FUNC_3(&VAR_9->dev, VAR_11);
 if (FUNC_0(VAR_10->base))
  return FUNC_1(VAR_10->base);

 VAR_10->phys_base = VAR_11->start;

 VAR_10->clk_aic = FUNC_2(&VAR_9->dev, "aic");
 if (FUNC_0(VAR_10->clk_aic))
  return FUNC_1(VAR_10->clk_aic);

 VAR_10->clk_i2s = FUNC_2(&VAR_9->dev, "i2s");
 if (FUNC_0(VAR_10->clk_i2s))
  return FUNC_1(VAR_10->clk_i2s);

 FUNC_9(VAR_9, VAR_10);

 if (VAR_10->version == VAR_3)
  VAR_12 = FUNC_6(&VAR_9->dev,
   &VAR_5, &VAR_8, 1);
 else
  VAR_12 = FUNC_6(&VAR_9->dev,
   &VAR_5, &VAR_6, 1);

 if (VAR_12)
  return VAR_12;

 return FUNC_5(&VAR_9->dev, ((void*)0),
  VAR_4);
}
