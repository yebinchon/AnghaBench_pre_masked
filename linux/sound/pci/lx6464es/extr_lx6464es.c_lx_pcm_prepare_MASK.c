
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; TYPE_2__* runtime; } ;
struct lx6464es {int* hardware_running; scalar_t__ board_sample_rate; int setup_mutex; TYPE_1__* card; } ;
struct TYPE_4__ {scalar_t__ rate; } ;
struct TYPE_3__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lx6464es*,struct snd_pcm_substream*) ;
 int FUNC_3 (struct lx6464es*,struct snd_pcm_substream*) ;
 int FUNC_4 (struct lx6464es*,struct snd_pcm_substream*) ;
 int FUNC_5 (struct lx6464es*,struct snd_pcm_substream*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct lx6464es* FUNC_8 (struct snd_pcm_substream*) ;

__attribute__((used)) static int FUNC_9(struct snd_pcm_substream *VAR_1)
{
 struct lx6464es *VAR_2 = FUNC_8(VAR_1);
 int VAR_3 = 0;
 const int VAR_4 = (VAR_1->stream == VAR_0);

 FUNC_0(VAR_2->card->dev, "->lx_pcm_prepare\n");

 FUNC_6(&VAR_2->setup_mutex);

 if (VAR_2->hardware_running[VAR_4]) {
  VAR_3 = FUNC_5(VAR_2, VAR_1);
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
 }

 FUNC_0(VAR_2->card->dev, "opening hardware\n");
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->card->dev, "failed to open hardware. "
      "Error code %d\n", VAR_3);
  goto exit;
 }

 VAR_3 = FUNC_4(VAR_2, VAR_1);
 if (VAR_3 < 0) {
  FUNC_1(VAR_2->card->dev, "failed to start hardware. "
      "Error code %d\n", VAR_3);
  goto exit;
 }

 VAR_2->hardware_running[VAR_4] = 1;

 if (VAR_2->board_sample_rate != VAR_1->runtime->rate) {
  if (!VAR_3)
   VAR_2->board_sample_rate = VAR_1->runtime->rate;
 }

exit:
 FUNC_7(&VAR_2->setup_mutex);
 return VAR_3;
}
