
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {void* max; void* min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 void* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_2,
 struct snd_ctl_elem_info *VAR_3)
{
 VAR_3->type = VAR_1;
 VAR_3->count = 1;
 VAR_3->value.integer.min = 3 + VAR_0;
 VAR_3->value.integer.max = 28 + VAR_0;
 return 0;
}
