
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct snd_soc_component*,unsigned int) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_2,
    struct snd_soc_dapm_widget *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_1(VAR_2->dapm);
 unsigned int VAR_5, VAR_6, VAR_7;

 switch (VAR_2->shift) {
 case 0:
  VAR_5 = VAR_1;
  VAR_6 = 0;
  break;
 case 1:
  VAR_5 = VAR_1;
  VAR_6 = 4;
  break;
 case 3:
  VAR_5 = VAR_0;
  VAR_6 = 0;
  break;
 case 8:
  VAR_5 = VAR_0;
  VAR_6 = 4;
  break;
 case 9:
  VAR_5 = VAR_0;
  VAR_6 = 8;
  break;
 case 10:
  VAR_5 = VAR_0;
  VAR_6 = 12;
  break;
 default:
  return 0;
 }

 VAR_7 = (FUNC_0(VAR_4, VAR_5) >> VAR_6) & 0xf;
 switch (VAR_7) {
 case 1:
 case 2:
 case 3:
 case 4:
  return 1;
 default:
  return 0;
 }

}
