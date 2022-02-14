
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_hw_rule {struct davinci_mcasp_ruledata* private; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_mask {int dummy; } ;
struct davinci_mcasp_ruledata {TYPE_1__* mcasp; } ;
struct TYPE_2__ {int max_format_width; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct snd_mask* FUNC_0 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_1 (struct snd_mask*) ;
 int FUNC_2 (struct snd_mask*,struct snd_mask*) ;
 int FUNC_3 (struct snd_mask*,int) ;
 scalar_t__ FUNC_4 (struct snd_mask*,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_hw_params *VAR_2,
           struct snd_pcm_hw_rule *VAR_3)
{
 struct davinci_mcasp_ruledata *VAR_4 = VAR_3->private;
 struct snd_mask *VAR_5 = FUNC_0(VAR_2, VAR_1);
 struct snd_mask VAR_6;
 int VAR_7, VAR_8;

 FUNC_1(&VAR_6);
 VAR_8 = VAR_4->mcasp->max_format_width;

 for (VAR_7 = 0; VAR_7 <= VAR_0; VAR_7++) {
  if (FUNC_4(VAR_5, VAR_7)) {
   if (FUNC_5(VAR_7) == VAR_8) {
    FUNC_3(&VAR_6, VAR_7);
   }
  }
 }

 return FUNC_2(VAR_5, &VAR_6);
}
