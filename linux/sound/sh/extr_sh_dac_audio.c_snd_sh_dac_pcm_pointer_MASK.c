
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_sh_dac {int buffer_begin; int data_buffer; } ;
struct snd_pcm_substream {int dummy; } ;
typedef int snd_pcm_uframes_t ;


 struct snd_sh_dac* FUNC_0 (struct snd_pcm_substream*) ;

__attribute__((used)) static
snd_pcm_uframes_t FUNC_1(struct snd_pcm_substream *VAR_0)
{
 struct snd_sh_dac *VAR_1 = FUNC_0(VAR_0);
 int VAR_2 = VAR_1->buffer_begin - VAR_1->data_buffer;

 return VAR_2;
}
