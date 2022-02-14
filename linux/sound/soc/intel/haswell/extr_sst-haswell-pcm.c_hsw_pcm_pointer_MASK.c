
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u32 ;
struct sst_hsw {int dummy; } ;
struct snd_soc_pcm_runtime {int dev; TYPE_1__* cpu_dai; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dummy; } ;
struct hsw_priv_data {struct hsw_pcm_data** pcm; struct sst_hsw* hsw; } ;
struct hsw_pcm_data {int stream; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_4__ {int dai_id; } ;
struct TYPE_3__ {size_t id; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (int ,char*,int ,int ) ;
 TYPE_2__* VAR_1 ;
 struct hsw_priv_data* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_4 (struct sst_hsw*,int ) ;
 int FUNC_5 (struct sst_hsw*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_6(struct snd_pcm_substream *VAR_2)
{
 struct snd_soc_pcm_runtime *VAR_3 = VAR_2->private_data;
 struct snd_pcm_runtime *VAR_4 = VAR_2->runtime;
 struct snd_soc_component *VAR_5 = FUNC_3(VAR_3, VAR_0);
 struct hsw_priv_data *VAR_6 = FUNC_2(VAR_5);
 struct hsw_pcm_data *VAR_7;
 struct sst_hsw *VAR_8 = VAR_6->hsw;
 snd_pcm_uframes_t VAR_9;
 uint64_t VAR_10;
 u32 VAR_11;
 int VAR_12;

 VAR_12 = VAR_1[VAR_3->cpu_dai->id].dai_id;
 VAR_7 = &VAR_6->pcm[VAR_12][VAR_2->stream];
 VAR_11 = FUNC_4(VAR_8, VAR_7->stream);

 VAR_9 = FUNC_0(VAR_4, VAR_11);
 VAR_10 = FUNC_5(VAR_8, VAR_7->stream);

 FUNC_1(VAR_3->dev, "PCM: DMA pointer %du bytes, pos %llu\n",
  VAR_11, VAR_10);
 return VAR_9;
}
