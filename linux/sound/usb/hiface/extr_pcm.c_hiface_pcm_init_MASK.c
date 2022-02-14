
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct snd_pcm {int name; int private_free; struct pcm_runtime* private_data; } ;
struct TYPE_4__ {int lock; } ;
struct pcm_runtime {int extra_freq; TYPE_3__* out_urbs; struct snd_pcm* instance; TYPE_1__ playback; int stream_mutex; int stream_wait_queue; int stream_state; struct hiface_chip* chip; } ;
struct hiface_chip {struct pcm_runtime* pcm; TYPE_2__* dev; int card; } ;
struct TYPE_6__ {struct pcm_runtime* buffer; } ;
struct TYPE_5__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int VAR_6 ;
 int FUNC_1 (TYPE_3__*,struct hiface_chip*,int ,int ) ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct pcm_runtime*) ;
 struct pcm_runtime* FUNC_4 (int,int ) ;
 int FUNC_5 (int *) ;
 int VAR_8 ;
 int FUNC_6 (int ,char*,int ,int,int ,struct snd_pcm**) ;
 int FUNC_7 (struct snd_pcm*,int ,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ,char*,int) ;

int FUNC_10(struct hiface_chip *VAR_9, u8 VAR_10)
{
 int VAR_11;
 int VAR_12;
 struct snd_pcm *VAR_13;
 struct pcm_runtime *VAR_14;

 VAR_14 = FUNC_4(sizeof(*VAR_14), VAR_1);
 if (!VAR_14)
  return -VAR_0;

 VAR_14->chip = VAR_9;
 VAR_14->stream_state = VAR_5;
 if (VAR_10)
  VAR_14->extra_freq = 1;

 FUNC_2(&VAR_14->stream_wait_queue);
 FUNC_5(&VAR_14->stream_mutex);
 FUNC_8(&VAR_14->playback.lock);

 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++) {
  VAR_12 = FUNC_1(&VAR_14->out_urbs[VAR_11], VAR_9, VAR_2,
        VAR_7);
  if (VAR_12 < 0)
   goto error;
 }

 VAR_12 = FUNC_6(VAR_9->card, "USB-SPDIF Audio", 0, 1, 0, &VAR_13);
 if (VAR_12 < 0) {
  FUNC_0(&VAR_9->dev->dev, "Cannot create pcm instance\n");
  goto error;
 }

 VAR_13->private_data = VAR_14;
 VAR_13->private_free = VAR_6;

 FUNC_9(VAR_13->name, "USB-SPDIF Audio", sizeof(VAR_13->name));
 FUNC_7(VAR_13, VAR_4, &VAR_8);

 VAR_14->instance = VAR_13;

 VAR_9->pcm = VAR_14;
 return 0;

error:
 for (VAR_11 = 0; VAR_11 < VAR_3; VAR_11++)
  FUNC_3(VAR_14->out_urbs[VAR_11].buffer);
 FUNC_3(VAR_14);
 return VAR_12;
}
