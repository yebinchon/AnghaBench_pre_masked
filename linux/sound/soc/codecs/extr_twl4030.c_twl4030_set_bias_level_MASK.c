
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_0,
      enum snd_soc_bias_level VAR_1)
{
 switch (VAR_1) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  if (FUNC_0(VAR_0) == 131)
   FUNC_1(VAR_0, 1);
  break;
 case 131:
  FUNC_1(VAR_0, 0);
  break;
 }

 return 0;
}
