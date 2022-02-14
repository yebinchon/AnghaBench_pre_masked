
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dummy; } ;
struct snd_pcm_oss_file {struct snd_pcm_substream** streams; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_pcm_runtime*) ;
 int FUNC_1 (struct snd_pcm_substream*,unsigned int) ;
 int FUNC_2 (struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_oss_file *VAR_1, unsigned int VAR_2)
{
 int VAR_3 = -VAR_0, VAR_4;

 for (VAR_4 = 1; VAR_4 >= 0; --VAR_4) {
  struct snd_pcm_substream *VAR_5 = VAR_1->streams[VAR_4];
  struct snd_pcm_runtime *VAR_6;

  if (VAR_5 == ((void*)0))
   continue;
  VAR_6 = VAR_5->runtime;
  VAR_3 = FUNC_0(VAR_6);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_3 = FUNC_1(VAR_5, VAR_2);
  FUNC_2(VAR_6);
  if (VAR_3 < 0)
   return VAR_3;
 }
 return VAR_3;
}
