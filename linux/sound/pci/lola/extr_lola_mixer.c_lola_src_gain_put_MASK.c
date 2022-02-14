
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {unsigned short* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct lola {int dummy; } ;


 int FUNC_0 (struct lola*,unsigned int,unsigned short,int) ;
 struct lola* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct lola *VAR_2 = FUNC_1(VAR_0);
 unsigned int VAR_3 = VAR_0->private_value & 0xff;
 unsigned int VAR_4 = (VAR_0->private_value >> 8) & 0xff;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  unsigned int VAR_7 = VAR_3 + VAR_5;
  unsigned short VAR_8 = VAR_1->value.integer.value[VAR_5];
  if (VAR_8)
   VAR_8--;
  VAR_6 = FUNC_0(VAR_2, VAR_7, VAR_8, !!VAR_8);
  if (VAR_6 < 0)
   return VAR_6;
 }
 return 0;
}
