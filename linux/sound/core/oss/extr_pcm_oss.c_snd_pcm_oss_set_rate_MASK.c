
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct TYPE_2__ {int rate; int params; } ;
struct snd_pcm_runtime {TYPE_1__ oss; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 int FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_oss_file*) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_oss_file *VAR_0, int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 1; VAR_2 >= 0; --VAR_2) {
  struct snd_pcm_substream *VAR_3 = VAR_0->streams[VAR_2];
  struct snd_pcm_runtime *VAR_4;
  int VAR_5;

  if (VAR_3 == ((void*)0))
   continue;
  VAR_4 = VAR_3->runtime;
  if (VAR_1 < 1000)
   VAR_1 = 1000;
  else if (VAR_1 > 192000)
   VAR_1 = 192000;
  VAR_5 = FUNC_0(VAR_4);
  if (VAR_5 < 0)
   return VAR_5;
  if (VAR_4->oss.rate != VAR_1) {
   VAR_4->oss.params = 1;
   VAR_4->oss.rate = VAR_1;
  }
  FUNC_2(VAR_4);
 }
 return FUNC_1(VAR_0);
}
