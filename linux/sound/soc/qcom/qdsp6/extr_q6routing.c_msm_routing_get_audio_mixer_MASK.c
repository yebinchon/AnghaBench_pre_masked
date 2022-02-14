
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct soc_mixer_control {int shift; scalar_t__ reg; } ;
struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dev; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_3__ {int* value; } ;
struct TYPE_4__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct session_data {scalar_t__ port_id; } ;
struct msm_routing_data {struct session_data* sessions; } ;


 struct msm_routing_data* FUNC_0 (int ) ;
 struct snd_soc_dapm_context* FUNC_1 (struct snd_kcontrol*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_3(struct snd_kcontrol *VAR_0,
           struct snd_ctl_elem_value *VAR_1)
{
 struct snd_soc_dapm_context *VAR_2 =
     FUNC_1(VAR_0);
 struct soc_mixer_control *VAR_3 =
     (struct soc_mixer_control *)VAR_0->private_value;
 int VAR_4 = VAR_3->shift;
 struct snd_soc_component *VAR_5 = FUNC_2(VAR_2);
 struct msm_routing_data *VAR_6 = FUNC_0(VAR_5->dev);
 struct session_data *VAR_7 = &VAR_6->sessions[VAR_4];

 if (VAR_7->port_id == VAR_3->reg)
  VAR_1->value.integer.value[0] = 1;
 else
  VAR_1->value.integer.value[0] = 0;

 return 0;
}
