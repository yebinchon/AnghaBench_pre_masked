
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; TYPE_1__* driver; } ;
struct snd_pcm_substream {scalar_t__ stream; } ;
struct lpass_data {int variant; int lpaif_map; } ;
struct TYPE_2__ {int id; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,unsigned int,unsigned int) ;
 struct lpass_data* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_5,
  struct snd_soc_dai *VAR_6)
{
 struct lpass_data *VAR_7 = FUNC_3(VAR_6);
 int VAR_8;
 unsigned int VAR_9, VAR_10;

 if (VAR_5->stream == VAR_4) {
  VAR_9 = VAR_2;
  VAR_10 = VAR_3;
 } else {
  VAR_9 = VAR_0;
  VAR_10 = VAR_1;
 }

 VAR_8 = FUNC_2(VAR_7->lpaif_map,
   FUNC_0(VAR_7->variant, VAR_6->driver->id),
   VAR_10, VAR_9);
 if (VAR_8)
  FUNC_1(VAR_6->dev, "error writing to i2sctl reg: %d\n", VAR_8);

 return VAR_8;
}
