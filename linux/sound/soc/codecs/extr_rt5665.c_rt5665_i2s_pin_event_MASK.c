
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 unsigned int VAR_0 ;
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
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 unsigned int VAR_14 ;
 unsigned int VAR_15 ;
 unsigned int VAR_16 ;
 unsigned int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;





 int FUNC_0 (struct snd_soc_component*,int ,unsigned int,unsigned int) ;
 struct snd_soc_component* FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_20,
 struct snd_kcontrol *VAR_21, int VAR_22)
{
 struct snd_soc_component *VAR_23 = FUNC_1(VAR_20->dapm);
 unsigned int VAR_24, VAR_25, VAR_26 = 0, VAR_27 = 0;

 switch (VAR_20->shift) {
 case 132:
  VAR_26 = VAR_1 | VAR_3 |
   VAR_5 | VAR_7;
  VAR_24 = VAR_0 | VAR_2 |
   VAR_4 | VAR_6;
  break;
 case 131:
  VAR_26 = VAR_1 | VAR_3 |
   VAR_14;
  VAR_24 = VAR_0 | VAR_2 |
   VAR_12;
  VAR_27 = VAR_17;
  VAR_25 = VAR_15;
  break;
 case 130:
  VAR_26 = VAR_9 | VAR_11 |
   VAR_14;
  VAR_24 = VAR_8 | VAR_10 |
   VAR_13;
  VAR_27 = VAR_17;
  VAR_25 = VAR_16;
  break;
 }
 switch (VAR_22) {
 case 128:
  if (VAR_26)
   FUNC_0(VAR_23, VAR_18,
         VAR_26, VAR_24);
  if (VAR_27)
   FUNC_0(VAR_23, VAR_19,
         VAR_27, VAR_25);
  break;
 case 129:
  if (VAR_26)
   FUNC_0(VAR_23, VAR_18,
         VAR_26, 0);
  if (VAR_27)
   FUNC_0(VAR_23, VAR_19,
         VAR_27, 0);
  break;
 default:
  return 0;
 }

 return 0;
}
