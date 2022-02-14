
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_pcm_runtime {struct snd_pcm* pcm; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 int FUNC_0 (struct snd_pcm*) ;
 int FUNC_1 (struct snd_pcm_substream*,int) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_pcm_runtime *VAR_0)
{
 struct snd_pcm_substream *VAR_1;
 struct snd_pcm *VAR_2 = VAR_0->pcm;
 int VAR_3 = 0, VAR_4;

 for (VAR_4 = 0; VAR_4 < 2; VAR_4++) {
  VAR_1 = VAR_2->streams[VAR_4].substream;

  VAR_3 = FUNC_1(VAR_1, VAR_4);
  if (VAR_3)
   goto err;
 }

 return 0;

err:
 FUNC_0(VAR_2);
 return VAR_3;
}
