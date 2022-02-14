
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int vortex_t ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int min; int max; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int * FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_info *VAR_2)
{
 vortex_t *VAR_3 = FUNC_1(VAR_1);
 VAR_2->type = VAR_0;
 VAR_2->count = (FUNC_0(VAR_3) ? 4 : 2);
 VAR_2->value.integer.min = -128;
 VAR_2->value.integer.max = 32;
 return 0;
}
