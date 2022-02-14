
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct tegra_rt5640 {int gpio_hp_det_flags; int gpio_hp_det; } ;
struct snd_soc_pcm_runtime {int card; } ;
struct TYPE_3__ {int invert; int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 struct tegra_rt5640* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int *,int ,int ) ;
 int FUNC_4 (int *,int,TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_5)
{
 struct tegra_rt5640 *VAR_6 = FUNC_2(VAR_5->card);

 FUNC_3(VAR_5->card, "Headphones", VAR_1,
         &VAR_2, VAR_4,
         FUNC_0(VAR_4));

 if (FUNC_1(VAR_6->gpio_hp_det)) {
  VAR_3.gpio = VAR_6->gpio_hp_det;
  VAR_3.invert =
   !!(VAR_6->gpio_hp_det_flags & VAR_0);
  FUNC_4(&VAR_2,
      1,
      &VAR_3);
 }

 return 0;
}
