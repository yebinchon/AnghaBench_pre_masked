
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tea6330t {int max_bass; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 struct tea6330t* FUNC_0 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_info *VAR_2)
{
 struct tea6330t *VAR_3 = FUNC_0(VAR_1);

 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.integer.min = 0;
 VAR_2->value.integer.max = VAR_3->max_bass;
 return 0;
}
