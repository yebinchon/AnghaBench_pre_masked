
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spdif_mixer_control {int qpos; int ready_buf; } ;
struct platform_device {int dev; } ;
struct fsl_spdif_priv {struct platform_device* pdev; struct spdif_mixer_control fsl_spdif_control; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct fsl_spdif_priv *VAR_1)
{
 struct spdif_mixer_control *VAR_2 = &VAR_1->fsl_spdif_control;
 struct platform_device *VAR_3 = VAR_1->pdev;

 FUNC_0(&VAR_3->dev, "isr: U/Q Channel sync found\n");


 if (VAR_2->qpos == 0)
  return;


 VAR_2->ready_buf = (VAR_2->qpos - 1) / VAR_0 + 1;
}
