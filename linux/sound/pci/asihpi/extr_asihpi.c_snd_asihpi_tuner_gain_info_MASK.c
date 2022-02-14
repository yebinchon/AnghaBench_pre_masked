
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int min; int max; int step; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,short,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_2,
      struct snd_ctl_elem_info *VAR_3)
{
 u32 VAR_4 = VAR_2->private_value;
 u16 VAR_5;
 short VAR_6;
 u16 VAR_7[3];

 for (VAR_6 = 0; VAR_6 < 3; VAR_6++) {
  VAR_5 = FUNC_0(VAR_4,
       VAR_6, &VAR_7[VAR_6]);
  if (VAR_5 != 0)
   return VAR_5;
 }

 VAR_3->type = VAR_1;
 VAR_3->count = 1;
 VAR_3->value.integer.min = ((int)VAR_7[0]) / VAR_0;
 VAR_3->value.integer.max = ((int)VAR_7[1]) / VAR_0;
 VAR_3->value.integer.step = ((int) VAR_7[2]) / VAR_0;
 return 0;
}
