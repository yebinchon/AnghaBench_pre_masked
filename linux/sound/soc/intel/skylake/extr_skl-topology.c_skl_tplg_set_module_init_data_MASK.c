
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {scalar_t__ private; } ;
struct soc_bytes_ext {TYPE_1__ dobj; } ;
struct snd_soc_dapm_widget {int num_kcontrols; struct snd_kcontrol_new* kcontrol_news; struct skl_module_cfg* priv; } ;
struct snd_kcontrol_new {int access; scalar_t__ private_value; } ;
struct TYPE_4__ {int caps_size; int * caps; } ;
struct skl_module_cfg {TYPE_2__ formats_config; } ;
struct skl_algo_data {scalar_t__ set_params; int size; scalar_t__ params; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_soc_dapm_widget *VAR_2)
{
 const struct snd_kcontrol_new *VAR_3;
 struct soc_bytes_ext *VAR_4;
 struct skl_algo_data *VAR_5;
 struct skl_module_cfg *VAR_6 = VAR_2->priv;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_2->num_kcontrols; VAR_7++) {
  VAR_3 = &VAR_2->kcontrol_news[VAR_7];
  if (VAR_3->access & VAR_1) {
   VAR_4 = (struct soc_bytes_ext *)VAR_3->private_value;
   VAR_5 = (struct skl_algo_data *)VAR_4->dobj.private;

   if (VAR_5->set_params != VAR_0)
    continue;

   VAR_6->formats_config.caps = (u32 *)VAR_5->params;
   VAR_6->formats_config.caps_size = VAR_5->size;

   break;
  }
 }

 return 0;
}
