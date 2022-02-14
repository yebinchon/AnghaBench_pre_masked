
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct snd_pcm_substream {scalar_t__ stream; struct snd_pcm_runtime* runtime; struct aaci* private_data; } ;
struct TYPE_8__ {int channels_max; int fifo_size; int rates; } ;
struct snd_pcm_runtime {TYPE_4__ hw; struct aaci_runtime* private_data; } ;
struct aaci_runtime {TYPE_2__* pcm; struct snd_pcm_substream* substream; } ;
struct aaci {int fifo_depth; int irq_lock; int users; TYPE_3__* dev; struct aaci_runtime capture; struct aaci_runtime playback; } ;
struct TYPE_7__ {int * irq; } ;
struct TYPE_6__ {TYPE_1__* r; int rates; } ;
struct TYPE_5__ {scalar_t__ slots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int ,struct aaci*) ;
 int FUNC_3 (struct snd_pcm_runtime*) ;
 int FUNC_4 (struct snd_pcm_runtime*,int ,int ,int ,struct aaci*,int ,int) ;
 int FUNC_5 (struct snd_pcm_runtime*) ;

__attribute__((used)) static int FUNC_6(struct snd_pcm_substream *VAR_7)
{
 struct snd_pcm_runtime *VAR_8 = VAR_7->runtime;
 struct aaci *VAR_9 = VAR_7->private_data;
 struct aaci_runtime *VAR_10;
 int VAR_11 = 0;

 if (VAR_7->stream == VAR_3) {
  VAR_10 = &VAR_9->playback;
 } else {
  VAR_10 = &VAR_9->capture;
 }

 VAR_10->substream = VAR_7;
 VAR_8->private_data = VAR_10;
 VAR_8->hw = VAR_4;
 VAR_8->hw.rates = VAR_10->pcm->rates;
 FUNC_5(VAR_8);

 if (VAR_7->stream == VAR_3) {
  VAR_8->hw.channels_max = 6;


  VAR_11 = FUNC_4(VAR_7->runtime, 0,
       VAR_2,
       VAR_6, VAR_9,
       VAR_2, -1);
  if (VAR_11)
   return VAR_11;

  if (VAR_10->pcm->r[1].slots)
   FUNC_3(VAR_8);
 }






 VAR_8->hw.fifo_size = VAR_9->fifo_depth * 2;

 FUNC_0(&VAR_9->irq_lock);
 if (!VAR_9->users++) {
  VAR_11 = FUNC_2(VAR_9->dev->irq[0], VAR_5,
      VAR_1, VAR_0, VAR_9);
  if (VAR_11 != 0)
   VAR_9->users--;
 }
 FUNC_1(&VAR_9->irq_lock);

 return VAR_11;
}
