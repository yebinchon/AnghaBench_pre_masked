
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int * item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdspm {int dummy; } ;


 int FUNC_0 (struct hdspm*) ;
 struct hdspm* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
        struct snd_ctl_elem_value *VAR_1)
{
 struct hdspm *VAR_2 = FUNC_1(VAR_0);

 VAR_1->value.enumerated.item[0] = FUNC_0(VAR_2);
 return 0;
}
