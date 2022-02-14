
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_3__ {int* item; } ;
struct TYPE_4__ {TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hdspm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hdspm*,int) ;
 int FUNC_1 (struct hdspm*) ;
 struct hdspm* FUNC_2 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_1,
        struct snd_ctl_elem_value *VAR_2)
{
 struct hdspm *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 if (!FUNC_1(VAR_3))
  return -VAR_0;

 VAR_4 = VAR_2->value.enumerated.item[0];
 if (VAR_4 < 0)
  VAR_4 = 0;
 else if (VAR_4 > 1)
  VAR_4 = 1;

 FUNC_0(VAR_3, VAR_4);

 return 0;
}
