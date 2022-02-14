
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (struct snd_ice1712*) ;
 int FUNC_1 (struct snd_ice1712*,unsigned int) ;
 struct snd_ice1712* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_2,
  struct snd_ctl_elem_value *VAR_3)
{
 struct snd_ice1712 *VAR_4 = FUNC_2(VAR_2);
 unsigned int VAR_5, VAR_6;
 VAR_5 = VAR_6 = FUNC_0(VAR_4);
 if (VAR_3->value.integer.value[0]
   && (~VAR_5 & VAR_1)) {


  VAR_6 = VAR_5 | VAR_1;
  FUNC_1(VAR_4, VAR_6);

  VAR_6 &= ~VAR_0;
  FUNC_1(VAR_4, VAR_6);
 } else if (!VAR_3->value.integer.value[0] && (VAR_5 & VAR_1)) {



  VAR_6 = VAR_5 & ~VAR_1;
  FUNC_1(VAR_4, VAR_6);

  VAR_6 |= VAR_0;
  FUNC_1(VAR_4, VAR_6);
 }
 if (VAR_5 != VAR_6)
  return 1;

 return 0;
}
