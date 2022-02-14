
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {int max; int min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_1__ value; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_0(struct snd_kcontrol *VAR_5, struct snd_ctl_elem_info *VAR_6)
{
 VAR_6->type = VAR_4;
 VAR_6->count = 2;
 if(VAR_5->private_value == 0) {
  VAR_6->value.integer.min = VAR_3;
  VAR_6->value.integer.max = VAR_2;
 } else {
  VAR_6->value.integer.min = VAR_1;
  VAR_6->value.integer.max = VAR_0;
 }
 return 0;
}
