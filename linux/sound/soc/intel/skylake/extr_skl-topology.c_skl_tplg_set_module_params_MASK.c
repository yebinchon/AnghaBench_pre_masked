
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ private; } ;
struct soc_bytes_ext {TYPE_1__ dobj; } ;
struct snd_soc_dapm_widget {int num_kcontrols; struct snd_kcontrol_new* kcontrol_news; struct skl_module_cfg* priv; } ;
struct snd_kcontrol_new {int access; scalar_t__ private_value; } ;
struct skl_specific_cfg {scalar_t__ caps_size; scalar_t__ set_params; int param_id; int * caps; } ;
struct skl_module_cfg {struct skl_specific_cfg formats_config; } ;
struct skl_dev {int dummy; } ;
struct skl_algo_data {scalar_t__ set_params; scalar_t__ size; int param_id; scalar_t__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct skl_dev*,int *,scalar_t__,int ,struct skl_module_cfg*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dapm_widget *VAR_2,
      struct skl_dev *VAR_3)
{
 int VAR_4, VAR_5;
 struct skl_module_cfg *VAR_6 = VAR_2->priv;
 const struct snd_kcontrol_new *VAR_7;
 struct soc_bytes_ext *VAR_8;
 struct skl_algo_data *VAR_9;
 struct skl_specific_cfg *VAR_10;

 if (VAR_6->formats_config.caps_size > 0 &&
  VAR_6->formats_config.set_params == VAR_0) {
  VAR_10 = &VAR_6->formats_config;
  VAR_5 = FUNC_0(VAR_3, VAR_10->caps,
     VAR_10->caps_size,
     VAR_10->param_id, VAR_6);
  if (VAR_5 < 0)
   return VAR_5;
 }

 for (VAR_4 = 0; VAR_4 < VAR_2->num_kcontrols; VAR_4++) {
  VAR_7 = &VAR_2->kcontrol_news[VAR_4];
  if (VAR_7->access & VAR_1) {
   VAR_8 = (void *) VAR_7->private_value;
   VAR_9 = (struct skl_algo_data *)VAR_8->dobj.private;

   if (VAR_9->set_params == VAR_0) {
    VAR_5 = FUNC_0(VAR_3,
      (u32 *)VAR_9->params, VAR_9->size,
      VAR_9->param_id, VAR_6);
    if (VAR_5 < 0)
     return VAR_5;
   }
  }
 }

 return 0;
}
