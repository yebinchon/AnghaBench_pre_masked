
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*) ;
 int FUNC_2 (struct snd_soc_component*,int ,int ,int) ;
 int FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_component *VAR_2,
     enum snd_soc_bias_level VAR_3)
{
 switch (VAR_3) {
 case 130:
  break;

 case 129:

  FUNC_2(VAR_2, VAR_0,
        VAR_1, 0x80);

  FUNC_3(VAR_2);
  break;

 case 128:

  FUNC_2(VAR_2, VAR_0,
        VAR_1, 0x100);

  if (FUNC_1(VAR_2) == 131)
   FUNC_0(100);
  break;

 case 131:
  break;
 }

 return 0;
}
