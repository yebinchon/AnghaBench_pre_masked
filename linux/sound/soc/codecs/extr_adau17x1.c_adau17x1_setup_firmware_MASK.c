
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct adau {int regmap; TYPE_1__* sigmadsp; } ;
struct TYPE_2__ {unsigned int current_samplerate; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (TYPE_1__*,unsigned int) ;
 struct snd_soc_dapm_context* FUNC_3 (struct snd_soc_component*) ;
 struct adau* FUNC_4 (struct snd_soc_component*) ;
 int FUNC_5 (struct snd_soc_dapm_context*) ;
 int FUNC_6 (struct snd_soc_dapm_context*) ;

__attribute__((used)) static int FUNC_7(struct snd_soc_component *VAR_3,
 unsigned int VAR_4)
{
 int VAR_5;
 int VAR_6, VAR_7;
 struct adau *VAR_8 = FUNC_4(VAR_3);
 struct snd_soc_dapm_context *VAR_9 = FUNC_3(VAR_3);







 if (VAR_8->sigmadsp->current_samplerate == VAR_4)
  return 0;

 FUNC_5(VAR_9);

 VAR_5 = FUNC_0(VAR_8->regmap, VAR_2, &VAR_6);
 if (VAR_5)
  goto err;

 VAR_5 = FUNC_0(VAR_8->regmap, VAR_1, &VAR_7);
 if (VAR_5)
  goto err;

 FUNC_1(VAR_8->regmap, VAR_0, 1);
 FUNC_1(VAR_8->regmap, VAR_2, 0xf);
 FUNC_1(VAR_8->regmap, VAR_1, 0);

 VAR_5 = FUNC_2(VAR_8->sigmadsp, VAR_4);
 if (VAR_5) {
  FUNC_1(VAR_8->regmap, VAR_0, 0);
  goto err;
 }
 FUNC_1(VAR_8->regmap, VAR_2, VAR_6);
 FUNC_1(VAR_8->regmap, VAR_1, VAR_7);

err:
 FUNC_6(VAR_9);

 return VAR_5;
}
