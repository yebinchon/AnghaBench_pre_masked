
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int max; scalar_t__ min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_4,
      struct snd_ctl_elem_info *VAR_5)
{
 VAR_5->type = VAR_3;
 VAR_5->count = 2;
 VAR_5->value.integer.min = 0;
 if (VAR_4->private_value == VAR_2)
  VAR_5->value.integer.max = VAR_1;
 else
  VAR_5->value.integer.max = VAR_0;
 return 0;
}
