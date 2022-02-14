
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 int FUNC_0 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_3,
 struct snd_kcontrol *VAR_4, int VAR_5)
{
 struct snd_soc_component *VAR_6 =
  FUNC_1(VAR_3->dapm);

 switch (VAR_5) {
 case 128:
  switch (VAR_3->shift) {
  case 131:
   FUNC_0(VAR_6,
    VAR_0, VAR_1, 0);
   break;

  case 130:
   FUNC_0(VAR_6,
    VAR_0, VAR_2, 0);
   break;

  default:
   break;
  }
  break;

 case 129:
  FUNC_2(15000, 20000);
  switch (VAR_3->shift) {
  case 131:
   FUNC_0(VAR_6,
    VAR_0, VAR_1,
    VAR_1);
   break;

  case 130:
   FUNC_0(VAR_6,
    VAR_0, VAR_2,
    VAR_2);
   break;

  default:
   break;
  }
  break;

 default:
  return 0;
 }

 return 0;
}
