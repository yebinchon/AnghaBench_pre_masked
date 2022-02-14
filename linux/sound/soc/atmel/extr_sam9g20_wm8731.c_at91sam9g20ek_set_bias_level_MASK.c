
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_card {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_2(struct snd_soc_card *VAR_1,
     struct snd_soc_dapm_context *VAR_2,
     enum snd_soc_bias_level VAR_3)
{
 static int VAR_4;
 int VAR_5 = 0;

 switch (VAR_3) {
 case 130:
 case 129:
  if (!VAR_4)
   VAR_5 = FUNC_1(VAR_0);
  if (VAR_5 == 0)
   VAR_4 = 1;
  break;

 case 131:
 case 128:
  if (VAR_4)
   FUNC_0(VAR_0);
  VAR_4 = 0;
  break;
 }

 return VAR_5;
}
