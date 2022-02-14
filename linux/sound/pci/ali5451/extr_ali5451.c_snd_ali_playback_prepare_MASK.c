
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int dma_addr; int period_size; int buffer_size; int rate; struct snd_ali_voice* private_data; } ;
struct snd_ali_voice {scalar_t__ number; int count; int eso; struct snd_ali_voice* extra; } ;
struct snd_ali {int reg_lock; TYPE_1__* card; scalar_t__ spdif_support; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 unsigned int FUNC_3 (struct snd_pcm_substream*) ;
 unsigned int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct snd_ali*,scalar_t__) ;
 int FUNC_6 (struct snd_ali*,int ) ;
 int FUNC_7 (struct snd_ali*,scalar_t__,unsigned int,int ,unsigned int,unsigned int,int ,unsigned int,int,int,unsigned int,unsigned int) ;
 struct snd_ali* FUNC_8 (struct snd_pcm_substream*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct snd_pcm_substream *VAR_5)
{
 struct snd_ali *VAR_6 = FUNC_8(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct snd_ali_voice *VAR_8 = VAR_7->private_data;
 struct snd_ali_voice *VAR_9 = VAR_8->extra;

 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 unsigned int VAR_17;

 FUNC_1(VAR_6->card->dev, "playback_prepare ...\n");

 FUNC_9(&VAR_6->reg_lock);


 VAR_11 = FUNC_4(VAR_7->rate, 0);

 if (VAR_8->number == VAR_2 ||
     VAR_8->number == VAR_1)
  FUNC_5(VAR_6, VAR_8->number);
 else if (VAR_6->spdif_support &&
   (FUNC_2(FUNC_0(VAR_6, VAR_0)) &
    VAR_4)
   && VAR_8->number == VAR_3) {
  FUNC_6(VAR_6, VAR_7->rate);
  VAR_11 = 0x1000;
 }


 VAR_10 = VAR_7->dma_addr;


 VAR_8->count = VAR_7->period_size;


 VAR_8->eso = VAR_7->buffer_size;

 FUNC_1(VAR_6->card->dev, "playback_prepare: eso=%xh count=%xh\n",
         VAR_8->eso, VAR_8->count);


 VAR_12 = VAR_8->eso -1;

 VAR_13 = FUNC_3(VAR_5);

 VAR_14 = 1;
 VAR_15 = 0;
 VAR_16 = 0;
 VAR_17 = 0;
 FUNC_1(VAR_6->card->dev, "playback_prepare:\n");
 FUNC_1(VAR_6->card->dev,
  "ch=%d, Rate=%d Delta=%xh,GVSEL=%xh,PAN=%xh,CTRL=%xh\n",
         VAR_8->number,VAR_7->rate,VAR_11,VAR_14,VAR_15,VAR_13);
 FUNC_7(VAR_6,
     VAR_8->number,
     VAR_10,
     0,
     VAR_12,
     VAR_11,
     0,
     VAR_14,
     VAR_15,
     VAR_16,
     VAR_13,
     VAR_17);
 if (VAR_9) {
  VAR_9->count = VAR_8->count;
  VAR_9->eso = VAR_8->count << 1;
  VAR_12 = VAR_9->eso - 1;
  FUNC_7(VAR_6,
      VAR_9->number,
      VAR_10,
      0,
      VAR_12,
      VAR_11,
      0,
      VAR_14,
      0x7f,
      0x3ff,
      VAR_13,
      VAR_17);
 }
 FUNC_10(&VAR_6->reg_lock);
 return 0;
}
