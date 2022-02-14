
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
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int,int) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_10,
 struct snd_kcontrol *VAR_11, int VAR_12)
{
 struct snd_soc_component *VAR_13 =
  FUNC_2(VAR_10->dapm);

 switch (VAR_12) {
 case 129:
  FUNC_1(VAR_13,
   VAR_5,
   VAR_7 | VAR_9,
   VAR_6 | VAR_8);
  FUNC_1(VAR_13, VAR_2,
   VAR_4, VAR_3);
  FUNC_0(50);
  FUNC_1(VAR_13,
   VAR_0,
   VAR_1, VAR_1);
  break;
 case 128:
  FUNC_1(VAR_13, VAR_2,
   VAR_4, 0);
  FUNC_1(VAR_13,
   VAR_5,
   VAR_7 | VAR_9, 0);
  FUNC_0(200);
  FUNC_1(VAR_13,
   VAR_0,
   VAR_1, 0);
  break;

 default:
  return 0;
 }

 return 0;
}
