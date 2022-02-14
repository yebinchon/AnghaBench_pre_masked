
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {size_t number; size_t stream; struct loopback* private_data; } ;
struct loopback_cable {int lock; int ** streams; } ;
struct loopback {struct loopback_cable*** cables; } ;


 int FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (struct loopback_cable*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct snd_pcm_substream *VAR_0)
{
 struct loopback *VAR_1 = VAR_0->private_data;
 int VAR_2 = FUNC_0(VAR_0);
 struct loopback_cable *VAR_3;

 VAR_3 = VAR_1->cables[VAR_0->number][VAR_2];
 if (!VAR_3)
  return;
 if (VAR_3->streams[!VAR_0->stream]) {

  FUNC_2(&VAR_3->lock);
  VAR_3->streams[VAR_0->stream] = ((void*)0);
  FUNC_3(&VAR_3->lock);
 } else {

  VAR_1->cables[VAR_0->number][VAR_2] = ((void*)0);
  FUNC_1(VAR_3);
 }
}
