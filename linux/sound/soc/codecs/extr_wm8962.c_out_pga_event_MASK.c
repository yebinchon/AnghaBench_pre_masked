
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;

 int FUNC_0 (int,char*,int) ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

 int VAR_4 ;
 int FUNC_1 (struct snd_soc_component*,int) ;
 int FUNC_2 (struct snd_soc_component*,int,int ) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_5,
    struct snd_kcontrol *VAR_6, int VAR_7)
{
 struct snd_soc_component *VAR_8 = FUNC_3(VAR_5->dapm);
 int VAR_9;

 switch (VAR_5->shift) {
 case 130:
  VAR_9 = VAR_2;
  break;
 case 131:
  VAR_9 = VAR_1;
  break;
 case 128:
  VAR_9 = VAR_4;
  break;
 case 129:
  VAR_9 = VAR_3;
  break;
 default:
  FUNC_0(1, "Invalid shift %d\n", VAR_5->shift);
  return -VAR_0;
 }

 switch (VAR_7) {
 case 132:
  return FUNC_2(VAR_8, VAR_9, FUNC_1(VAR_8, VAR_9));
 default:
  FUNC_0(1, "Invalid event %d\n", VAR_7);
  return -VAR_0;
 }
}
