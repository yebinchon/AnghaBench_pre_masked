
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int private_value; } ;
struct TYPE_6__ {int * value; } ;
struct TYPE_4__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_value {TYPE_1__ value; } ;
struct lola {TYPE_2__* pin; } ;
struct TYPE_5__ {int num_pins; } ;


 int FUNC_0 (struct lola*,int,int,int ,int) ;
 struct lola* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct lola *VAR_2 = FUNC_1(VAR_0);
 int VAR_3 = VAR_0->private_value;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2->pin[VAR_3].num_pins; VAR_4++) {
  VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_4,
     VAR_1->value.integer.value[VAR_4],
     1);
  if (VAR_5 < 0)
   return VAR_5;
 }
 return 0;
}
