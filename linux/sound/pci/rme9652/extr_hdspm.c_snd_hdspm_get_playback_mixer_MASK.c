
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct TYPE_6__ {int index; } ;
struct snd_ctl_elem_value {TYPE_2__ value; TYPE_3__ id; } ;
struct hdspm {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct hdspm*,int,int) ;
 scalar_t__ FUNC_1 (int) ;
 struct hdspm* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
     struct snd_ctl_elem_value *VAR_4)
{
 struct hdspm *VAR_5 = FUNC_2(VAR_3);
 int VAR_6;

 VAR_6 = VAR_4->id.index - 1;

 if (FUNC_1(VAR_6 < 0 || VAR_6 >= VAR_1))
  return -VAR_0;

 FUNC_3(&VAR_5->lock);
 VAR_4->value.integer.value[0] =
   (FUNC_0(VAR_5, VAR_6, VAR_6)*64)/VAR_2;
 FUNC_4(&VAR_5->lock);

 return 0;
}
