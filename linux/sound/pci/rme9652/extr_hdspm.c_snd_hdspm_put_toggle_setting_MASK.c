
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct snd_kcontrol {int private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdspm {int lock; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdspm*,int ,unsigned int) ;
 int FUNC_1 (struct hdspm*,int ) ;
 int FUNC_2 (struct hdspm*) ;
 struct hdspm* FUNC_3 (struct snd_kcontrol*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_kcontrol *VAR_1,
          struct snd_ctl_elem_value *VAR_2)
{
 struct hdspm *VAR_3 = FUNC_3(VAR_1);
 u32 VAR_4 = VAR_1->private_value;
 int VAR_5;
 unsigned int VAR_6;

 if (!FUNC_2(VAR_3))
  return -VAR_0;
 VAR_6 = VAR_2->value.integer.value[0] & 1;
 FUNC_4(&VAR_3->lock);
 VAR_5 = (int) VAR_6 != FUNC_1(VAR_3, VAR_4);
 FUNC_0(VAR_3, VAR_4, VAR_6);
 FUNC_5(&VAR_3->lock);
 return VAR_5;
}
