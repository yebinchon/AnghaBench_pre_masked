
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pcxhr_pipe {int dummy; } ;
struct snd_pcxhr {int nb_streams_play; int nb_streams_capt; TYPE_2__* capture_stream; struct pcxhr_pipe* capture_pipe; TYPE_1__* playback_stream; struct pcxhr_pipe playback_pipe; } ;
struct pcxhr_mgr {int num_cards; struct snd_pcxhr** chip; } ;
struct TYPE_4__ {struct pcxhr_pipe* pipe; } ;
struct TYPE_3__ {struct pcxhr_pipe* pipe; } ;


 int FUNC_0 (struct pcxhr_mgr*,struct pcxhr_pipe*,int,int) ;

__attribute__((used)) static int FUNC_1(struct pcxhr_mgr *VAR_0)
{
 int VAR_1, VAR_2, VAR_3;
 struct snd_pcxhr *VAR_4;
 struct pcxhr_pipe *VAR_5;


 for (VAR_2 = 0; VAR_2 < VAR_0->num_cards; VAR_2++) {
  VAR_4 = VAR_0->chip[VAR_2];
  if (VAR_4->nb_streams_play) {
   VAR_5 = &VAR_4->playback_pipe;
   VAR_1 = FUNC_0( VAR_0, VAR_5, 0, VAR_2*2);
   if (VAR_1)
    return VAR_1;
   for(VAR_3 = 0; VAR_3 < VAR_4->nb_streams_play; VAR_3++)
    VAR_4->playback_stream[VAR_3].pipe = VAR_5;
  }
  for (VAR_3 = 0; VAR_3 < VAR_4->nb_streams_capt; VAR_3++) {
   VAR_5 = &VAR_4->capture_pipe[VAR_3];
   VAR_1 = FUNC_0(VAR_0, VAR_5, 1, VAR_2*2 + VAR_3);
   if (VAR_1)
    return VAR_1;
   VAR_4->capture_stream[VAR_3].pipe = VAR_5;
  }
 }
 return 0;
}
