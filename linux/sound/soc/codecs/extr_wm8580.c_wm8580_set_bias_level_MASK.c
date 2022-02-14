
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_4,
 enum snd_soc_bias_level VAR_5)
{
 switch (VAR_5) {
 case 130:
 case 129:
  break;

 case 128:
  if (FUNC_0(VAR_4) == 131) {

   FUNC_1(VAR_4, VAR_1,
         VAR_3 |
         VAR_2, 0);


   FUNC_1(VAR_4, VAR_0,
         0x100, 0);
  }
  break;

 case 131:
  FUNC_1(VAR_4, VAR_1,
        VAR_3, VAR_3);
  break;
 }
 return 0;
}
