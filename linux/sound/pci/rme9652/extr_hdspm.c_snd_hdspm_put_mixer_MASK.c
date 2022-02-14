
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
 int VAR_1 ;
 int FUNC_0 (struct hdspm*,int,int) ;
 int FUNC_1 (struct hdspm*,int,int) ;
 int FUNC_2 (struct hdspm*,int,int,int) ;
 int FUNC_3 (struct hdspm*,int,int,int) ;
 int FUNC_4 (struct hdspm*) ;
 struct hdspm* FUNC_5 (struct snd_kcontrol*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct snd_kcontrol *VAR_2,
          struct snd_ctl_elem_value *VAR_3)
{
 struct hdspm *VAR_4 = FUNC_5(VAR_2);
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;

 if (!FUNC_4(VAR_4))
  return -VAR_0;

 VAR_6 = VAR_3->value.integer.value[0];
 VAR_7 = VAR_3->value.integer.value[1];

 if (VAR_6 < 0 || VAR_6 >= 2 * VAR_1)
  return -1;
 if (VAR_7 < 0 || VAR_7 >= VAR_1)
  return -1;

 VAR_8 = VAR_3->value.integer.value[2];

 FUNC_6(&VAR_4->lock);

 if (VAR_6 >= VAR_1)
  VAR_5 = VAR_8 != FUNC_1(VAR_4, VAR_7,
          VAR_6 -
          VAR_1);
 else
  VAR_5 = VAR_8 != FUNC_0(VAR_4, VAR_7,
          VAR_6);

 if (VAR_5) {
  if (VAR_6 >= VAR_1)
   FUNC_3(VAR_4, VAR_7,
         VAR_6 - VAR_1,
         VAR_8);
  else
   FUNC_2(VAR_4, VAR_7, VAR_6,
         VAR_8);
 }
 FUNC_7(&VAR_4->lock);

 return VAR_5;
}
