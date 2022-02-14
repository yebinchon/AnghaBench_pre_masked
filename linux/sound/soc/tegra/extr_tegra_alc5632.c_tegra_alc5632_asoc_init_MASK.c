
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tegra_alc5632 {int gpio_hp_det; } ;
struct snd_soc_pcm_runtime {TYPE_3__* card; } ;
struct TYPE_6__ {int dapm; } ;
struct TYPE_5__ {int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 struct tegra_alc5632* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,char*,int ,int *,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int,TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct snd_soc_pcm_runtime *VAR_4)
{
 int VAR_5;
 struct tegra_alc5632 *VAR_6 = FUNC_2(VAR_4->card);

 VAR_5 = FUNC_3(VAR_4->card, "Headset Jack",
        VAR_0,
        &VAR_2,
        VAR_3,
        FUNC_0(VAR_3));
 if (VAR_5)
  return VAR_5;

 if (FUNC_1(VAR_6->gpio_hp_det)) {
  VAR_1.gpio = VAR_6->gpio_hp_det;
  FUNC_5(&VAR_2,
      1,
      &VAR_1);
 }

 FUNC_4(&VAR_4->card->dapm, "MICBIAS1");

 return 0;
}
