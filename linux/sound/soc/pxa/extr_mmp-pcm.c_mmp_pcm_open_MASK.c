
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_pcm_runtime {struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int id; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {size_t stream; struct snd_soc_pcm_runtime* private_data; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct mmp_dma_data {int ssp_id; struct resource* dma_res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 struct resource* FUNC_0 (struct platform_device*,int ,size_t) ;
 int FUNC_1 (struct snd_pcm_substream*,int ,struct mmp_dma_data*) ;
 struct snd_soc_component* FUNC_2 (struct snd_soc_pcm_runtime*,int ) ;
 int FUNC_3 (struct snd_pcm_substream*,int *) ;
 struct platform_device* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_5)
{
 struct snd_soc_pcm_runtime *VAR_6 = VAR_5->private_data;
 struct snd_soc_component *VAR_7 = FUNC_2(VAR_6, VAR_0);
 struct platform_device *VAR_8 = FUNC_4(VAR_7->dev);
 struct snd_soc_dai *VAR_9 = VAR_6->cpu_dai;
 struct mmp_dma_data VAR_10;
 struct resource *VAR_11;

 VAR_11 = FUNC_0(VAR_8, VAR_2, VAR_5->stream);
 if (!VAR_11)
  return -VAR_1;

 FUNC_3(VAR_5,
    &VAR_4[VAR_5->stream]);

 VAR_10.dma_res = VAR_11;
 VAR_10.ssp_id = VAR_9->id;

 return FUNC_1(VAR_5, VAR_3,
      &VAR_10);
}
