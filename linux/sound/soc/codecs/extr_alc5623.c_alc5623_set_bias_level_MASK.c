
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
 int VAR_4 ;




 int FUNC_0 (struct snd_soc_component*) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_5,
          enum snd_soc_bias_level VAR_6)
{
 switch (VAR_6) {
 case 130:
  FUNC_0(VAR_5);
  break;
 case 129:
  break;
 case 128:

  FUNC_1(VAR_5, VAR_3,
    VAR_0);
  FUNC_1(VAR_5, VAR_4,
    VAR_1);
  break;
 case 131:

  FUNC_1(VAR_5, VAR_3, 0);
  FUNC_1(VAR_5, VAR_4, 0);
  FUNC_1(VAR_5, VAR_2, 0);
  break;
 }
 return 0;
}
