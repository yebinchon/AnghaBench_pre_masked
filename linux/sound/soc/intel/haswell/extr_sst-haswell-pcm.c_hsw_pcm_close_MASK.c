
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
struct hsw_pcm_data {int allocated; int mutex; int * stream; } ;
struct TYPE_4__ {int dai_id; } ;
struct TYPE_3__ {size_t id; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct hsw_priv_data* FUNC_5 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_6 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_7 (struct sst_hsw*,int *) ;
 int FUNC_8 (struct sst_hsw*,int *) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_soc_component *VAR_4 = FUNC_6(VAR_3, VAR_0);
 struct hsw_priv_data *VAR_5 = FUNC_5(VAR_4);
 struct hsw_pcm_data *VAR_6;
 struct sst_hsw *VAR_7 = VAR_5->hsw;
 int VAR_8, VAR_9;

 VAR_9 = VAR_1[VAR_3->cpu_dai->id].dai_id;
 VAR_6 = &VAR_5->pcm[VAR_9][VAR_2->stream];

 FUNC_1(&VAR_6->mutex);
 VAR_8 = FUNC_8(VAR_7, VAR_6->stream);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3->dev, "error: reset stream failed %d\n", VAR_8);
  goto out;
 }

 VAR_8 = FUNC_7(VAR_7, VAR_6->stream);
 if (VAR_8 < 0) {
  FUNC_0(VAR_3->dev, "error: free stream failed %d\n", VAR_8);
  goto out;
 }
 VAR_6->allocated = 0;
 VAR_6->stream = ((void*)0);

out:
 FUNC_3(VAR_5->dev);
 FUNC_4(VAR_5->dev);
 FUNC_2(&VAR_6->mutex);
 return VAR_8;
}
