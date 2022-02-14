
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;


 int VAR_8 ;
 int VAR_9 ;


 int FUNC_0 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_10,
       struct snd_kcontrol *VAR_11, int VAR_12)
{
 struct snd_soc_component *VAR_13 = FUNC_1(VAR_10->dapm);

 switch (VAR_12) {
 case 128:
  switch (VAR_10->reg) {
  case 131:
   FUNC_0(VAR_13, VAR_8,
         VAR_0,
         VAR_0);
   break;
  case 130:
   FUNC_0(VAR_13, VAR_8,
         VAR_1,
         VAR_1);
   break;
  default:
   return -VAR_9;
  }

  FUNC_0(VAR_13, VAR_10->reg, VAR_5,
        VAR_6);
  FUNC_0(VAR_13, VAR_10->reg, VAR_4,
        VAR_3);
  break;
 case 129:
  FUNC_0(VAR_13, VAR_10->reg, VAR_4,
        VAR_2);
  FUNC_0(VAR_13, VAR_10->reg, VAR_5,
        VAR_7);

  switch (VAR_10->reg) {
  case 131:
   FUNC_0(VAR_13, VAR_8,
         VAR_0, 0);
   break;
  case 130:
   FUNC_0(VAR_13, VAR_8,
         VAR_1, 0);
   break;
  default:
   return -VAR_9;
  }

  break;
 default:
  return -VAR_9;
 }

 return 0;
}
