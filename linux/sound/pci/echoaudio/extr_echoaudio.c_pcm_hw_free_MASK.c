
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_2__* runtime; } ;
struct echoaudio {int lock; int ** substream; TYPE_1__* card; } ;
struct audiopipe {size_t index; } ;
struct TYPE_4__ {scalar_t__ private_data; } ;
struct TYPE_3__ {int dev; } ;


 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct echoaudio*,struct audiopipe*) ;
 int FUNC_2 (struct snd_pcm_substream*) ;
 struct echoaudio* FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_0)
{
 struct echoaudio *VAR_1;
 struct audiopipe *VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 VAR_2 = (struct audiopipe *) VAR_0->runtime->private_data;

 FUNC_4(&VAR_1->lock);
 if (VAR_2->index >= 0) {
  FUNC_0(VAR_1->card->dev, "pcm_hw_free(%d)\n", VAR_2->index);
  FUNC_1(VAR_1, VAR_2);
  VAR_1->substream[VAR_2->index] = ((void*)0);
  VAR_2->index = -1;
 }
 FUNC_5(&VAR_1->lock);

 FUNC_2(VAR_0);
 return 0;
}
