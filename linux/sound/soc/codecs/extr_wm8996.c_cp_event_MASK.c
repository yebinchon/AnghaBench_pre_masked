
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;



 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_0,
      struct snd_kcontrol *VAR_1, int VAR_2)
{
 switch (VAR_2) {
 case 128:
  FUNC_1(5);
  break;
 default:
  FUNC_0(1, "Invalid event %d\n", VAR_2);
 }

 return 0;
}
