
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {int dummy; } ;
struct pcm_substream {int active; int lock; int * instance; } ;
struct pcm_runtime {int stream_mutex; scalar_t__ panic; } ;


 struct pcm_substream* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct pcm_runtime*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct pcm_runtime* FUNC_4 (struct snd_pcm_substream*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct snd_pcm_substream *VAR_0)
{
 struct pcm_runtime *VAR_1 = FUNC_4(VAR_0);
 struct pcm_substream *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 if (VAR_1->panic)
  return 0;

 FUNC_2(&VAR_1->stream_mutex);
 if (VAR_2) {
  FUNC_1(VAR_1);


  FUNC_5(&VAR_2->lock, VAR_3);
  VAR_2->instance = ((void*)0);
  VAR_2->active = 0;
  FUNC_6(&VAR_2->lock, VAR_3);

 }
 FUNC_3(&VAR_1->stream_mutex);
 return 0;
}
