
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int channels; unsigned int rate; unsigned int sample_bits; } ;
struct hdac_bus {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_0 (struct hdac_bus*,int ) ;

int FUNC_1(struct hdac_bus *VAR_2,
       struct snd_pcm_substream *VAR_3)
{
 struct snd_pcm_runtime *VAR_4 = VAR_3->runtime;
 unsigned int VAR_5 = VAR_4->channels,
       VAR_6 = VAR_4->rate,
       VAR_7 = VAR_4->sample_bits,
       VAR_8, VAR_9, VAR_10;


 VAR_8 = FUNC_0(VAR_2, VAR_1) & VAR_0;


 for (VAR_10 = VAR_8; VAR_10 > 0; VAR_10 >>= 1) {
  if (VAR_6 > 48000)
   VAR_9 = (VAR_5 * VAR_7 *
     (VAR_6 / 48000)) / VAR_10;
  else
   VAR_9 = (VAR_5 * VAR_7) / VAR_10;

  if (VAR_9 >= 8)
   break;
 }


 return VAR_10 >> 1;
}
