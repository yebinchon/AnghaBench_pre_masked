
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct snd_soc_dapm_widget {int shift; int dapm; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;




 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct snd_soc_component*,scalar_t__) ;
 int FUNC_1 (struct snd_soc_component*,scalar_t__,int,int) ;
 int FUNC_2 (struct snd_soc_component*,scalar_t__,int) ;
 struct snd_soc_component* FUNC_3 (int ) ;
 scalar_t__* VAR_11 ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_12,
       struct snd_kcontrol *VAR_13,
       int VAR_14)
{
 struct snd_soc_component *VAR_15 = FUNC_3(VAR_12->dapm);
 unsigned int VAR_16 = VAR_12->shift + 1;
 u16 VAR_17, VAR_18, VAR_19;
 u8 VAR_20;

 VAR_17 = VAR_0;
 VAR_18 = VAR_2 + 32 * (VAR_16 - 1);
 VAR_19 = VAR_1 + 32 * (VAR_16 - 1);

 switch (VAR_14) {
 case 128:

  FUNC_1(VAR_15, VAR_18,
        VAR_10,
        VAR_9);
  VAR_20 = FUNC_0(VAR_15, VAR_19) &
     VAR_4;
  VAR_20 >>= VAR_5;
  if (VAR_20 != VAR_3) {

   FUNC_1(VAR_15, VAR_19,
         VAR_4,
         VAR_3);
  }
  break;
 case 130:

  FUNC_1(VAR_15, VAR_19,
        VAR_7,
        VAR_8);

  FUNC_2(VAR_15, VAR_11[VAR_12->shift],
         FUNC_0(VAR_15, VAR_11[VAR_12->shift]));
  FUNC_1(VAR_15, VAR_18,
        VAR_10, 0);
  break;
 case 129:
  FUNC_1(VAR_15, VAR_18,
        VAR_10,
        VAR_9);
  FUNC_1(VAR_15, VAR_19,
        VAR_7,
        VAR_6);
  break;
 case 131:
  FUNC_1(VAR_15, VAR_17, 1 << VAR_12->shift,
        1 << VAR_12->shift);
  FUNC_1(VAR_15, VAR_17, 1 << VAR_12->shift, 0x0);
  FUNC_1(VAR_15, VAR_19,
        VAR_7,
        VAR_6);
  FUNC_1(VAR_15, VAR_18,
        VAR_10, 0);
  break;
 }

 return 0;
}
