
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {scalar_t__ format; int channels; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct snd_pcm_substream *VAR_2,
     int VAR_3)
{
 int VAR_4 = VAR_3;
 struct snd_pcm_runtime *VAR_5 = VAR_2->runtime;

 if (VAR_5->format == VAR_0 ||
     VAR_5->format == VAR_1)
  VAR_4 = VAR_4 >> 2;
 else
  VAR_4 = VAR_4 >> 1;

 VAR_4 = VAR_4 / VAR_5->channels;
 return VAR_4;
}
