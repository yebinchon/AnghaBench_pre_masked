
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dummy; } ;
typedef enum snd_soc_bias_level { ____Placeholder_snd_soc_bias_level } snd_soc_bias_level ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;




 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_component *VAR_2,
    enum snd_soc_bias_level VAR_3)
{
 switch (VAR_3) {
 case 130:
  break;
 case 129:
  break;

 case 128:
  FUNC_1(VAR_2, VAR_1,
    VAR_0, FUNC_0(0));
  break;

 case 131:
  FUNC_1(VAR_2, VAR_1,
    VAR_0, 0);
  break;
 }

 return 0;
}
