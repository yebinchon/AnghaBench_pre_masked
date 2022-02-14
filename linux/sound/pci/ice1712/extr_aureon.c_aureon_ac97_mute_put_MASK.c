
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct snd_ice1712 {int dummy; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;


 unsigned short FUNC_0 (struct snd_ice1712*,int) ;
 int FUNC_1 (struct snd_ice1712*,int,unsigned short) ;
 int FUNC_2 (struct snd_ice1712*) ;
 int FUNC_3 (struct snd_ice1712*) ;
 struct snd_ice1712* FUNC_4 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_0, struct snd_ctl_elem_value *VAR_1)
{
 struct snd_ice1712 *VAR_2 = FUNC_4(VAR_0);
 unsigned short VAR_3, VAR_4;
 int VAR_5;

 FUNC_3(VAR_2);

 VAR_3 = FUNC_0(VAR_2, VAR_0->private_value & 0x7F);
 VAR_4 = (VAR_1->value.integer.value[0] ? 0x0000 : 0x8000) | (VAR_3 & ~0x8000);

 VAR_5 = (VAR_3 != VAR_4);
 if (VAR_5)
  FUNC_1(VAR_2, VAR_0->private_value & 0x7F, VAR_4);

 FUNC_2(VAR_2);

 return VAR_5;
}
