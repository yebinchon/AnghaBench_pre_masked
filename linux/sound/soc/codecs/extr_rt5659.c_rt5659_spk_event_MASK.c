
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int dapm; } ;
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


 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_8,
 struct snd_kcontrol *VAR_9, int VAR_10)
{
 struct snd_soc_component *VAR_11 = FUNC_2(VAR_8->dapm);

 switch (VAR_10) {
 case 128:
  FUNC_0(VAR_11, VAR_2,
   VAR_6, VAR_5);
  FUNC_0(VAR_11, VAR_1,
   VAR_3, VAR_3);
  FUNC_1(VAR_11, VAR_0, 0x0803);
  FUNC_1(VAR_11, VAR_7, 0x0000);
  break;

 case 129:
  FUNC_1(VAR_11, VAR_0, 0x0011);
  FUNC_0(VAR_11, VAR_1,
   VAR_3, 0x0);
  FUNC_1(VAR_11, VAR_7, 0x0003);
  FUNC_0(VAR_11, VAR_2,
   VAR_6, VAR_4);
  break;

 default:
  return 0;
 }

 return 0;

}
