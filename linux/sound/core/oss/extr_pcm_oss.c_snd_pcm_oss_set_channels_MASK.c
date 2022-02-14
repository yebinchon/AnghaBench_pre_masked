
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {unsigned int channels; int params; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_oss_file*) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_oss_file *VAR_1, unsigned int VAR_2)
{
 int VAR_3;
 if (VAR_2 < 1)
  VAR_2 = 1;
 if (VAR_2 > 128)
  return -VAR_0;
 for (VAR_3 = 1; VAR_3 >= 0; --VAR_3) {
  struct snd_pcm_substream *VAR_4 = VAR_1->streams[VAR_3];
  struct snd_pcm_runtime *VAR_5;
  int VAR_6;

  if (VAR_4 == ((void*)0))
   continue;
  VAR_5 = VAR_4->runtime;
  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6 < 0)
   return VAR_6;
  if (VAR_5->oss.channels != VAR_2) {
   VAR_5->oss.params = 1;
   VAR_5->oss.channels = VAR_2;
  }
  FUNC_2(VAR_5);
 }
 return FUNC_1(VAR_1);
}
