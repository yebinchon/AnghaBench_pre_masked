
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct snd_azf3328_codec_data {int name; scalar_t__ substream; int lock; } ;
struct snd_azf3328 {TYPE_1__* card; } ;
typedef enum snd_azf3328_codec_type { ____Placeholder_snd_azf3328_codec_type } snd_azf3328_codec_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct snd_azf3328_codec_data const*,int ) ;
 int FUNC_3 (struct snd_azf3328_codec_data const*,int ) ;
 int FUNC_4 (struct snd_azf3328_codec_data const*,int ,int) ;
 int FUNC_5 (struct snd_azf3328*,int) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static inline void
FUNC_9(struct snd_azf3328 *VAR_5,
     const struct snd_azf3328_codec_data *VAR_6,
     u8 VAR_7
)
{
 u8 VAR_8;
 enum snd_azf3328_codec_type VAR_9;
 const struct snd_azf3328_codec_data *VAR_10 = VAR_6;

 for (VAR_9 = VAR_1;
   VAR_9 <= VAR_0;
    ++VAR_9, ++VAR_10) {


  if (!(VAR_7 & (1 << VAR_9)))
   continue;

  FUNC_7(VAR_10->lock);
  VAR_8 = FUNC_2(VAR_10, VAR_3);

  FUNC_4(VAR_10, VAR_3, VAR_8);
  FUNC_8(VAR_10->lock);

  if (VAR_10->substream) {
   FUNC_6(VAR_10->substream);
   FUNC_0(VAR_5->card->dev, "%s period done (#%x), @ %x\n",
    VAR_10->name,
    VAR_8,
    FUNC_3(
     VAR_10, VAR_2));
  } else
   FUNC_1(VAR_5->card->dev, "irq handler problem!\n");
  if (VAR_8 & VAR_4)
   FUNC_5(VAR_5, VAR_8);
 }
}
