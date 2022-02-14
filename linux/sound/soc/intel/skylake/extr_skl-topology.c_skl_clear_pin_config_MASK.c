
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct snd_soc_dapm_widget {struct skl_module_cfg* priv; TYPE_2__* dapm; } ;
struct snd_soc_component {int name; } ;
struct skl_pipe {int state; } ;
struct skl_module_cfg {int m_state; TYPE_5__* m_out_pin; TYPE_4__* module; TYPE_3__* m_in_pin; struct skl_pipe* pipe; } ;
struct TYPE_10__ {int in_use; void* pin_state; } ;
struct TYPE_9__ {int max_input_pins; int max_output_pins; } ;
struct TYPE_8__ {int in_use; void* pin_state; } ;
struct TYPE_7__ {TYPE_1__* component; } ;
struct TYPE_6__ {int name; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct snd_soc_component *VAR_3,
    struct snd_soc_dapm_widget *VAR_4)
{
 int VAR_5;
 struct skl_module_cfg *VAR_6;
 struct skl_pipe *VAR_7;

 if (!FUNC_1(VAR_4->dapm->component->name, VAR_3->name,
     FUNC_0(VAR_3->name))) {
  VAR_6 = VAR_4->priv;
  VAR_7 = VAR_6->pipe;
  for (VAR_5 = 0; VAR_5 < VAR_6->module->max_input_pins; VAR_5++) {
   VAR_6->m_in_pin[VAR_5].in_use = 0;
   VAR_6->m_in_pin[VAR_5].pin_state = VAR_1;
  }
  for (VAR_5 = 0; VAR_5 < VAR_6->module->max_output_pins; VAR_5++) {
   VAR_6->m_out_pin[VAR_5].in_use = 0;
   VAR_6->m_out_pin[VAR_5].pin_state = VAR_1;
  }
  VAR_7->state = VAR_2;
  VAR_6->m_state = VAR_0;
 }
}
