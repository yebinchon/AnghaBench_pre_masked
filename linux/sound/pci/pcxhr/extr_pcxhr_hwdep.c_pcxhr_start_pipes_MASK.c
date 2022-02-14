
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int first_audio; } ;
struct snd_pcxhr {int nb_streams_capt; TYPE_2__* capture_pipe; TYPE_1__ playback_pipe; scalar_t__ nb_streams_play; } ;
struct pcxhr_mgr {int num_cards; struct snd_pcxhr** chip; } ;
struct TYPE_4__ {int first_audio; } ;


 int FUNC_0 (struct pcxhr_mgr*,int,int,int) ;

__attribute__((used)) static int FUNC_1(struct pcxhr_mgr *VAR_0)
{
 int VAR_1, VAR_2;
 struct snd_pcxhr *VAR_3;
 int VAR_4 = 0;
 int VAR_5 = 0;


 for (VAR_1 = 0; VAR_1 < VAR_0->num_cards; VAR_1++) {
  VAR_3 = VAR_0->chip[VAR_1];
  if (VAR_3->nb_streams_play)
   VAR_4 |= 1 << VAR_3->playback_pipe.first_audio;
  for (VAR_2 = 0; VAR_2 < VAR_3->nb_streams_capt; VAR_2++)
   VAR_5 |= 1 << VAR_3->capture_pipe[VAR_2].first_audio;
 }
 return FUNC_0(VAR_0, VAR_4, VAR_5, 1);
}
