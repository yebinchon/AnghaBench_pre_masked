
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_kcontrol {scalar_t__ private_data; } ;
struct TYPE_5__ {size_t items; size_t item; int name; } ;
struct TYPE_6__ {TYPE_2__ enumerated; } ;
struct snd_ctl_elem_info {int count; TYPE_3__ value; int type; } ;
struct clk_cache {size_t count; TYPE_1__* s; } ;
struct snd_card_asihpi {struct clk_cache cc; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static int FUNC_1(struct snd_kcontrol *VAR_1,
      struct snd_ctl_elem_info *VAR_2)
{
 struct snd_card_asihpi *VAR_3 =
   (struct snd_card_asihpi *)(VAR_1->private_data);
 struct clk_cache *VAR_4 = &VAR_3->cc;
 VAR_2->type = VAR_0;
 VAR_2->count = 1;
 VAR_2->value.enumerated.items = VAR_4->count;

 if (VAR_2->value.enumerated.item >= VAR_2->value.enumerated.items)
  VAR_2->value.enumerated.item =
    VAR_2->value.enumerated.items - 1;

 FUNC_0(VAR_2->value.enumerated.name,
        VAR_4->s[VAR_2->value.enumerated.item].name);
 return 0;
}
