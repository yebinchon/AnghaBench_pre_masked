
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int stream; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int min_align; scalar_t__ dma_addr; int dma_bytes; scalar_t__ dma_area; } ;
struct snd_pcm_hw_params {unsigned long msbits; } ;
struct au1xpsc_audio_dmadata {unsigned long periods; scalar_t__ pos; scalar_t__ curr_period; scalar_t__ q_period; scalar_t__ dma_area; scalar_t__ dma_area_s; int period_bytes; struct snd_pcm_substream* substream; } ;


 int FUNC_0 (char*,unsigned long,unsigned long,int ,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct au1xpsc_audio_dmadata*,int,unsigned long) ;
 int FUNC_3 (struct snd_pcm_hw_params*) ;
 int FUNC_4 (struct snd_pcm_hw_params*) ;
 unsigned long FUNC_5 (struct snd_pcm_hw_params*) ;
 int FUNC_6 (struct snd_pcm_substream*,int ) ;
 struct au1xpsc_audio_dmadata* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_0,
     struct snd_pcm_hw_params *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_0->runtime;
 struct au1xpsc_audio_dmadata *VAR_3;
 int VAR_4, VAR_5;

 VAR_5 = FUNC_6(VAR_0, FUNC_3(VAR_1));
 if (VAR_5 < 0)
  goto out;

 VAR_4 = VAR_0->stream;
 VAR_3 = FUNC_7(VAR_0);

 FUNC_0("runtime->dma_area = 0x%08lx dma_addr_t = 0x%08lx dma_size = %zu "
     "runtime->min_align %lu\n",
  (unsigned long)VAR_2->dma_area,
  (unsigned long)VAR_2->dma_addr, VAR_2->dma_bytes,
  VAR_2->min_align);

 FUNC_0("bits %d  frags %d  frag_bytes %d  is_rx %d\n", VAR_1->msbits,
  FUNC_5(VAR_1), FUNC_4(VAR_1), VAR_4);

 VAR_5 = FUNC_2(VAR_3, VAR_4, VAR_1->msbits);
 if (VAR_5) {
  FUNC_1("DDMA channel (re)alloc failed!\n");
  goto out;
 }

 VAR_3->substream = VAR_0;
 VAR_3->period_bytes = FUNC_4(VAR_1);
 VAR_3->periods = FUNC_5(VAR_1);
 VAR_3->dma_area_s = VAR_3->dma_area = VAR_2->dma_addr;
 VAR_3->q_period = 0;
 VAR_3->curr_period = 0;
 VAR_3->pos = 0;

 VAR_5 = 0;
out:
 return VAR_5;
}
