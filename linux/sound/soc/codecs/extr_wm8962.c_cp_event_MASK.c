
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
      struct snd_kcontrol *VAR_2, int VAR_3)
{
 switch (VAR_3) {
 case 128:
  FUNC_1(5);
  break;

 default:
  FUNC_0(1, "Invalid event %d\n", VAR_3);
  return -VAR_0;
 }

 return 0;
}
