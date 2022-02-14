
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_mixer_control {scalar_t__ qpos; scalar_t__ upos; scalar_t__ ready_buf; } ;
struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct fsl_spdif_priv {struct platform_device* pdev; struct regmap* regmap; struct spdif_mixer_control fsl_spdif_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct regmap*,int ,int *) ;

__attribute__((used)) static void FUNC_2(struct fsl_spdif_priv *VAR_2)
{
 struct spdif_mixer_control *VAR_3 = &VAR_2->fsl_spdif_control;
 struct regmap *VAR_4 = VAR_2->regmap;
 struct platform_device *VAR_5 = VAR_2->pdev;
 u32 VAR_6;

 FUNC_0(&VAR_5->dev, "isr: U/Q Channel framing error\n");


 FUNC_1(VAR_4, VAR_1, &VAR_6);
 FUNC_1(VAR_4, VAR_0, &VAR_6);


 VAR_3->ready_buf = 0;
 VAR_3->upos = 0;
 VAR_3->qpos = 0;
}
