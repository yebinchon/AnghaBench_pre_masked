
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int bias_level; scalar_t__ component; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (scalar_t__,int) ;

int FUNC_1(struct snd_soc_dapm_context *VAR_0,
 enum snd_soc_bias_level VAR_1)
{
 int VAR_2 = 0;

 if (VAR_0->component)
  VAR_2 = FUNC_0(VAR_0->component, VAR_1);

 if (VAR_2 == 0)
  VAR_0->bias_level = VAR_1;

 return VAR_2;
}
