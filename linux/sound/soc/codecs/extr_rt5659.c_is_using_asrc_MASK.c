
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;





 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;



 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 unsigned int FUNC_0 (struct snd_soc_component*,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_11,
    struct snd_soc_dapm_widget *VAR_12)
{
 unsigned int VAR_13, VAR_14, VAR_15;
 struct snd_soc_component *VAR_16 = FUNC_2(VAR_11->dapm);

 switch (VAR_11->shift) {
 case 132:
  VAR_13 = VAR_5;
  VAR_14 = VAR_2;
  break;
 case 133:
  VAR_13 = VAR_5;
  VAR_14 = VAR_1;
  break;
 case 131:
  VAR_13 = VAR_4;
  VAR_14 = VAR_3;
  break;
 case 129:
  VAR_13 = VAR_4;
  VAR_14 = VAR_7;
  break;
 case 130:
  VAR_13 = VAR_4;
  VAR_14 = VAR_6;
  break;
 case 128:
  VAR_13 = VAR_4;
  VAR_14 = VAR_8;
  break;
 default:
  return 0;
 }

 VAR_15 = (FUNC_0(VAR_16, VAR_13) >> VAR_14) & 0xf;
 switch (VAR_15) {
 case 1:
 case 2:
 case 3:

  FUNC_1(VAR_16, VAR_0,
   VAR_10, VAR_9);
  return 1;
 default:
  return 0;
 }

}
