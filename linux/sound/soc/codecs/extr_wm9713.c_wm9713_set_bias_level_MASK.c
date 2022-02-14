
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_3,
     enum snd_soc_bias_level VAR_4)
{
 switch (VAR_4) {
 case 130:

  FUNC_0(VAR_3, VAR_0, 0xe400, 0x0000);
  break;
 case 129:
  break;
 case 128:

  FUNC_0(VAR_3, VAR_0, 0xc400, 0x0000);
  FUNC_1(VAR_3, VAR_2, 0x0000);
  break;
 case 131:

  FUNC_1(VAR_3, VAR_0, 0xffff);
  FUNC_1(VAR_3, VAR_1, 0xffff);
  FUNC_1(VAR_3, VAR_2, 0xffff);
  break;
 }
 return 0;
}
