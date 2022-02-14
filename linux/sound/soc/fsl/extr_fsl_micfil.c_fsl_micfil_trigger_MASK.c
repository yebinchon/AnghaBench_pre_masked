
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct fsl_micfil {int regmap; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ,int ,int ,int) ;
 struct fsl_micfil* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_6, int VAR_7,
         struct snd_soc_dai *VAR_8)
{
 struct fsl_micfil *VAR_9 = FUNC_3(VAR_8);
 struct device *VAR_10 = &VAR_9->pdev->dev;
 int VAR_11;

 switch (VAR_7) {
 case 130:
 case 131:
 case 132:
  VAR_11 = FUNC_1(VAR_10);
  if (VAR_11) {
   FUNC_0(VAR_10, "failed to soft reset\n");
   return VAR_11;
  }







  VAR_11 = FUNC_2(VAR_9->regmap, VAR_5,
      VAR_1,
      (1 << VAR_2));
  if (VAR_11) {
   FUNC_0(VAR_10, "failed to update DISEL bits\n");
   return VAR_11;
  }


  VAR_11 = FUNC_2(VAR_9->regmap, VAR_5,
      VAR_4,
      VAR_3);
  if (VAR_11) {
   FUNC_0(VAR_10, "failed to enable the module\n");
   return VAR_11;
  }

  break;
 case 129:
 case 128:
 case 133:

  VAR_11 = FUNC_2(VAR_9->regmap, VAR_5,
      VAR_4,
      0);
  if (VAR_11) {
   FUNC_0(VAR_10, "failed to enable the module\n");
   return VAR_11;
  }

  VAR_11 = FUNC_2(VAR_9->regmap, VAR_5,
      VAR_1,
      (0 << VAR_2));
  if (VAR_11) {
   FUNC_0(VAR_10, "failed to update DISEL bits\n");
   return VAR_11;
  }
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
