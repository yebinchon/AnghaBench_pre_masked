
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int number; struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_card_asihpi_pcm* private_data; } ;
struct snd_card_asihpi_pcm {scalar_t__ pcm_buf_elapsed_dma_ofs; scalar_t__ pcm_buf_dma_ofs; scalar_t__ pcm_buf_host_rw_ofs; int h_stream; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct snd_card_asihpi_pcm *VAR_2 = VAR_1->private_data;

 FUNC_0(FUNC_1(VAR_2->h_stream));
 VAR_2->pcm_buf_host_rw_ofs = 0;
 VAR_2->pcm_buf_dma_ofs = 0;
 VAR_2->pcm_buf_elapsed_dma_ofs = 0;

 FUNC_2("Capture Prepare %d\n", VAR_0->number);
 return 0;
}
