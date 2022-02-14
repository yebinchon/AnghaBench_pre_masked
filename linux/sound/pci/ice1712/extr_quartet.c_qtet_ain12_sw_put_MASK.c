
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {unsigned int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;





 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 int FUNC_2 () ;
 struct snd_ice1712* FUNC_3 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_3,
  struct snd_ctl_elem_value *VAR_4)
{
 struct snd_ice1712 *VAR_5 = FUNC_3(VAR_3);
 unsigned int VAR_6, VAR_7, VAR_8, VAR_9;
 VAR_6 = VAR_7 = FUNC_0(VAR_5);
 VAR_9 = VAR_6 & (VAR_1 | VAR_0);
 VAR_8 = VAR_4->value.integer.value[0];
 if (VAR_8 == 2)
  VAR_8 = 3;
 VAR_8 <<= 4;
 if (VAR_8 != VAR_9) {

  switch (VAR_8) {
  case 130:
   VAR_7 = VAR_6 & ~(VAR_1 | VAR_0);
   FUNC_1(VAR_5, VAR_7);

   VAR_7 &= ~VAR_2;
   FUNC_1(VAR_5, VAR_7);
   break;
  case 128:

   VAR_7 = VAR_6 | VAR_2;
   FUNC_1(VAR_5, VAR_7);
   VAR_7 = (VAR_7 & ~VAR_1) | VAR_0;
   FUNC_1(VAR_5, VAR_7);
   break;
  case 129:

   VAR_7 = VAR_6 | VAR_2;
   FUNC_1(VAR_5, VAR_7);
   VAR_7 |= VAR_1 | VAR_0;
   FUNC_1(VAR_5, VAR_7);
   break;
  default:
   FUNC_2();
  }
  return 1;
 }

 return 0;
}
