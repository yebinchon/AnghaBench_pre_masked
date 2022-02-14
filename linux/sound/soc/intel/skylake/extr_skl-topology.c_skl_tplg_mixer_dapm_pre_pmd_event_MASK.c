
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_dapm_widget {struct skl_module_cfg* priv; } ;
struct skl_module_cfg {TYPE_2__* m_in_pin; TYPE_1__* module; int pipe; } ;
struct skl_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ pin_state; struct skl_module_cfg* tgt_mcfg; } ;
struct TYPE_3__ {int max_input_pins; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct skl_dev*,int ) ;
 int FUNC_1 (struct skl_dev*,struct skl_module_cfg*,struct skl_module_cfg*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dapm_widget *VAR_1,
       struct skl_dev *VAR_2)
{
 struct skl_module_cfg *VAR_3, *VAR_4;
 int VAR_5 = 0, VAR_6;

 VAR_4 = VAR_1->priv;


 VAR_5 = FUNC_0(VAR_2, VAR_4->pipe);
 if (VAR_5)
  return VAR_5;

 for (VAR_6 = 0; VAR_6 < VAR_4->module->max_input_pins; VAR_6++) {
  if (VAR_4->m_in_pin[VAR_6].pin_state == VAR_0) {
   VAR_3 = VAR_4->m_in_pin[VAR_6].tgt_mcfg;
   if (!VAR_3)
    continue;

   VAR_5 = FUNC_1(VAR_2,
      VAR_3, VAR_4);
  }
 }

 return VAR_5;
}
