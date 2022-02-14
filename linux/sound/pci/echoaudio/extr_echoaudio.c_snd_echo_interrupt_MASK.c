
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snd_pcm_substream {TYPE_1__* runtime; } ;
struct echoaudio {int* last_period; TYPE_2__* card; int midi_buffer; scalar_t__ midi_in; int lock; struct snd_pcm_substream** substream; } ;
struct audiopipe {scalar_t__ state; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int period_size; scalar_t__ private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct snd_pcm_substream*) ;
 int FUNC_2 (struct echoaudio*) ;
 int FUNC_3 (struct snd_pcm_substream*) ;
 int FUNC_4 (scalar_t__,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_4, void *VAR_5)
{
 struct echoaudio *VAR_6 = VAR_5;
 struct snd_pcm_substream *VAR_7;
 int VAR_8, VAR_9, VAR_10;

 FUNC_5(&VAR_6->lock);
 VAR_10 = FUNC_2(VAR_6);
 if (VAR_10 < 0) {
  FUNC_6(&VAR_6->lock);
  return VAR_2;
 }


 for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++) {
  VAR_7 = VAR_6->substream[VAR_9];
  if (VAR_7 && ((struct audiopipe *)VAR_7->runtime->
    private_data)->state == VAR_3) {
   VAR_8 = FUNC_1(VAR_7) /
    VAR_7->runtime->period_size;
   if (VAR_8 != VAR_6->last_period[VAR_9]) {
    VAR_6->last_period[VAR_9] = VAR_8;
    FUNC_6(&VAR_6->lock);
    FUNC_3(VAR_7);
    FUNC_5(&VAR_6->lock);
   }
  }
 }
 FUNC_6(&VAR_6->lock);







 return VAR_1;
}
