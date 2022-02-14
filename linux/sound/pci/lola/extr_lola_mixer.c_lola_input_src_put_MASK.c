
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct lola {TYPE_1__* pin; } ;
struct TYPE_4__ {int num_pins; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct lola*,unsigned int,int) ;
 struct lola* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
         struct snd_ctl_elem_value *VAR_2)
{
 struct lola *VAR_3 = FUNC_1(VAR_1);
 int VAR_4;
 unsigned int VAR_5;

 VAR_5 = 0;
 for (VAR_4 = 0; VAR_4 < VAR_3->pin[VAR_0].num_pins; VAR_4++)
  if (VAR_2->value.integer.value[VAR_4])
   VAR_5 |= 1 << VAR_4;
 return FUNC_0(VAR_3, VAR_5, 1);
}
