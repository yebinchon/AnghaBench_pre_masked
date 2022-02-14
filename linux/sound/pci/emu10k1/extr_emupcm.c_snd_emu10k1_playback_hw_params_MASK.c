
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ dma_bytes; struct snd_emu10k1_pcm* private_data; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct snd_emu10k1_pcm {int start_addr; int * memblk; } ;
struct snd_emu10k1_memblk {int mapped_page; } ;
struct snd_emu10k1 {scalar_t__ iommu_workaround; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct snd_pcm_hw_params*) ;
 int FUNC_1 (struct snd_pcm_hw_params*) ;
 int * FUNC_2 (struct snd_emu10k1*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct snd_emu10k1*,int *) ;
 int FUNC_4 (struct snd_emu10k1_pcm*,int ) ;
 int FUNC_5 (struct snd_pcm_substream*,size_t) ;
 struct snd_emu10k1* FUNC_6 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_3,
       struct snd_pcm_hw_params *VAR_4)
{
 struct snd_emu10k1 *VAR_5 = FUNC_6(VAR_3);
 struct snd_pcm_runtime *VAR_6 = VAR_3->runtime;
 struct snd_emu10k1_pcm *VAR_7 = VAR_6->private_data;
 size_t VAR_8;
 int VAR_9;

 if ((VAR_9 = FUNC_4(VAR_7, FUNC_1(VAR_4))) < 0)
  return VAR_9;

 VAR_8 = FUNC_0(VAR_4);
 if (VAR_5->iommu_workaround)
  VAR_8 += VAR_0;
 VAR_9 = FUNC_5(VAR_3, VAR_8);
 if (VAR_9 < 0)
  return VAR_9;
 if (VAR_5->iommu_workaround && VAR_6->dma_bytes >= VAR_0)
  VAR_6->dma_bytes -= VAR_0;
 if (VAR_9 > 0) {
  int VAR_10;
  if (VAR_7->memblk != ((void*)0))
   FUNC_3(VAR_5, VAR_7->memblk);
  VAR_7->memblk = FUNC_2(VAR_5, VAR_3);
  VAR_7->start_addr = 0;
  if (! VAR_7->memblk)
   return -VAR_1;
  VAR_10 = ((struct snd_emu10k1_memblk *)VAR_7->memblk)->mapped_page;
  if (VAR_10 < 0)
   return -VAR_1;
  VAR_7->start_addr = VAR_10 << VAR_2;
 }
 return 0;
}
