
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;






 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct snd_soc_component*,unsigned int) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_3,
    struct snd_soc_dapm_widget *VAR_4)
{
 unsigned int VAR_5, VAR_6, VAR_7;
 struct snd_soc_component *VAR_8 =
  FUNC_1(VAR_3->dapm);

 switch (VAR_3->shift) {
 case 131:
  VAR_5 = VAR_2;
  VAR_6 = VAR_0;
  break;
 case 128:
  VAR_5 = VAR_1;
  VAR_6 = VAR_0;
  break;
 default:
  return 0;
 }

 VAR_7 = (FUNC_0(VAR_8, VAR_5) >> VAR_6) & 0xf;
 switch (VAR_7) {
 case 130:
 case 129:
  return 1;
 default:
  return 0;
 }

}
