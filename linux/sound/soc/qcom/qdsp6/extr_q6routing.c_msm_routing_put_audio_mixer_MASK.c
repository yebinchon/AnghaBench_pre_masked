
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {int reg; int shift; } ;
struct snd_soc_dapm_update {int dummy; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {scalar_t__* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct session_data {int port_id; } ;
struct msm_routing_data {struct session_data* sessions; } ;


 struct msm_routing_data* FUNC_0 (int ) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_kcontrol*) ;
 int FUNC_2 (struct snd_soc_dapm_context*,struct snd_kcontrol*,int,struct snd_soc_dapm_update*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_4(struct snd_kcontrol *VAR_0,
           struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 =
        FUNC_1(VAR_0);
 struct snd_soc_component *VAR_3 = FUNC_3(VAR_2);
 struct msm_routing_data *VAR_4 = FUNC_0(VAR_3->dev);
 struct soc_mixer_control *VAR_5 =
      (struct soc_mixer_control *)VAR_0->private_value;
 struct snd_soc_dapm_update *VAR_6 = ((void*)0);
 int VAR_7 = VAR_5->reg;
 int VAR_8 = VAR_5->shift;
 struct session_data *VAR_9 = &VAR_4->sessions[VAR_8];

 if (VAR_1->value.integer.value[0]) {
  VAR_9->port_id = VAR_7;
  FUNC_2(VAR_2, VAR_0, 1, VAR_6);
 } else {
  VAR_9->port_id = -1;
  FUNC_2(VAR_2, VAR_0, 0, VAR_6);
 }

 return 1;
}
