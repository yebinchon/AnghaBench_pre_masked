
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; int channels; int format; int rate; struct snd_azf3328_codec_data* private_data; } ;
struct snd_azf3328_codec_data {int dma_base; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct snd_azf3328_codec_data*,int ,unsigned int,unsigned int) ;
 int FUNC_1 (struct snd_azf3328_codec_data*,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct snd_pcm_substream*) ;
 unsigned int FUNC_4 (struct snd_pcm_substream*) ;

__attribute__((used)) static int
FUNC_5(struct snd_pcm_substream *VAR_1)
{
 struct snd_pcm_runtime *VAR_2 = VAR_1->runtime;
 struct snd_azf3328_codec_data *VAR_3 = VAR_2->private_data;





 VAR_3->dma_base = VAR_2->dma_addr;
 return 0;
}
