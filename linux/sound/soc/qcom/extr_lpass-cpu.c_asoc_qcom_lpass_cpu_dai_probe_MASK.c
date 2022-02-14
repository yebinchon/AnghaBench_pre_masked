
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; TYPE_1__* driver; } ;
struct lpass_data {int variant; int lpaif_map; } ;
struct TYPE_2__ {int id; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,int ,int ) ;
 struct lpass_data* FUNC_3 (struct snd_soc_dai*) ;

int FUNC_4(struct snd_soc_dai *VAR_0)
{
 struct lpass_data *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;


 VAR_2 = FUNC_2(VAR_1->lpaif_map,
   FUNC_0(VAR_1->variant, VAR_0->driver->id), 0);
 if (VAR_2)
  FUNC_1(VAR_0->dev, "error writing to i2sctl reg: %d\n", VAR_2);

 return VAR_2;
}
