
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm {int name; struct pcm_runtime* private_data; } ;
struct sfire_chip {struct pcm_runtime* pcm; TYPE_3__* dev; int card; } ;
struct TYPE_6__ {int lock; } ;
struct TYPE_5__ {int lock; } ;
struct pcm_runtime {struct snd_pcm* instance; TYPE_4__* in_urbs; TYPE_4__* out_urbs; TYPE_2__ capture; TYPE_1__ playback; int stream_mutex; int stream_wait_queue; int rate; int stream_state; struct sfire_chip* chip; } ;
struct TYPE_8__ {struct TYPE_8__* peer; } ;
struct TYPE_7__ {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcm_runtime*) ;
 struct pcm_runtime* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_6 (int ,char*,int ,int,int,struct snd_pcm**) ;
 int FUNC_7 (struct snd_pcm*,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*) ;
 int FUNC_10 (struct pcm_runtime*) ;
 int FUNC_11 (struct pcm_runtime*) ;
 int VAR_10 ;
 int FUNC_12 (TYPE_4__*,struct sfire_chip*,int,int ,int ) ;
 int VAR_11 ;

int FUNC_13(struct sfire_chip *VAR_12)
{
 int VAR_13;
 int VAR_14;
 struct snd_pcm *VAR_15;
 struct pcm_runtime *VAR_16 =
   FUNC_4(sizeof(struct pcm_runtime), VAR_1);

 if (!VAR_16)
  return -VAR_0;

 VAR_14 = FUNC_11(VAR_16);
 if (VAR_14) {
  FUNC_10(VAR_16);
  FUNC_3(VAR_16);
  return VAR_14;
 }

 VAR_16->chip = VAR_12;
 VAR_16->stream_state = VAR_7;
 VAR_16->rate = FUNC_0(VAR_9);
 FUNC_2(&VAR_16->stream_wait_queue);
 FUNC_5(&VAR_16->stream_mutex);

 FUNC_8(&VAR_16->playback.lock);
 FUNC_8(&VAR_16->capture.lock);

 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
  FUNC_12(&VAR_16->in_urbs[VAR_13], VAR_12, 1, VAR_2,
    VAR_10);
  FUNC_12(&VAR_16->out_urbs[VAR_13], VAR_12, 0, VAR_3,
    VAR_11);

  VAR_16->in_urbs[VAR_13].peer = &VAR_16->out_urbs[VAR_13];
  VAR_16->out_urbs[VAR_13].peer = &VAR_16->in_urbs[VAR_13];
 }

 VAR_14 = FUNC_6(VAR_12->card, "DMX6FireUSB", 0, 1, 1, &VAR_15);
 if (VAR_14 < 0) {
  FUNC_10(VAR_16);
  FUNC_3(VAR_16);
  FUNC_1(&VAR_12->dev->dev, "cannot create pcm instance.\n");
  return VAR_14;
 }

 VAR_15->private_data = VAR_16;
 FUNC_9(VAR_15->name, "DMX 6Fire USB");
 FUNC_7(VAR_15, VAR_6, &VAR_8);
 FUNC_7(VAR_15, VAR_5, &VAR_8);

 if (VAR_14) {
  FUNC_10(VAR_16);
  FUNC_3(VAR_16);
  FUNC_1(&VAR_12->dev->dev,
   "error preallocating pcm buffers.\n");
  return VAR_14;
 }
 VAR_16->instance = VAR_15;

 VAR_12->pcm = VAR_16;
 return 0;
}
