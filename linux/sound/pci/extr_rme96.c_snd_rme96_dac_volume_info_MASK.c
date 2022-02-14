
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;
struct rme96 {int dummy; } ;


 int FUNC_0 (struct rme96*) ;
 int VAR_0 ;
 struct rme96* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int
FUNC_2(struct snd_kcontrol *VAR_1, struct snd_ctl_elem_info *VAR_2)
{
 struct rme96 *VAR_3 = FUNC_1(VAR_1);

        VAR_2->type = VAR_0;
        VAR_2->count = 2;
        VAR_2->value.integer.min = 0;
 VAR_2->value.integer.max = FUNC_0(VAR_3);
        return 0;
}
