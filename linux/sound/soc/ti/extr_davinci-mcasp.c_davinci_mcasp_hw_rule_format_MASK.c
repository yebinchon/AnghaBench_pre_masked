
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint ;
struct snd_pcm_hw_rule {struct davinci_mcasp_ruledata* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct davinci_mcasp_ruledata {TYPE_1__* mcasp; } ;
struct TYPE_2__ {int tdm_slots; int auxclk_fs_ratio; unsigned int sysclk_freq; int slot_width; int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int,int) ;
 int FUNC_2 (int ,char*,int,int,int) ;
 struct snd_mask* FUNC_3 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 int FUNC_5 (struct snd_mask*) ;
 int FUNC_6 (struct snd_mask*,struct snd_mask*) ;
 int FUNC_7 (struct snd_mask*,int) ;
 scalar_t__ FUNC_8 (struct snd_mask*,int) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_hw_params *VAR_3,
     struct snd_pcm_hw_rule *VAR_4)
{
 struct davinci_mcasp_ruledata *VAR_5 = VAR_4->private;
 struct snd_mask *VAR_6 = FUNC_3(VAR_3, VAR_2);
 struct snd_mask VAR_7;
 int VAR_8 = FUNC_4(VAR_3);
 int VAR_9 = VAR_5->mcasp->tdm_slots;
 int VAR_10, VAR_11 = 0;

 FUNC_5(&VAR_7);

 for (VAR_10 = 0; VAR_10 <= VAR_1; VAR_10++) {
  if (FUNC_8(VAR_6, VAR_10)) {
   uint VAR_12 = FUNC_9(VAR_10);
   unsigned int VAR_13;
   int VAR_14;

   if (VAR_5->mcasp->auxclk_fs_ratio)
    VAR_13 = VAR_8 *
            VAR_5->mcasp->auxclk_fs_ratio;
   else
    VAR_13 = VAR_5->mcasp->sysclk_freq;

   if (VAR_5->mcasp->slot_width)
    VAR_12 = VAR_5->mcasp->slot_width;

   VAR_14 = FUNC_1(VAR_5->mcasp, VAR_13,
        VAR_12 * VAR_9 * VAR_8,
        0);
   if (FUNC_0(VAR_14) < VAR_0) {
    FUNC_7(&VAR_7, VAR_10);
    VAR_11++;
   }
  }
 }
 FUNC_2(VAR_5->mcasp->dev,
  "%d possible sample format for %d Hz and %d tdm slots\n",
  VAR_11, VAR_8, VAR_9);

 return FUNC_6(VAR_6, &VAR_7);
}
