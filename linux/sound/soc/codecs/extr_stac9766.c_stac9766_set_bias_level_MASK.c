
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;




 int FUNC_0 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_1,
       enum snd_soc_bias_level VAR_2)
{
 switch (VAR_2) {
 case 130:
 case 129:
 case 128:
  FUNC_0(VAR_1, VAR_0, 0x0000);
  break;
 case 131:

  FUNC_0(VAR_1, VAR_0, 0xffff);
  break;
 }
 return 0;
}
