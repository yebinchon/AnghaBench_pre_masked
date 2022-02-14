
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_runtime {int buffer_size; } ;
typedef int snd_pcm_uframes_t ;



__attribute__((used)) static snd_pcm_uframes_t FUNC_0(struct snd_pcm_runtime *VAR_0)
{
 snd_pcm_uframes_t VAR_1;

 if (! VAR_0->buffer_size)
  return 0;
 VAR_1 = VAR_0->buffer_size;
 while (VAR_1 * 2 <= 0x7fffffffUL - VAR_0->buffer_size)
  VAR_1 *= 2;
 return VAR_1;
}
