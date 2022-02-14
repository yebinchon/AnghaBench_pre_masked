
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; TYPE_1__* driver; } ;
struct snd_pcm_substream {int stream; } ;
struct lpass_data {int variant; int lpaif_map; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;






 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct lpass_data* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_8,
  int VAR_9, struct snd_soc_dai *VAR_10)
{
 struct lpass_data *VAR_11 = FUNC_3(VAR_10);
 int VAR_12 = -VAR_0;
 unsigned int VAR_13, VAR_14;

 switch (VAR_9) {
 case 130:
 case 131:
 case 132:
  if (VAR_8->stream == VAR_7) {
   VAR_13 = VAR_5;
   VAR_14 = VAR_6;
  } else {
   VAR_13 = VAR_2;
   VAR_14 = VAR_3;
  }

  VAR_12 = FUNC_2(VAR_11->lpaif_map,
    FUNC_0(VAR_11->variant,
      VAR_10->driver->id),
    VAR_14, VAR_13);
  if (VAR_12)
   FUNC_1(VAR_10->dev, "error writing to i2sctl reg: %d\n",
    VAR_12);
  break;
 case 129:
 case 128:
 case 133:
  if (VAR_8->stream == VAR_7) {
   VAR_13 = VAR_4;
   VAR_14 = VAR_6;
  } else {
   VAR_13 = VAR_1;
   VAR_14 = VAR_3;
  }

  VAR_12 = FUNC_2(VAR_11->lpaif_map,
    FUNC_0(VAR_11->variant,
      VAR_10->driver->id),
    VAR_14, VAR_13);
  if (VAR_12)
   FUNC_1(VAR_10->dev, "error writing to i2sctl reg: %d\n",
    VAR_12);
  break;
 }

 return VAR_12;
}
