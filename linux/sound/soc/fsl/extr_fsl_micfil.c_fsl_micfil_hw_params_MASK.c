
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct TYPE_4__ {unsigned int maxburst; } ;
struct fsl_micfil {TYPE_2__ dma_params_rx; int regmap; TYPE_1__* pdev; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (struct device*,unsigned int) ;
 unsigned int FUNC_2 (struct snd_pcm_hw_params*) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (int ,int ,int,int) ;
 struct fsl_micfil* FUNC_5 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_3,
    struct snd_pcm_hw_params *VAR_4,
    struct snd_soc_dai *VAR_5)
{
 struct fsl_micfil *VAR_6 = FUNC_5(VAR_5);
 unsigned int VAR_7 = FUNC_2(VAR_4);
 unsigned int VAR_8 = FUNC_3(VAR_4);
 struct device *VAR_9 = &VAR_6->pdev->dev;
 int VAR_10;


 VAR_10 = FUNC_4(VAR_6->regmap, VAR_2,
     VAR_0, 0);
 if (VAR_10) {
  FUNC_0(VAR_9, "failed to disable the module\n");
  return VAR_10;
 }


 VAR_10 = FUNC_4(VAR_6->regmap, VAR_2,
     0xFF, ((1 << VAR_7) - 1));
 if (VAR_10) {
  FUNC_0(VAR_9, "failed to enable channels %d, reg 0x%X\n", VAR_10,
   VAR_2);
  return VAR_10;
 }

 VAR_10 = FUNC_1(VAR_9, VAR_8);
 if (VAR_10 < 0) {
  FUNC_0(VAR_9, "Failed to set clock parameters [%d]\n", VAR_10);
  return VAR_10;
 }

 VAR_6->dma_params_rx.maxburst = VAR_7 * VAR_1;

 return 0;
}
