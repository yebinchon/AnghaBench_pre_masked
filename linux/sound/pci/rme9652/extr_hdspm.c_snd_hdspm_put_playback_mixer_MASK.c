
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
 int VAR_3 ;
 int FUNC_0 (struct hdspm*,int,int) ;
 int FUNC_1 (struct hdspm*,int,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct hdspm*) ;
 struct hdspm* FUNC_4 (struct snd_kcontrol*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct snd_kcontrol *VAR_4,
     struct snd_ctl_elem_value *VAR_5)
{
 struct hdspm *VAR_6 = FUNC_4(VAR_4);
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (!FUNC_3(VAR_6))
  return -VAR_0;

 VAR_8 = VAR_5->id.index - 1;

 if (FUNC_2(VAR_8 < 0 || VAR_8 >= VAR_2))
  return -VAR_1;

 VAR_9 = VAR_5->value.integer.value[0]*VAR_3/64;

 FUNC_5(&VAR_6->lock);
 VAR_7 =
     VAR_9 != FUNC_0(VAR_6, VAR_8,
           VAR_8);
 if (VAR_7)
  FUNC_1(VAR_6, VAR_8, VAR_8,
        VAR_9);
 FUNC_6(&VAR_6->lock);
 return VAR_7;
}
