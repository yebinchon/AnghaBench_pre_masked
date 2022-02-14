
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_8__ {scalar_t__ private; } ;
struct soc_bytes_ext {TYPE_4__ dobj; } ;
struct snd_soc_dapm_widget {int num_kcontrols; struct snd_kcontrol_new* kcontrol_news; struct skl_module_cfg* priv; } ;
struct snd_kcontrol_new {int access; scalar_t__ private_value; } ;
struct skl_specific_cfg {scalar_t__ caps_size; scalar_t__ set_params; int param_id; int * caps; } ;
struct skl_module_cfg {struct skl_specific_cfg formats_config; TYPE_3__* m_in_pin; TYPE_2__* module; TYPE_1__* m_out_pin; } ;
struct skl_dev {int dummy; } ;
struct skl_algo_data {scalar_t__ set_params; scalar_t__ max; int param_id; int params; } ;
struct TYPE_7__ {scalar_t__ pin_state; } ;
struct TYPE_6__ {int max_output_pins; int max_input_pins; } ;
struct TYPE_5__ {scalar_t__ pin_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,scalar_t__,int ) ;
 int FUNC_2 (struct skl_dev*,int *,scalar_t__,struct skl_module_cfg*) ;
 int FUNC_3 (struct skl_dev*,int *,scalar_t__,int ,struct skl_module_cfg*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dapm_widget *VAR_5,
   struct skl_module_cfg *VAR_6, struct skl_dev *VAR_7)
{
 int VAR_8, VAR_9;
 struct skl_module_cfg *VAR_10 = VAR_5->priv;
 const struct snd_kcontrol_new *VAR_11;
 struct soc_bytes_ext *VAR_12;
 struct skl_algo_data *VAR_13;
 struct skl_specific_cfg *VAR_14;
 u32 *VAR_15;





 for (VAR_8 = 0; VAR_8 < VAR_6->module->max_output_pins; VAR_8++) {
  if (VAR_6->m_out_pin[VAR_8].pin_state != VAR_3)
   return 0;
 }

 for (VAR_8 = 0; VAR_8 < VAR_6->module->max_input_pins; VAR_8++) {
  if (VAR_6->m_in_pin[VAR_8].pin_state != VAR_3)
   return 0;
 }

 if (VAR_10->formats_config.caps_size > 0 &&
  VAR_10->formats_config.set_params == VAR_2) {
  VAR_14 = &VAR_10->formats_config;
  VAR_9 = FUNC_3(VAR_7, VAR_14->caps,
     VAR_14->caps_size,
     VAR_14->param_id, VAR_10);
  if (VAR_9 < 0)
   return VAR_9;
 }

 for (VAR_8 = 0; VAR_8 < VAR_5->num_kcontrols; VAR_8++) {
  VAR_11 = &VAR_5->kcontrol_news[VAR_8];
  if (VAR_11->access & VAR_4) {
   VAR_12 = (void *) VAR_11->private_value;
   VAR_13 = (struct skl_algo_data *)VAR_12->dobj.private;

   if (VAR_13->set_params == VAR_2) {
    VAR_15 = FUNC_1(VAR_13->params, VAR_13->max, VAR_1);
    if (!VAR_15)
     return -VAR_0;

    FUNC_2(VAR_7, VAR_15, VAR_13->max,
        VAR_10);

    VAR_9 = FUNC_3(VAR_7, VAR_15,
      VAR_13->max, VAR_13->param_id, VAR_10);
    FUNC_0(VAR_15);

    if (VAR_9 < 0)
     return VAR_9;
   }
  }
 }

 return 0;
}
