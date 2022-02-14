
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sh_dac {scalar_t__ empty; scalar_t__ data_buffer; scalar_t__ buffer_end; } ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;


 int FUNC_0 (struct snd_sh_dac*) ;
 int FUNC_1 (scalar_t__,int ,unsigned long) ;
 struct snd_sh_dac* FUNC_2 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_0,
      int VAR_1, unsigned long VAR_2,
      unsigned long VAR_3)
{

 struct snd_sh_dac *VAR_4 = FUNC_2(VAR_0);
 struct snd_pcm_runtime *VAR_5 = VAR_0->runtime;

 FUNC_1(VAR_4->data_buffer + VAR_2, 0, VAR_3);
 VAR_4->buffer_end = VAR_4->data_buffer + VAR_2 + VAR_3;

 if (VAR_4->empty) {
  VAR_4->empty = 0;
  FUNC_0(VAR_4);
 }

 return 0;
}
