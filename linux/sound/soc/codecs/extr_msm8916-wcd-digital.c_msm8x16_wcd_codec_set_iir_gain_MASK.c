
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct snd_soc_component*,int) ;
 int FUNC_1 (struct snd_soc_component*,int,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_2,
  struct snd_kcontrol *VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 =
   FUNC_2(VAR_2->dapm);
 int VAR_6 = 0, VAR_7 = 0;

 switch (VAR_4) {
 case 128:
  if (VAR_2->shift == 0)
   VAR_7 = VAR_0;
  else if (VAR_2->shift == 1)
   VAR_7 = VAR_1;
  VAR_6 = FUNC_0(VAR_5, VAR_7);
  FUNC_1(VAR_5, VAR_7, VAR_6);
  break;
 default:
  break;
 }
 return 0;
}
