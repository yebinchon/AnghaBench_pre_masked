
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {struct snd_card_asihpi_pcm* private_data; } ;
struct snd_card_asihpi_pcm {int pcm_buf_dma_ofs; int buffer_bytes; } ;
typedef int snd_pcm_uframes_t ;
typedef int name ;


 int FUNC_0 (struct snd_pcm_runtime*,int) ;
 int FUNC_1 (struct snd_pcm_substream*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static snd_pcm_uframes_t
FUNC_3(struct snd_pcm_substream *VAR_0)
{
 struct snd_pcm_runtime *VAR_1 = VAR_0->runtime;
 struct snd_card_asihpi_pcm *VAR_2 = VAR_1->private_data;
 char VAR_3[16];
 FUNC_1(VAR_0, VAR_3, sizeof(VAR_3));

 FUNC_2("%s, pointer=%d\n", VAR_3, VAR_2->pcm_buf_dma_ofs);




 return FUNC_0(VAR_1, VAR_2->pcm_buf_dma_ofs % VAR_2->buffer_bytes);
}
