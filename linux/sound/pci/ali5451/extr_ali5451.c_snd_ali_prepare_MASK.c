
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {unsigned int rate; int buffer_size; unsigned int dma_addr; int period_size; struct snd_ali_voice* private_data; } ;
struct snd_ali_voice {scalar_t__ number; int eso; int count; int mode; } ;
struct snd_ali {scalar_t__ revision; int reg_lock; TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int ) ;
 unsigned int FUNC_5 (struct snd_pcm_substream*) ;
 int FUNC_6 (unsigned int,int ) ;
 int FUNC_7 (struct snd_ali*,scalar_t__) ;
 unsigned int FUNC_8 (struct snd_ali*) ;
 int FUNC_9 (struct snd_ali*,scalar_t__,unsigned int,int ,unsigned int,unsigned int,int ,unsigned int,unsigned int,unsigned int,unsigned int,unsigned int) ;
 struct snd_ali* FUNC_10 (struct snd_pcm_substream*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct snd_pcm_substream *VAR_5)
{
 struct snd_ali *VAR_6 = FUNC_10(VAR_5);
 struct snd_pcm_runtime *VAR_7 = VAR_5->runtime;
 struct snd_ali_voice *VAR_8 = VAR_7->private_data;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;
 unsigned int VAR_12;
 unsigned int VAR_13;
 unsigned int VAR_14;
 unsigned int VAR_15;
 unsigned int VAR_16;
 u8 VAR_17;

 FUNC_11(&VAR_6->reg_lock);

 FUNC_1(VAR_6->card->dev, "ali_prepare...\n");

 FUNC_7(VAR_6,VAR_8->number);

 VAR_10 = (VAR_8->number == VAR_1 ||
   VAR_8->number == VAR_2) ?
  0x1000 : FUNC_6(VAR_7->rate, VAR_8->mode);


 if (VAR_8->number == VAR_4) {

  unsigned int VAR_18;

  FUNC_12(&VAR_6->reg_lock);
  if (VAR_6->revision != VAR_0)
   return -1;

  VAR_18 = FUNC_8(VAR_6);
  if (VAR_18 == 0) {
   FUNC_2(VAR_6->card->dev,
     "ali_capture_prepare: spdif rate detect err!\n");
   VAR_18 = 48000;
  }
  FUNC_11(&VAR_6->reg_lock);
  VAR_17 = FUNC_3(FUNC_0(VAR_6,VAR_3));
  if (VAR_17 & 0x10) {
   FUNC_4(VAR_17,FUNC_0(VAR_6,VAR_3));
   FUNC_2(VAR_6->card->dev,
     "clear SPDIF parity error flag.\n");
  }

  if (VAR_18 != 48000)
   VAR_10 = ((VAR_18 << 12) / VAR_7->rate) & 0x00ffff;
 }


 VAR_8->eso = VAR_7->buffer_size;


 VAR_8->count = VAR_7->period_size;


 VAR_9 = VAR_7->dma_addr;


 VAR_11 = VAR_8->eso - 1;
 VAR_12 = FUNC_5(VAR_5);
 VAR_13 = 0;
 VAR_14 = 0x00;
 VAR_15 = 0x00;
 VAR_16 = 0;

 FUNC_9( VAR_6,
         VAR_8->number,
         VAR_9,
         0,
         VAR_11,
         VAR_10,
         0,
         VAR_13,
         VAR_14,
         VAR_15,
         VAR_12,
         VAR_16);

 FUNC_12(&VAR_6->reg_lock);

 return 0;
}
