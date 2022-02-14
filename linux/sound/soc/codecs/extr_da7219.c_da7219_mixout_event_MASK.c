
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct snd_soc_dapm_widget {int reg; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int VAR_5 ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_6,
          struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 = FUNC_2(VAR_6->dapm);
 u8 VAR_10, VAR_11;

 switch (VAR_6->reg) {
 case 131:
  VAR_10 = VAR_1;
  VAR_11 = VAR_0;
  break;
 case 130:
  VAR_10 = VAR_3;
  VAR_11 = VAR_2;
  break;
 default:
  return -VAR_5;
 }

 switch (VAR_8) {
 case 128:

  FUNC_1(VAR_9, VAR_10, VAR_11,
        VAR_11);

  FUNC_0(VAR_4);

  break;
 case 129:

  FUNC_1(VAR_9, VAR_10, VAR_11, 0);

  break;
 }

 return 0;
}
