
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sst_byt_priv_data {struct sst_byt_pcm_data* pcm; } ;
struct sst_byt_pcm_data {int hw_ptr; } ;
struct snd_soc_pcm_runtime {int dev; } ;
struct snd_soc_component {int dummy; } ;
struct snd_pcm_substream {size_t stream; struct snd_pcm_runtime* runtime; struct snd_soc_pcm_runtime* private_data; } ;
struct snd_pcm_runtime {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (int ,char*,int ) ;
 struct sst_byt_priv_data* FUNC_2 (struct snd_soc_component*) ;
 struct snd_soc_component* FUNC_3 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream *VAR_1)
{
 struct snd_soc_pcm_runtime *VAR_2 = VAR_1->private_data;
 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_soc_component *VAR_4 = FUNC_3(VAR_2, VAR_0);
 struct sst_byt_priv_data *VAR_5 = FUNC_2(VAR_4);
 struct sst_byt_pcm_data *VAR_6 = &VAR_5->pcm[VAR_1->stream];

 FUNC_1(VAR_2->dev, "PCM: DMA pointer %u bytes\n", VAR_6->hw_ptr);

 return FUNC_0(VAR_3, VAR_6->hw_ptr);
}
