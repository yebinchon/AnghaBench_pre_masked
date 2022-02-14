
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_module {int node; struct snd_kcontrol* kctl; } ;
struct sst_ids {int algo_list; int gain_list; } ;
struct sst_gain_mixer_control {struct snd_soc_dapm_widget* w; } ;
struct sst_algo_control {struct snd_soc_dapm_widget* w; } ;
struct snd_soc_dapm_widget {struct sst_ids* priv; int dapm; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int name; } ;
struct snd_kcontrol {TYPE_1__ id; scalar_t__ private_value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int,int ) ;
 struct sst_module* FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int *,int *) ;
 struct snd_soc_component* FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_5,
  struct snd_soc_dapm_widget *VAR_6, int VAR_7)
{
 struct sst_module *VAR_8 = ((void*)0);
 struct snd_soc_component *VAR_9 = FUNC_3(VAR_6->dapm);
 struct sst_ids *VAR_10 = VAR_6->priv;
 int VAR_11 = 0;

 VAR_8 = FUNC_1(VAR_9->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 if (VAR_7 == VAR_4) {
  struct sst_gain_mixer_control *VAR_12 = (void *)VAR_5->private_value;

  VAR_12->w = VAR_6;
  VAR_8->kctl = VAR_5;
  FUNC_2(&VAR_8->node, &VAR_10->gain_list);
 } else if (VAR_7 == VAR_3) {
  struct sst_algo_control *VAR_13 = (void *)VAR_5->private_value;

  VAR_13->w = VAR_6;
  VAR_8->kctl = VAR_5;
  FUNC_2(&VAR_8->node, &VAR_10->algo_list);
 } else {
  FUNC_0(VAR_9->dev, "invoked for unknown type %d module %s",
    VAR_7, VAR_5->id.name);
  VAR_11 = -VAR_0;
 }

 return VAR_11;
}
