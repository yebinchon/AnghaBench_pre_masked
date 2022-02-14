
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int min; int max; int step; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_info {int count; TYPE_2__ value; int type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct snd_kcontrol*,int*,int) ;
 int FUNC_1 (scalar_t__,int,int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
      struct snd_ctl_elem_info *VAR_4)
{
 u32 VAR_5 = VAR_3->private_value;
 u16 VAR_6;
 u16 VAR_7[VAR_0];
 u16 VAR_8 = 0, VAR_9, VAR_10;
 u32 VAR_11[3], VAR_12[3];

 VAR_8 = FUNC_0(VAR_3, VAR_7,
   VAR_0);

 VAR_11[0] = VAR_1;
 VAR_11[1] = 0;
 VAR_11[2] = VAR_1;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
   VAR_6 = FUNC_1(VAR_5,
    VAR_10, VAR_7[VAR_9],
    &VAR_12[VAR_10]);
   if (VAR_6 != 0)
    return VAR_6;
  }


  if (VAR_12[2] <= 0)
   continue;

  if (VAR_12[0] < VAR_11[0])
   VAR_11[0] = VAR_12[0];
  if (VAR_12[1] > VAR_11[1])
   VAR_11[1] = VAR_12[1];
  if (VAR_12[2] < VAR_11[2])
   VAR_11[2] = VAR_12[2];
 }

 VAR_4->type = VAR_2;
 VAR_4->count = 1;
 VAR_4->value.integer.min = ((int)VAR_11[0]);
 VAR_4->value.integer.max = ((int)VAR_11[1]);
 VAR_4->value.integer.step = ((int)VAR_11[2]);
 return 0;
}
