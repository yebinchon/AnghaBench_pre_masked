
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int const FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_0,
    enum snd_soc_bias_level VAR_1)
{
 int VAR_2;

 switch (VAR_1) {
 case 130:
  break;
 case 129:
  break;
 case 128:
  if (FUNC_2(VAR_0) == 131) {

   VAR_2 = FUNC_0(VAR_0, 1);
   if (VAR_2 != 0)
    return VAR_2;

   FUNC_1(VAR_0);
  }
  break;
 case 131:

  if (FUNC_2(VAR_0) == 131)
   return 0;
  VAR_2 = FUNC_0(VAR_0, 0);
  if (VAR_2 != 0)
   return VAR_2;
  break;
 }

 return 0;
}
