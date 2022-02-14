
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct snd_soc_component*,int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_6,
          enum snd_soc_bias_level VAR_7)
{
 u16 VAR_8 = FUNC_0(VAR_6, VAR_5) & 0x17f;

 switch (VAR_7) {
 case 130:

  VAR_8 &= ~(VAR_3 | VAR_4 | VAR_2);

  FUNC_1(VAR_6, VAR_5, VAR_8);
  break;
 case 129:
  break;
 case 128:

  FUNC_1(VAR_6, VAR_5,
         VAR_8 | VAR_1);
  break;
 case 131:

  FUNC_1(VAR_6, VAR_0, 0x0);
  FUNC_1(VAR_6, VAR_5, 0x1ff);
  break;
 }
 return 0;
}
