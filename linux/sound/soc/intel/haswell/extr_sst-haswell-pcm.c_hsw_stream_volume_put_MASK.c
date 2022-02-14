
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct sst_hsw {int dummy; } ;
struct soc_mixer_control {size_t reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {scalar_t__* value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hsw_priv_data {int dev; struct hsw_pcm_data** pcm; struct sst_hsw* hsw; } ;
struct hsw_pcm_data {int mutex; int stream; void** volume; } ;
struct TYPE_6__ {int dai_id; int stream; } ;


 int VAR_0 ;
 void* FUNC_0 (scalar_t__) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct hsw_priv_data* FUNC_6 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_7 (struct snd_kcontrol*) ;
 int FUNC_8 (struct sst_hsw*,int ,int ,int,void*) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_2,
    struct snd_ctl_elem_value *VAR_3)
{
 struct snd_soc_component *VAR_4 = FUNC_7(VAR_2);
 struct soc_mixer_control *VAR_5 =
  (struct soc_mixer_control *)VAR_2->private_value;
 struct hsw_priv_data *VAR_6 =
  FUNC_6(VAR_4);
 struct hsw_pcm_data *VAR_7;
 struct sst_hsw *VAR_8 = VAR_6->hsw;
 u32 VAR_9;
 int VAR_10, VAR_11;

 VAR_10 = VAR_1[VAR_5->reg].dai_id;
 VAR_11 = VAR_1[VAR_5->reg].stream;
 VAR_7 = &VAR_6->pcm[VAR_10][VAR_11];

 FUNC_1(&VAR_7->mutex);
 FUNC_3(VAR_6->dev);

 if (!VAR_7->stream) {
  VAR_7->volume[0] =
   FUNC_0(VAR_3->value.integer.value[0]);
  VAR_7->volume[1] =
   FUNC_0(VAR_3->value.integer.value[1]);
  FUNC_4(VAR_6->dev);
  FUNC_5(VAR_6->dev);
  FUNC_2(&VAR_7->mutex);
  return 0;
 }

 if (VAR_3->value.integer.value[0] ==
  VAR_3->value.integer.value[1]) {
  VAR_9 = FUNC_0(VAR_3->value.integer.value[0]);

  FUNC_8(VAR_8, VAR_7->stream, 0, VAR_0, VAR_9);
 } else {
  VAR_9 = FUNC_0(VAR_3->value.integer.value[0]);
  FUNC_8(VAR_8, VAR_7->stream, 0, 0, VAR_9);
  VAR_9 = FUNC_0(VAR_3->value.integer.value[1]);
  FUNC_8(VAR_8, VAR_7->stream, 0, 1, VAR_9);
 }

 FUNC_4(VAR_6->dev);
 FUNC_5(VAR_6->dev);
 FUNC_2(&VAR_7->mutex);
 return 0;
}
