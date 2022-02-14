
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__* item; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct hdspm {TYPE_1__* tco; } ;
struct TYPE_4__ {scalar_t__ pull; } ;


 int FUNC_0 (struct hdspm*) ;
 struct hdspm* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
      struct snd_ctl_elem_value *VAR_1)
{
 struct hdspm *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->tco->pull != VAR_1->value.enumerated.item[0]) {
  VAR_2->tco->pull = VAR_1->value.enumerated.item[0];

  FUNC_0(VAR_2);

  return 1;
 }

 return 0;
}
