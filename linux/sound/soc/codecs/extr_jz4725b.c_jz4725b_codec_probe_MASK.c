
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct jz_icdc {int clk; int regmap; int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 struct jz_icdc* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct device*,int *,struct jz_icdc*,int *) ;
 int FUNC_7 (struct device*,int *,int *,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (struct platform_device*,struct jz_icdc*) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct jz_icdc *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->base = FUNC_5(VAR_5, 0);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_7->regmap = FUNC_6(VAR_6, ((void*)0), VAR_7,
     &VAR_4);
 if (FUNC_0(VAR_7->regmap))
  return FUNC_1(VAR_7->regmap);

 VAR_7->clk = FUNC_3(&VAR_5->dev, "aic");
 if (FUNC_0(VAR_7->clk))
  return FUNC_1(VAR_7->clk);

 FUNC_8(VAR_5, VAR_7);

 VAR_8 = FUNC_7(VAR_6, &VAR_2,
           &VAR_3, 1);
 if (VAR_8)
  FUNC_2(VAR_6, "Failed to register codec\n");

 return VAR_8;
}
