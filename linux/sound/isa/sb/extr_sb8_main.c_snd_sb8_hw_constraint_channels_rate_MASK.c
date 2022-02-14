
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_hw_rule {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_interval {scalar_t__ min; scalar_t__ max; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct snd_interval* FUNC_1 (struct snd_pcm_hw_params*,int ) ;
 int FUNC_2 (struct snd_interval*,struct snd_interval*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_hw_params *VAR_2,
            struct snd_pcm_hw_rule *VAR_3)
{
 struct snd_interval *VAR_4 = FUNC_1(VAR_2, VAR_1);
 if (VAR_4->min > FUNC_0(22050) || VAR_4->max <= FUNC_0(11025)) {
  struct snd_interval VAR_5 = { .min = 1, .max = 1 };
  return FUNC_2(FUNC_1(VAR_2, VAR_0), &VAR_5);
 }
 return 0;
}
