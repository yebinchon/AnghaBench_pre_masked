
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct snd_soc_pcm_runtime {TYPE_1__* cpu_dai; } ;
struct snd_pcm_substream {scalar_t__ stream; struct snd_soc_pcm_runtime* private_data; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned long dma_bytes; scalar_t__ dma_area; scalar_t__ dma_addr; } ;
struct camelot_pcm {int dummy; } ;
struct TYPE_2__ {size_t id; } ;
typedef unsigned long BRGREG ;


 scalar_t__ VAR_0 ;
 struct camelot_pcm* VAR_1 ;
 int FUNC_0 (char*,int ,unsigned long) ;

__attribute__((used)) static int FUNC_1(struct snd_pcm_substream *VAR_2)
{
 struct snd_pcm_runtime *VAR_3 = VAR_2->runtime;
 struct snd_soc_pcm_runtime *VAR_4 = VAR_2->private_data;
 struct camelot_pcm *VAR_5 = &VAR_1[VAR_4->cpu_dai->id];

 FUNC_0("PCM data: addr 0x%08lx len %d\n",
   (u32)VAR_3->dma_addr, VAR_3->dma_bytes);

 if (VAR_2->stream == VAR_0) {
  BRGREG(VAR_6) = (unsigned long)VAR_3->dma_area;
  BRGREG(VAR_7) = VAR_3->dma_bytes;
 } else {
  BRGREG(VAR_8) = (unsigned long)VAR_3->dma_area;
  BRGREG(VAR_9) = VAR_3->dma_bytes;
 }

 return 0;
}
