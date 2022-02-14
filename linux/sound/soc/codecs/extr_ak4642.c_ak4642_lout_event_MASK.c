
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_2,
        struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_2->dapm);

 switch (VAR_4) {
 case 129:
 case 128:

  FUNC_1(VAR_5, VAR_1, VAR_0, VAR_0);
  break;
 case 130:
 case 131:

  FUNC_0(300);
  FUNC_1(VAR_5, VAR_1, VAR_0, 0);
  break;
 }

 return 0;
}
