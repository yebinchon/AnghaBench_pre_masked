
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; } ;
struct TYPE_6__ {int * stream; } ;
struct TYPE_5__ {int * stream; } ;
struct lx6464es {int setup_mutex; TYPE_3__ playback_stream; TYPE_2__ capture_stream; scalar_t__* hardware_running; TYPE_1__* card; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lx6464es*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct lx6464es*,struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct snd_pcm_substream*) ;
 struct lx6464es* FUNC_7 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_8(struct snd_pcm_substream *VAR_1)
{
 struct lx6464es *VAR_2 = FUNC_7(VAR_1);
 int VAR_3 = 0;
 int VAR_4 = (VAR_1->stream == VAR_0);

 FUNC_0(VAR_2->card->dev, "->lx_pcm_hw_free\n");
 FUNC_4(&VAR_2->setup_mutex);

 if (VAR_2->hardware_running[VAR_4]) {
  VAR_3 = FUNC_3(VAR_2, VAR_1);
  if (VAR_3 < 0) {
   FUNC_1(VAR_2->card->dev, "failed to stop hardware. "
       "Error code %d\n", VAR_3);
   goto exit;
  }

  VAR_3 = FUNC_2(VAR_2, VAR_1);
  if (VAR_3 < 0) {
   FUNC_1(VAR_2->card->dev, "failed to close hardware. "
       "Error code %d\n", VAR_3);
   goto exit;
  }

  VAR_2->hardware_running[VAR_4] = 0;
 }

 VAR_3 = FUNC_6(VAR_1);

 if (VAR_4)
  VAR_2->capture_stream.stream = ((void*)0);
 else
  VAR_2->playback_stream.stream = ((void*)0);

exit:
 FUNC_5(&VAR_2->setup_mutex);
 return VAR_3;
}
