
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_4__ {int max; scalar_t__ min; } ;
struct TYPE_3__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_info {TYPE_1__ value; int count; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int *) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
     struct snd_ctl_elem_info *VAR_3)
{
 u32 VAR_4 = VAR_2->private_value;
 u32 VAR_5;
 u16 VAR_6;
 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_6)
  VAR_5 = VAR_0;

 VAR_3->type = VAR_1;
 VAR_3->count = VAR_5;
 VAR_3->value.integer.min = 0;
 VAR_3->value.integer.max = 0x7FFFFFFF;
 return 0;
}
