
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct tegra_max98090 {int gpio_mic_det; int gpio_hp_det; } ;
struct snd_soc_pcm_runtime {int card; } ;
struct TYPE_4__ {int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct tegra_max98090* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int *,int ,int ) ;
 int FUNC_4 (int *,int,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_8)
{
 struct tegra_max98090 *VAR_9 = FUNC_2(VAR_8->card);

 if (FUNC_1(VAR_9->gpio_hp_det)) {
  FUNC_3(VAR_8->card, "Headphones",
          VAR_0,
          &VAR_2,
          VAR_4,
          FUNC_0(VAR_4));

  VAR_3.gpio = VAR_9->gpio_hp_det;
  FUNC_4(&VAR_2,
     1,
     &VAR_3);
 }

 if (FUNC_1(VAR_9->gpio_mic_det)) {
  FUNC_3(VAR_8->card, "Mic Jack",
          VAR_1,
          &VAR_5,
          VAR_7,
          FUNC_0(VAR_7));

  VAR_6.gpio = VAR_9->gpio_mic_det;
  FUNC_4(&VAR_5,
           1,
           &VAR_6);
 }

 return 0;
}
