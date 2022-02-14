
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_pcm_substream {scalar_t__ stream; } ;
struct hdspm {int playback_pid; int capture_pid; int lock; int * capture_substream; int * playback_substream; } ;


 scalar_t__ VAR_0 ;
 struct hdspm* FUNC_0 (struct snd_pcm_substream*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct snd_pcm_substream *VAR_1)
{
 struct hdspm *VAR_2 = FUNC_0(VAR_1);
 bool VAR_3 = (VAR_1->stream == VAR_0);

 FUNC_1(&VAR_2->lock);

 if (VAR_3) {
  VAR_2->playback_pid = -1;
  VAR_2->playback_substream = ((void*)0);
 } else {
  VAR_2->capture_pid = -1;
  VAR_2->capture_substream = ((void*)0);
 }

 FUNC_2(&VAR_2->lock);

 return 0;
}
