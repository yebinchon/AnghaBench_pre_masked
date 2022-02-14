
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct snd_pcm_substream {struct snd_pcm_runtime* runtime; } ;
struct snd_pcm_runtime {int dma_addr; int channels; int format; int rate; struct snd_azf3328_codec_data* private_data; } ;
struct snd_azf3328_codec_data {scalar_t__ type; int name; int lock; int running; } ;
struct snd_azf3328 {TYPE_1__* card; } ;
struct TYPE_2__ {int dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;






 int VAR_9 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct snd_azf3328_codec_data*,int ) ;
 int FUNC_3 (struct snd_azf3328_codec_data*,int ,int) ;
 int FUNC_4 (struct snd_azf3328*,struct snd_azf3328_codec_data*,int ,int ,int ) ;
 int FUNC_5 (struct snd_azf3328_codec_data*,int ,int ,int ) ;
 int FUNC_6 (struct snd_azf3328*,scalar_t__,int) ;
 int FUNC_7 (struct snd_azf3328*,int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct snd_pcm_substream*) ;
 int FUNC_10 (struct snd_pcm_substream*) ;
 struct snd_azf3328* FUNC_11 (struct snd_pcm_substream*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;

__attribute__((used)) static int
FUNC_14(struct snd_pcm_substream *VAR_10, int VAR_11)
{
 struct snd_azf3328 *VAR_12 = FUNC_11(VAR_10);
 struct snd_pcm_runtime *VAR_13 = VAR_10->runtime;
 struct snd_azf3328_codec_data *VAR_14 = VAR_13->private_data;
 int VAR_15 = 0;
 u16 VAR_16;
 bool VAR_17 = 0;
 bool VAR_18 = (VAR_0 == VAR_14->type);

 switch (VAR_11) {
 case 130:
  FUNC_1(VAR_12->card->dev, "START PCM %s\n", VAR_14->name);

  if (VAR_18) {

   VAR_17 =
    FUNC_7(
      VAR_12, 1
    );
  }

  FUNC_5(VAR_14,
   VAR_13->rate,
   FUNC_8(VAR_13->format),
   VAR_13->channels);

  FUNC_12(VAR_14->lock);

  VAR_16 = FUNC_2(VAR_14, VAR_7);


  VAR_16 &= ~VAR_2;
  FUNC_3(VAR_14, VAR_7, VAR_16);


  FUNC_3(VAR_14, VAR_8, 0xffff);
  FUNC_13(VAR_14->lock);

  FUNC_4(VAR_12, VAR_14, VAR_13->dma_addr,
   FUNC_10(VAR_10),
   FUNC_9(VAR_10)
  );

  FUNC_12(VAR_14->lock);
  FUNC_3(VAR_14, VAR_7,
   0x0000);
  FUNC_3(VAR_14, VAR_7,
   VAR_3);
  FUNC_3(VAR_14, VAR_7,
   VAR_3 |
   VAR_4);
  FUNC_3(VAR_14, VAR_7,
   VAR_2 |
   VAR_9 |
   VAR_1 |
   VAR_5);

  FUNC_13(VAR_14->lock);
  FUNC_6(VAR_12, VAR_14->type, 1);

  if (VAR_18) {

   if (!VAR_17)
    FUNC_7(
      VAR_12, 0
    );
  }

  FUNC_1(VAR_12->card->dev, "PCM STARTED %s\n", VAR_14->name);
  break;
 case 131:
  FUNC_1(VAR_12->card->dev, "PCM RESUME %s\n", VAR_14->name);

  FUNC_12(VAR_14->lock);
  if (VAR_14->running)
   FUNC_3(VAR_14, VAR_7,
    FUNC_2(
     VAR_14, VAR_7
    ) | VAR_2
   );
  FUNC_13(VAR_14->lock);
  break;
 case 129:
  FUNC_1(VAR_12->card->dev, "PCM STOP %s\n", VAR_14->name);

  if (VAR_18) {

   VAR_17 =
    FUNC_7(
      VAR_12, 1
    );
  }

  FUNC_12(VAR_14->lock);

  VAR_16 = FUNC_2(VAR_14, VAR_7);


  VAR_16 &= ~VAR_2;
  FUNC_3(VAR_14, VAR_7, VAR_16);



  VAR_16 |= VAR_3;
  FUNC_3(VAR_14, VAR_7, VAR_16);

  VAR_16 &= ~VAR_3;
  FUNC_3(VAR_14, VAR_7, VAR_16);
  FUNC_13(VAR_14->lock);
  FUNC_6(VAR_12, VAR_14->type, 0);

  if (VAR_18) {

   if (!VAR_17)
    FUNC_7(
      VAR_12, 0
    );
  }

  FUNC_1(VAR_12->card->dev, "PCM STOPPED %s\n", VAR_14->name);
  break;
 case 128:
  FUNC_1(VAR_12->card->dev, "PCM SUSPEND %s\n", VAR_14->name);

  FUNC_3(VAR_14, VAR_7,
   FUNC_2(
    VAR_14, VAR_7
   ) & ~VAR_2
  );
  break;
        case 133:
  FUNC_0(1, "FIXME: SNDRV_PCM_TRIGGER_PAUSE_PUSH NIY!\n");
                break;
        case 132:
  FUNC_0(1, "FIXME: SNDRV_PCM_TRIGGER_PAUSE_RELEASE NIY!\n");
                break;
        default:
  FUNC_0(1, "FIXME: unknown trigger mode!\n");
                return -VAR_6;
 }

 return VAR_15;
}
