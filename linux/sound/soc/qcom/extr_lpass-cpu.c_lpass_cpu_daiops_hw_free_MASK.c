
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; TYPE_1__* driver; } ;
struct snd_pcm_substream {int dummy; } ;
struct lpass_data {int variant; int lpaif_map; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct lpass_data* FUNC_3 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_0,
  struct snd_soc_dai *VAR_1)
{
 struct lpass_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 VAR_3 = FUNC_2(VAR_2->lpaif_map,
      FUNC_0(VAR_2->variant, VAR_1->driver->id),
      0);
 if (VAR_3)
  FUNC_1(VAR_1->dev, "error writing to i2sctl reg: %d\n", VAR_3);

 return VAR_3;
}
