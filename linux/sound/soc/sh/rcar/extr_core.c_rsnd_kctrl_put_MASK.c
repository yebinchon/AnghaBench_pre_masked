
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_4__ {scalar_t__* item; } ;
struct TYPE_6__ {TYPE_2__ integer; TYPE_1__ enumerated; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;
struct rsnd_kctrl_cfg {int size; scalar_t__* val; int mod; int io; int (* update ) (int ,int ) ;scalar_t__ texts; int (* accept ) (int ) ;} ;


 struct rsnd_kctrl_cfg* FUNC_0 (struct snd_kcontrol*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
     struct snd_ctl_elem_value *VAR_1)
{
 struct rsnd_kctrl_cfg *VAR_2 = FUNC_0(VAR_0);
 int VAR_3, VAR_4 = 0;

 if (!VAR_2->accept(VAR_2->io))
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_2->size; VAR_3++) {
  if (VAR_2->texts) {
   VAR_4 |= (VAR_1->value.enumerated.item[VAR_3] != VAR_2->val[VAR_3]);
   VAR_2->val[VAR_3] = VAR_1->value.enumerated.item[VAR_3];
  } else {
   VAR_4 |= (VAR_1->value.integer.value[VAR_3] != VAR_2->val[VAR_3]);
   VAR_2->val[VAR_3] = VAR_1->value.integer.value[VAR_3];
  }
 }

 if (VAR_4 && VAR_2->update)
  VAR_2->update(VAR_2->io, VAR_2->mod);

 return VAR_4;
}
