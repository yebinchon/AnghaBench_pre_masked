
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


 int FUNC_0 (struct snd_soc_component*,int ,int,int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_6,
 struct snd_kcontrol *VAR_7, int VAR_8)
{
 struct snd_soc_component *VAR_9 =
  FUNC_2(VAR_6->dapm);

 switch (VAR_8) {
 case 128:
  FUNC_1(VAR_9,
   VAR_2, 0x0012);
  FUNC_1(VAR_9,
   VAR_1, 0x6000);
  FUNC_0(VAR_9, VAR_5,
   VAR_4, VAR_3);
  FUNC_0(VAR_9,
   VAR_0, 0x60, 0x60);
  break;

 case 129:
  FUNC_0(VAR_9,
   VAR_0, 0x60, 0x0);
  FUNC_1(VAR_9,
   VAR_1, 0x0000);
  break;

 default:
  return 0;
 }

 return 0;

}
