
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
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 unsigned int FUNC_0 (struct snd_soc_component*,unsigned int) ;
 int FUNC_1 (struct snd_soc_component*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dapm_widget *VAR_13,
    struct snd_soc_dapm_widget *VAR_14)
{
 unsigned int VAR_15, VAR_16, VAR_17;
 struct snd_soc_component *VAR_18 = FUNC_2(VAR_13->dapm);

 switch (VAR_13->shift) {
 case 137:
  VAR_15 = VAR_6;
  VAR_16 = VAR_2;
  break;
 case 138:
  VAR_15 = VAR_6;
  VAR_16 = VAR_1;
  break;
 case 136:
  VAR_15 = VAR_6;
  VAR_16 = VAR_3;
  break;
 case 135:
  VAR_15 = VAR_6;
  VAR_16 = VAR_4;
  break;
 case 130:
  VAR_15 = VAR_5;
  VAR_16 = VAR_8;
  break;
 case 131:
  VAR_15 = VAR_5;
  VAR_16 = VAR_7;
  break;
 case 129:
  VAR_15 = VAR_5;
  VAR_16 = VAR_9;
  break;
 case 128:
  VAR_15 = VAR_5;
  VAR_16 = VAR_10;
  break;
 default:
  return 0;
 }

 VAR_17 = (FUNC_0(VAR_18, VAR_15) >> VAR_16) & 0xf;
 switch (VAR_17) {
 case 134:
 case 133:
 case 132:

  FUNC_1(VAR_18, VAR_0,
   VAR_12, VAR_11);
  return 1;
 default:
  return 0;
 }

}
