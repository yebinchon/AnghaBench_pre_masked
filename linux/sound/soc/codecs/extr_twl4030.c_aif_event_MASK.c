
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 struct snd_soc_component* FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 int FUNC_2 (struct snd_soc_component*,int ) ;
 int FUNC_3 (struct snd_soc_component*,int ,int) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_2,
       struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = FUNC_0(VAR_2->dapm);
 u8 VAR_6;

 VAR_6 = FUNC_2(VAR_5, VAR_1);
 switch (VAR_4) {
 case 128:


  FUNC_1(VAR_5, 1);

  FUNC_3(VAR_5, VAR_1,
         VAR_6 | VAR_0);
  break;
 case 129:

  FUNC_3(VAR_5, VAR_1,
         VAR_6 & ~VAR_0);
  FUNC_1(VAR_5, 0);
  break;
 }
 return 0;
}
