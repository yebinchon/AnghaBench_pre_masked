
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int subvendor; } ;
struct TYPE_3__ {int i2s_mclk_changed; } ;
struct snd_ice1712 {int num_total_dacs; int num_total_adcs; int akm_codecs; TYPE_2__ eeprom; struct snd_akm4xxx* akm; TYPE_1__ gpio; } ;
struct snd_akm4xxx {int dummy; } ;


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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct snd_ice1712*) ;
 struct snd_akm4xxx* FUNC_1 (int,int,int ) ;
 int VAR_14 ;
 int FUNC_2 (struct snd_ice1712*,int *) ;
 int VAR_15 ;
 int FUNC_3 () ;
 int FUNC_4 (struct snd_akm4xxx*,int *,int *,struct snd_ice1712*) ;
 int FUNC_5 (struct snd_ice1712*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct snd_ice1712 *VAR_16)
{
 struct snd_akm4xxx *VAR_17;
 int VAR_18;


 switch (VAR_16->eeprom.subvendor) {
 case 128:
  VAR_16->num_total_dacs = 8;
  VAR_16->num_total_adcs = 2;
  VAR_16->gpio.i2s_mclk_changed = VAR_15;
  break;
 case 129:
  VAR_16->num_total_dacs = 8;
  VAR_16->num_total_adcs = 2;
  break;
 case 130:
  VAR_16->num_total_dacs = 2;
  VAR_16->num_total_adcs = 2;
  break;
 default:
  FUNC_3();
  return -VAR_0;
 }


 VAR_17 = VAR_16->akm = FUNC_1(2, sizeof(struct snd_akm4xxx), VAR_2);
 if (! VAR_17)
  return -VAR_1;
 switch (VAR_16->eeprom.subvendor) {
 case 128:
  VAR_16->akm_codecs = 2;
  VAR_18 = FUNC_4(VAR_17, &VAR_10,
      &VAR_11, VAR_16);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_4(VAR_17+1, &VAR_12,
      &VAR_13, VAR_16);
  if (VAR_18 < 0)
   return VAR_18;

  FUNC_5(VAR_16, VAR_3,
      VAR_3);
  break;
 case 129:
  VAR_16->akm_codecs = 2;
  VAR_18 = FUNC_4(VAR_17, &VAR_6,
            &VAR_9, VAR_16);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_4(VAR_17+1, &VAR_7,
            &VAR_8, VAR_16);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_2(VAR_16, &VAR_14);
  if (VAR_18 < 0)
   return VAR_18;

  FUNC_5(VAR_16, VAR_3,
         VAR_3);
  break;
 case 130:
  VAR_16->akm_codecs = 1;
  VAR_18 = FUNC_4(VAR_17, &VAR_4, &VAR_5,
            VAR_16);
  if (VAR_18 < 0)
   return VAR_18;
  VAR_18 = FUNC_0(VAR_16);
  if (VAR_18 < 0)
   return VAR_18;


  FUNC_5(VAR_16, VAR_3,
         VAR_3);
  break;
 }

 return 0;
}
