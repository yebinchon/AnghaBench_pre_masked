
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


 int FUNC_0 (struct snd_soc_component*,int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_component *VAR_5,
           enum snd_soc_bias_level VAR_6)
{
 switch (VAR_6) {
 case 128:

  FUNC_0(VAR_5, VAR_3, VAR_4);

  FUNC_0(VAR_5, VAR_0, VAR_2);

  break;

 case 129:

  FUNC_0(VAR_5, VAR_3, VAR_4);

  FUNC_0(VAR_5, VAR_0, VAR_1);

  break;
 default:
  break;
 }

 return 0;
}
