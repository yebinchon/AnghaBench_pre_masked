
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sst_hsw {int dummy; } ;
struct soc_mixer_control {size_t reg; } ;
struct snd_soc_component {int dummy; } ;
struct snd_kcontrol {scalar_t__ private_value; } ;
struct TYPE_4__ {void** value; } ;
struct TYPE_5__ {TYPE_1__ integer; } ;
struct snd_ctl_elem_value {TYPE_2__ value; } ;
struct hsw_priv_data {int dev; struct hsw_pcm_data** pcm; struct sst_hsw* hsw; } ;
struct hsw_pcm_data {int mutex; int stream; int * volume; } ;
struct TYPE_6__ {int dai_id; int stream; } ;


 void* FUNC_0 (int ) ;
 TYPE_3__* VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct hsw_priv_data* FUNC_6 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_7 (struct snd_kcontrol*) ;
 int FUNC_8 (struct sst_hsw*,int ,int ,int,int *) ;

__attribute__((used)) static int FUNC_9(struct snd_kcontrol *VAR_1,
    struct snd_ctl_elem_value *VAR_2)
{
 struct snd_soc_component *VAR_3 = FUNC_7(VAR_1);
 struct soc_mixer_control *VAR_4 =
  (struct soc_mixer_control *)VAR_1->private_value;
 struct hsw_priv_data *VAR_5 =
  FUNC_6(VAR_3);
 struct hsw_pcm_data *VAR_6;
 struct sst_hsw *VAR_7 = VAR_5->hsw;
 u32 VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = VAR_0[VAR_4->reg].dai_id;
 VAR_10 = VAR_0[VAR_4->reg].stream;
 VAR_6 = &VAR_5->pcm[VAR_9][VAR_10];

 FUNC_1(&VAR_6->mutex);
 FUNC_3(VAR_5->dev);

 if (!VAR_6->stream) {
  VAR_2->value.integer.value[0] =
   FUNC_0(VAR_6->volume[0]);
  VAR_2->value.integer.value[1] =
   FUNC_0(VAR_6->volume[1]);
  FUNC_4(VAR_5->dev);
  FUNC_5(VAR_5->dev);
  FUNC_2(&VAR_6->mutex);
  return 0;
 }

 FUNC_8(VAR_7, VAR_6->stream, 0, 0, &VAR_8);
 VAR_2->value.integer.value[0] = FUNC_0(VAR_8);
 FUNC_8(VAR_7, VAR_6->stream, 0, 1, &VAR_8);
 VAR_2->value.integer.value[1] = FUNC_0(VAR_8);

 FUNC_4(VAR_5->dev);
 FUNC_5(VAR_5->dev);
 FUNC_2(&VAR_6->mutex);

 return 0;
}
