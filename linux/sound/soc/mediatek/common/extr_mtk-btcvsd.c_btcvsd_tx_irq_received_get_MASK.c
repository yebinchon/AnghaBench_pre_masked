
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_4__ {int* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct mtk_btcvsd_snd {TYPE_3__* tx; } ;
struct TYPE_6__ {scalar_t__ rw_cnt; } ;


 struct mtk_btcvsd_snd* FUNC_0 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_1 (struct snd_kcontrol*) ;

__attribute__((used)) static int FUNC_2(struct snd_kcontrol *VAR_0,
          struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_component *VAR_2 = FUNC_1(VAR_0);
 struct mtk_btcvsd_snd *VAR_3 = FUNC_0(VAR_2);

 if (!VAR_3->tx)
  return 0;

 VAR_1->value.integer.value[0] = VAR_3->tx->rw_cnt ? 1 : 0;
 return 0;
}
