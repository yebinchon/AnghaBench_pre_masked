
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_6__ {int max; scalar_t__ min; } ;
struct TYPE_5__ {TYPE_3__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;
struct lola {TYPE_1__* pin; } ;
struct TYPE_4__ {int num_pins; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct lola* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_info *VAR_3)
{
 struct lola *VAR_4 = FUNC_0(VAR_2);

 VAR_3->type = VAR_1;
 VAR_3->count = VAR_4->pin[VAR_0].num_pins;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = 1;
 return 0;
}
