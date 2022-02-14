
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {TYPE_2__ value; int count; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_3,
  struct snd_ctl_elem_info *VAR_4)
{
 VAR_4->type = VAR_2;
 VAR_4->count = VAR_0;
 VAR_4->value.integer.min = 0;
 VAR_4->value.integer.max = VAR_1;

 return 0;
}
