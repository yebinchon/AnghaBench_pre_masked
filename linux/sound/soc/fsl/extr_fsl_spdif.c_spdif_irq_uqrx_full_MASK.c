
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct spdif_mixer_control {int upos; int qpos; int* subcode; } ;
struct regmap {int dummy; } ;
struct platform_device {int dev; } ;
struct fsl_spdif_priv {struct platform_device* pdev; struct regmap* regmap; struct spdif_mixer_control fsl_spdif_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,char) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct regmap*,int,int*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct fsl_spdif_priv *VAR_4, char VAR_5)
{
 struct spdif_mixer_control *VAR_6 = &VAR_4->fsl_spdif_control;
 struct regmap *VAR_7 = VAR_4->regmap;
 struct platform_device *VAR_8 = VAR_4->pdev;
 u32 *VAR_9, VAR_10, VAR_11, VAR_12;

 switch (VAR_5) {
 case 'U':
  VAR_9 = &VAR_6->upos;
  VAR_10 = VAR_3;
  VAR_12 = VAR_1;
  break;
 case 'Q':
  VAR_9 = &VAR_6->qpos;
  VAR_10 = VAR_2;
  VAR_12 = VAR_0;
  break;
 default:
  FUNC_1(&VAR_8->dev, "unsupported channel name\n");
  return;
 }

 FUNC_0(&VAR_8->dev, "isr: %c Channel receive register full\n", VAR_5);

 if (*VAR_9 >= VAR_10 * 2) {
  *VAR_9 = 0;
 } else if (FUNC_3((*VAR_9 % VAR_10) + 3 > VAR_10)) {
  FUNC_1(&VAR_8->dev, "User bit receive buffer overflow\n");
  return;
 }

 FUNC_2(VAR_7, VAR_12, &VAR_11);
 VAR_6->subcode[*VAR_9++] = VAR_11 >> 16;
 VAR_6->subcode[*VAR_9++] = VAR_11 >> 8;
 VAR_6->subcode[*VAR_9++] = VAR_11;
}
