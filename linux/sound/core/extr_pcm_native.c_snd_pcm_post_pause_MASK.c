
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {TYPE_1__* status; int tsleep; int sleep; } ;
struct TYPE_2__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct snd_pcm_substream*,int ) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct snd_pcm_substream *VAR_4, int VAR_5)
{
 struct snd_pcm_runtime *VAR_6 = VAR_4->runtime;
 FUNC_1(VAR_4);
 if (VAR_5) {
  VAR_6->status->state = VAR_0;
  FUNC_0(VAR_4, VAR_3);
  FUNC_2(&VAR_6->sleep);
  FUNC_2(&VAR_6->tsleep);
 } else {
  VAR_6->status->state = VAR_1;
  FUNC_0(VAR_4, VAR_2);
 }
}
