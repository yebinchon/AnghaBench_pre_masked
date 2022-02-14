
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sst_hsw {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; TYPE_1__* cpu_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
struct hsw_priv_data {int dev; struct hsw_pcm_data** pcm; struct sst_hsw* hsw; } ;
struct hsw_pcm_data {int mutex; int * stream; struct snd_pcm_substream* substream; } ;
struct TYPE_4__ {int dai_id; } ;
struct TYPE_3__ {size_t id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_2__* VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 struct hsw_priv_data* FUNC_6 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_7 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_8 (struct snd_pcm_substream*,int *) ;
 int * FUNC_9 (struct sst_hsw*,size_t,int ,struct hsw_pcm_data*) ;

__attribute__((used)) static int FUNC_10(struct snd_pcm_substream *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_5->private_data;
 struct snd_soc_component *VAR_7 = FUNC_7(VAR_6, VAR_0);
 struct hsw_priv_data *VAR_8 = FUNC_6(VAR_7);
 struct hsw_pcm_data *VAR_9;
 struct sst_hsw *VAR_10 = VAR_8->hsw;
 int VAR_11;

 VAR_11 = VAR_4[VAR_6->cpu_dai->id].dai_id;
 VAR_9 = &VAR_8->pcm[VAR_11][VAR_5->stream];

 FUNC_1(&VAR_9->mutex);
 FUNC_3(VAR_8->dev);

 VAR_9->substream = VAR_5;

 FUNC_8(VAR_5, &VAR_3);

 VAR_9->stream = FUNC_9(VAR_10, VAR_6->cpu_dai->id,
  VAR_2, VAR_9);
 if (VAR_9->stream == ((void*)0)) {
  FUNC_0(VAR_6->dev, "error: failed to create stream\n");
  FUNC_4(VAR_8->dev);
  FUNC_5(VAR_8->dev);
  FUNC_2(&VAR_9->mutex);
  return -VAR_1;
 }

 FUNC_2(&VAR_9->mutex);
 return 0;
}
