
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct fsl_spdif_priv {int dpll_locked; struct platform_device* pdev; struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (struct regmap*,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct fsl_spdif_priv *VAR_2)
{
 struct regmap *VAR_3 = VAR_2->regmap;
 struct platform_device *VAR_4 = VAR_2->pdev;
 u32 VAR_5;

 FUNC_1(VAR_3, VAR_0, &VAR_5);
 VAR_5 &= VAR_1;

 FUNC_0(&VAR_4->dev, "isr: Rx dpll %s \n",
   VAR_5 ? "locked" : "loss lock");

 VAR_2->dpll_locked = VAR_5 ? 1 : 0;
}
