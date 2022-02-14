
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {int max; scalar_t__ min; } ;
struct TYPE_4__ {int items; int item; int name; } ;
struct TYPE_6__ {TYPE_2__ integer; TYPE_1__ enumerated; } ;
struct snd_ctl_elem_info {int type; TYPE_3__ value; int count; } ;
struct rsnd_kctrl_cfg {int max; int size; int * texts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rsnd_kctrl_cfg* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_3,
      struct snd_ctl_elem_info *VAR_4)
{
 struct rsnd_kctrl_cfg *VAR_5 = FUNC_0(VAR_3);

 if (VAR_5->texts) {
  VAR_4->type = VAR_1;
  VAR_4->count = VAR_5->size;
  VAR_4->value.enumerated.items = VAR_5->max;
  if (VAR_4->value.enumerated.item >= VAR_5->max)
   VAR_4->value.enumerated.item = VAR_5->max - 1;
  FUNC_1(VAR_4->value.enumerated.name,
   VAR_5->texts[VAR_4->value.enumerated.item],
   sizeof(VAR_4->value.enumerated.name));
 } else {
  VAR_4->count = VAR_5->size;
  VAR_4->value.integer.min = 0;
  VAR_4->value.integer.max = VAR_5->max;
  VAR_4->type = (VAR_5->max == 1) ?
   VAR_0 :
   VAR_2;
 }

 return 0;
}
