
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {int dummy; } ;
struct snd_pcm {TYPE_1__* streams; } ;
struct TYPE_2__ {struct snd_pcm_substream* substream; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct snd_pcm*) ;

__attribute__((used)) static void FUNC_1(struct snd_pcm *VAR_1)
{
 struct snd_pcm_substream *VAR_2;

 VAR_2 = VAR_1->streams[VAR_0].substream;
 if (VAR_2)
  FUNC_0(VAR_1);
}
