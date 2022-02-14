
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct snd_pcm_substream {int dummy; } ;
struct snd_pcm_hw_params {int dummy; } ;
struct es7241_data {unsigned int mclk; scalar_t__ is_slave; TYPE_1__* chip; } ;
struct es7241_clock_mode {unsigned int rate_min; unsigned int rate_max; } ;
struct TYPE_2__ {int mode_num; struct es7241_clock_mode* modes; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int) ;
 int FUNC_1 (struct es7241_data*,struct es7241_clock_mode const*,unsigned int) ;
 int FUNC_2 (struct es7241_data*,struct es7241_clock_mode const*,unsigned int) ;
 unsigned int FUNC_3 (struct snd_pcm_hw_params*) ;
 struct es7241_data* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_1,
       struct snd_pcm_hw_params *VAR_2,
       struct snd_soc_dai *VAR_3)
{
 struct es7241_data *VAR_4 = FUNC_4(VAR_3);
 unsigned int VAR_5 = FUNC_3(VAR_2);
 unsigned int VAR_6 = VAR_4->mclk / VAR_5;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_4->chip->mode_num; VAR_7++) {
  const struct es7241_clock_mode *VAR_8 = &VAR_4->chip->modes[VAR_7];

  if (VAR_5 < VAR_8->rate_min || VAR_5 >= VAR_8->rate_max)
   continue;

  if (VAR_4->is_slave)
   return FUNC_2(VAR_4, VAR_8, VAR_6);
  else
   return FUNC_1(VAR_4, VAR_8, VAR_6);
 }


 FUNC_0(VAR_3->dev, "unsupported rate: %u\n", VAR_5);
 return -VAR_0;
}
