
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_1__* runtime; } ;
struct lx_stream {int frame_pos; } ;
struct lx6464es {TYPE_2__* card; int lock; struct lx_stream playback_stream; struct lx_stream capture_stream; } ;
typedef int snd_pcm_uframes_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int period_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct lx6464es* FUNC_3 (struct snd_pcm_substream*) ;

__attribute__((used)) static snd_pcm_uframes_t FUNC_4(struct snd_pcm_substream
            *VAR_1)
{
 struct lx6464es *VAR_2 = FUNC_3(VAR_1);
 snd_pcm_uframes_t VAR_3;
 int VAR_4 = (VAR_1->stream == VAR_0);

 struct lx_stream *VAR_5 = VAR_4 ? &VAR_2->capture_stream :
  &VAR_2->playback_stream;

 FUNC_0(VAR_2->card->dev, "->lx_pcm_stream_pointer\n");

 FUNC_1(&VAR_2->lock);
 VAR_3 = VAR_5->frame_pos * VAR_1->runtime->period_size;
 FUNC_2(&VAR_2->lock);

 FUNC_0(VAR_2->card->dev, "stream_pointer at %ld\n", VAR_3);
 return VAR_3;
}
