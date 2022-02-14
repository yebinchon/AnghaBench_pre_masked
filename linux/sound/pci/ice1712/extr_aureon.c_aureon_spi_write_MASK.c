
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ subvendor; } ;
struct snd_ice1712 {TYPE_1__ eeprom; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 (struct snd_ice1712*,unsigned int) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(struct snd_ice1712 *VAR_10, unsigned int VAR_11, unsigned int VAR_12, int VAR_13)
{
 unsigned int VAR_14;
 int VAR_15;
 unsigned int VAR_16, VAR_17;

 VAR_14 = FUNC_0(VAR_10);

 if (VAR_10->eeprom.subvendor == VAR_8 ||
     VAR_10->eeprom.subvendor == VAR_9) {
  FUNC_1(VAR_10, ~(VAR_6|VAR_5|VAR_7));
  VAR_16 = VAR_6;
  VAR_17 = VAR_5;
 } else {
  FUNC_1(VAR_10, ~(VAR_4|VAR_2|VAR_1|
       VAR_3|VAR_0));
  VAR_16 = VAR_2;
  VAR_17 = VAR_1;

  VAR_14 |= VAR_4;
 }

 VAR_14 &= ~VAR_11;
 FUNC_2(VAR_10, VAR_14);
 FUNC_3(1);

 for (VAR_15 = VAR_13 - 1; VAR_15 >= 0; VAR_15--) {
  VAR_14 &= ~VAR_17;
  FUNC_2(VAR_10, VAR_14);
  FUNC_3(1);
  if (VAR_12 & (1 << VAR_15))
   VAR_14 |= VAR_16;
  else
   VAR_14 &= ~VAR_16;
  FUNC_2(VAR_10, VAR_14);
  FUNC_3(1);
  VAR_14 |= VAR_17;
  FUNC_2(VAR_10, VAR_14);
  FUNC_3(1);
 }

 VAR_14 &= ~VAR_17;
 VAR_14 |= VAR_11;
 FUNC_2(VAR_10, VAR_14);
 FUNC_3(1);
 VAR_14 |= VAR_17;
 FUNC_2(VAR_10, VAR_14);
 FUNC_3(1);
}
