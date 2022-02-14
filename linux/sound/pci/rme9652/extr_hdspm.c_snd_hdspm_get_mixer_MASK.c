
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdspm {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdspm*,int,int) ;
 int FUNC_1 (struct hdspm*,int,int) ;
 struct hdspm* FUNC_2 (struct snd_kcontrol*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct hdspm *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;
 int VAR_5;

 VAR_4 = VAR_2->value.integer.value[0];
 if (VAR_4 < 0)
  VAR_4 = 0;
 else if (VAR_4 >= 2 * VAR_0)
  VAR_4 = 2 * VAR_0 - 1;

 VAR_5 = VAR_2->value.integer.value[1];
 if (VAR_5 < 0)
  VAR_5 = 0;
 else if (VAR_5 >= VAR_0)
  VAR_5 = VAR_0 - 1;

 FUNC_3(&VAR_3->lock);
 if (VAR_4 >= VAR_0)
  VAR_2->value.integer.value[2] =
      FUNC_1(VAR_3, VAR_5,
           VAR_4 - VAR_0);
 else
  VAR_2->value.integer.value[2] =
      FUNC_0(VAR_3, VAR_5, VAR_4);

 FUNC_4(&VAR_3->lock);

 return 0;
}
