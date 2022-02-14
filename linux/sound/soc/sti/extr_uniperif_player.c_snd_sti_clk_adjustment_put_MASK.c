
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uniperif {scalar_t__ clk_adj; int ctrl_lock; scalar_t__ mclk; } ;
struct TYPE_4__ {struct uniperif* uni; } ;
struct sti_uniperiph_data {TYPE_1__ dai_data; } ;
struct snd_soc_dai {int dummy; } ;
struct snd_kcontrol {int dummy; } ;
struct TYPE_5__ {scalar_t__* value; } ;
struct TYPE_6__ {TYPE_2__ integer; } ;
struct snd_ctl_elem_value {TYPE_3__ value; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct snd_soc_dai* FUNC_2 (struct snd_kcontrol*) ;
 struct sti_uniperiph_data* FUNC_3 (struct snd_soc_dai*) ;
 int FUNC_4 (struct uniperif*,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct snd_kcontrol *VAR_3,
          struct snd_ctl_elem_value *VAR_4)
{
 struct snd_soc_dai *VAR_5 = FUNC_2(VAR_3);
 struct sti_uniperiph_data *VAR_6 = FUNC_3(VAR_5);
 struct uniperif *VAR_7 = VAR_6->dai_data.uni;
 int VAR_8 = 0;

 if ((VAR_4->value.integer.value[0] < VAR_2) ||
     (VAR_4->value.integer.value[0] > VAR_1))
  return -VAR_0;

 FUNC_0(&VAR_7->ctrl_lock);
 VAR_7->clk_adj = VAR_4->value.integer.value[0];

 if (VAR_7->mclk)
  VAR_8 = FUNC_4(VAR_7, VAR_7->mclk);
 FUNC_1(&VAR_7->ctrl_lock);

 return VAR_8;
}
