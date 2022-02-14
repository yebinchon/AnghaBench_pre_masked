
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {struct device* dev; } ;
struct fsl_micfil {int* channel_gain; int regmap; TYPE_1__* soc; int dma_params_rx; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int fifo_depth; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct device*,char*,...) ;
 struct fsl_micfil* FUNC_2 (struct device*) ;
 int FUNC_3 (int ,int ,int ,unsigned int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct snd_soc_dai*,int *,int *) ;
 int FUNC_6 (struct snd_soc_dai*,struct fsl_micfil*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_dai *VAR_6)
{
 struct fsl_micfil *VAR_7 = FUNC_2(VAR_6->dev);
 struct device *VAR_8 = VAR_6->dev;
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;


 VAR_10 = FUNC_3(VAR_7->regmap, VAR_3,
     VAR_0, VAR_2);
 if (VAR_10) {
  FUNC_1(VAR_8, "failed to set quality mode bits, reg 0x%X\n",
   VAR_3);
  return VAR_10;
 }


 FUNC_4(VAR_7->regmap, VAR_5, 0x77777777);
 for (VAR_11 = 0; VAR_11 < 8; VAR_11++)
  VAR_7->channel_gain[VAR_11] = 0xF;

 FUNC_5(VAR_6, ((void*)0),
      &VAR_7->dma_params_rx);


 VAR_9 = FUNC_0(VAR_7->soc->fifo_depth) - 1;
 VAR_10 = FUNC_3(VAR_7->regmap, VAR_4,
     VAR_1,
     VAR_9);
 if (VAR_10) {
  FUNC_1(VAR_8, "failed to set FIFOWMK\n");
  return VAR_10;
 }

 FUNC_6(VAR_6, VAR_7);

 return 0;
}
