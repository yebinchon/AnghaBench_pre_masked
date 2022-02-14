
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct snd_soc_pcm_runtime {int dummy; } ;
struct snd_soc_component {struct device* dev; } ;
struct snd_pcm_substream {struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_bytes; int dma_addr; int dma_area; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,struct vm_area_struct*,int ,int ,int ) ;
 struct snd_soc_component* FUNC_1 (struct snd_soc_pcm_runtime*,int ) ;

__attribute__((used)) static int FUNC_2(struct snd_pcm_substream *VAR_1,
    struct vm_area_struct *VAR_2)
{

 struct snd_pcm_runtime *VAR_3 = VAR_1->runtime;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_1->private_data;
 struct snd_soc_component *VAR_5 = FUNC_1(VAR_4, VAR_0);
 struct device *VAR_6 = VAR_5->dev;

 return FUNC_0(VAR_6, VAR_2,
   VAR_3->dma_area, VAR_3->dma_addr,
   VAR_3->dma_bytes);
}
