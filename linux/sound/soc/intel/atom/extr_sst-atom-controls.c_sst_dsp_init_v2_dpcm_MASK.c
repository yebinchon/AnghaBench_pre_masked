
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sst_data {int byte_stream; } ;
struct snd_soc_dapm_context {int card; } ;
struct snd_soc_component {int dev; } ;
struct TYPE_2__ {int ramp_duration; void* r_gain; void* l_gain; int mute; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (struct snd_soc_component*,int ,int) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct sst_data* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*,int ,int) ;
 int FUNC_6 (struct snd_soc_dapm_context*,int ,int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 int FUNC_9 (struct snd_soc_component*) ;
 int VAR_11 ;

int FUNC_10(struct snd_soc_component *VAR_12)
{
 int VAR_13, VAR_14 = 0;
 struct snd_soc_dapm_context *VAR_15 =
   FUNC_3(VAR_12);
 struct sst_data *VAR_16 = FUNC_4(VAR_12);
 unsigned int VAR_17 = FUNC_0(VAR_9)/3;

 VAR_16->byte_stream = FUNC_1(VAR_12->dev,
     VAR_5, VAR_1);
 if (!VAR_16->byte_stream)
  return -VAR_0;

 FUNC_6(VAR_15, VAR_8,
   FUNC_0(VAR_8));
 FUNC_5(VAR_15, VAR_6,
   FUNC_0(VAR_6));
 FUNC_7(VAR_15->card);

 for (VAR_13 = 0; VAR_13 < VAR_17; VAR_13++) {
  VAR_10[VAR_13].mute = VAR_2;
  VAR_10[VAR_13].l_gain = VAR_4;
  VAR_10[VAR_13].r_gain = VAR_4;
  VAR_10[VAR_13].ramp_duration = VAR_3;
 }

 VAR_14 = FUNC_2(VAR_12, VAR_9,
   FUNC_0(VAR_9));
 if (VAR_14)
  return VAR_14;


 VAR_14 = FUNC_8(VAR_12->dev);
 if (VAR_14)
  return VAR_14;
 VAR_14 = FUNC_2(VAR_12, VAR_7,
   FUNC_0(VAR_7));
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_2(VAR_12, VAR_11,
   FUNC_0(VAR_11));
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_9(VAR_12);

 return VAR_14;
}
