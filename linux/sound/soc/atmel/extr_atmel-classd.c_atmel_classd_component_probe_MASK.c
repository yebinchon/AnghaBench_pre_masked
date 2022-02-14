
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_soc_component {int dev; } ;
struct snd_soc_card {int dummy; } ;
struct atmel_classd_pdata {int pwm_type; int non_overlap_time; scalar_t__ non_overlap_enable; } ;
struct atmel_classd {struct atmel_classd_pdata* pdata; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int ,char*,int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int * VAR_12 ;
 struct atmel_classd* FUNC_2 (struct snd_soc_card*) ;
 struct snd_soc_card* FUNC_3 (struct snd_soc_component*) ;
 int FUNC_4 (struct snd_soc_component*,int ,int,int) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_component *VAR_13)
{
 struct snd_soc_card *VAR_14 = FUNC_3(VAR_13);
 struct atmel_classd *VAR_15 = FUNC_2(VAR_14);
 const struct atmel_classd_pdata *VAR_16 = VAR_15->pdata;
 u32 VAR_17, VAR_18;

 VAR_17 = VAR_10;
 VAR_18 = VAR_16->pwm_type << VAR_11;

 VAR_17 |= VAR_2;
 if (VAR_16->non_overlap_enable) {
  VAR_18 |= (VAR_1
   << VAR_3);

  VAR_17 |= VAR_8;
  switch (VAR_16->non_overlap_time) {
  case 5:
   VAR_18 |= (VAR_7
    << VAR_9);
   break;
  case 10:
   VAR_18 |= (VAR_4
    << VAR_9);
   break;
  case 15:
   VAR_18 |= (VAR_5
    << VAR_9);
   break;
  case 20:
   VAR_18 |= (VAR_6
    << VAR_9);
   break;
  default:
   VAR_18 |= (VAR_4
    << VAR_9);
   FUNC_1(VAR_13->dev,
    "non-overlapping value %d is invalid, the default value 10 is specified\n",
    VAR_16->non_overlap_time);
   break;
  }
 }

 FUNC_4(VAR_13, VAR_0, VAR_17, VAR_18);

 FUNC_0(VAR_13->dev,
  "PWM modulation type is %s, non-overlapping is %s\n",
  VAR_12[VAR_16->pwm_type],
  VAR_16->non_overlap_enable?"enabled":"disabled");

 return 0;
}
