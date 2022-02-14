
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct es7134_data {unsigned int mclk; TYPE_1__* chip; } ;
struct es7134_clock_mode {unsigned int rate_min; unsigned int rate_max; int mclk_fs_num; unsigned int* mclk_fs; } ;
struct TYPE_2__ {int mode_num; struct es7134_clock_mode* modes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,...) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
        struct es7134_data *VAR_2,
        unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_2->mclk / VAR_3;
 int VAR_5, VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_2->chip->mode_num; VAR_5++) {
  const struct es7134_clock_mode *VAR_7 = &VAR_2->chip->modes[VAR_5];

  if (VAR_3 < VAR_7->rate_min || VAR_3 > VAR_7->rate_max)
   continue;

  for (VAR_6 = 0; VAR_6 < VAR_7->mclk_fs_num; VAR_6++) {
   if (VAR_7->mclk_fs[VAR_6] == VAR_4)
    return 0;
  }

  FUNC_0(VAR_1->dev, "unsupported mclk_fs %u for rate %u\n",
   VAR_4, VAR_3);
  return -VAR_0;
 }


 FUNC_0(VAR_1->dev, "unsupported rate: %u\n", VAR_3);
 return -VAR_0;
}
