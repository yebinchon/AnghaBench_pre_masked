
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct snd_pcm_hw_rule {int var; struct davinci_mcasp_ruledata* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {int empty; int min; int max; } ;
struct davinci_mcasp_ruledata {TYPE_1__* mcasp; } ;
struct TYPE_2__ {int tdm_slots; int slot_width; int auxclk_fs_ratio; unsigned int sysclk_freq; int dev; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,unsigned int,int,int) ;
 int* VAR_2 ;
 int FUNC_3 (int ,char*,int,int,int,int,int,int) ;
 struct snd_interval* FUNC_4 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_interval*) ;
 int FUNC_7 (struct snd_interval*,struct snd_interval*) ;
 scalar_t__ FUNC_8 (struct snd_interval*,int) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_hw_params *VAR_3,
          struct snd_pcm_hw_rule *VAR_4)
{
 struct davinci_mcasp_ruledata *VAR_5 = VAR_4->private;
 struct snd_interval *VAR_6 =
  FUNC_4(VAR_3, VAR_1);
 int VAR_7 = FUNC_5(VAR_3);
 int VAR_8 = VAR_5->mcasp->tdm_slots;
 struct snd_interval VAR_9;
 int VAR_10;

 if (VAR_5->mcasp->slot_width)
  VAR_7 = VAR_5->mcasp->slot_width;

 FUNC_6(&VAR_9);
 VAR_9.empty = 1;

 for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_2); VAR_10++) {
  if (FUNC_8(VAR_6, VAR_2[VAR_10])) {
   uint VAR_11 = VAR_7 * VAR_8 *
      VAR_2[VAR_10];
   unsigned int VAR_12;
   int VAR_13;

   if (VAR_5->mcasp->auxclk_fs_ratio)
    VAR_12 = VAR_2[VAR_10] *
            VAR_5->mcasp->auxclk_fs_ratio;
   else
    VAR_12 = VAR_5->mcasp->sysclk_freq;

   VAR_13 = FUNC_2(VAR_5->mcasp, VAR_12,
        VAR_11, 0);
   if (FUNC_1(VAR_13) < VAR_0) {
    if (VAR_9.empty) {
     VAR_9.min = VAR_2[VAR_10];
     VAR_9.empty = 0;
    }
    VAR_9.max = VAR_2[VAR_10];
   }
  }
 }

 FUNC_3(VAR_5->mcasp->dev,
  "Frequencies %d-%d -> %d-%d for %d sbits and %d tdm slots\n",
  VAR_6->min, VAR_6->max, VAR_9.min, VAR_9.max, VAR_7, VAR_8);

 return FUNC_7(FUNC_4(VAR_3, VAR_4->var),
       &VAR_9);
}
