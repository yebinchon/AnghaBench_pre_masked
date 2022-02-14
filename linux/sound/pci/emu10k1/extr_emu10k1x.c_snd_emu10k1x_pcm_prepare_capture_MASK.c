
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; int buffer_size; } ;
struct emu10k1x {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_runtime*,int ) ;
 int FUNC_1 (struct emu10k1x*,int ,int ,int) ;
 struct emu10k1x* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_4)
{
 struct emu10k1x *VAR_5 = FUNC_2(VAR_4);
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;

 FUNC_1(VAR_5, VAR_1, 0, VAR_6->dma_addr);
 FUNC_1(VAR_5, VAR_0, 0, FUNC_0(VAR_6, VAR_6->buffer_size)<<16);
 FUNC_1(VAR_5, VAR_2, 0, 0);
 FUNC_1(VAR_5, VAR_3, 0, 0);

 return 0;
}
