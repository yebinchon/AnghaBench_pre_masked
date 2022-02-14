
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct snd_soc_pcm_runtime {int card; } ;
struct rk_drvdata {int gpio_hp_det; } ;
struct TYPE_3__ {int gpio; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__ VAR_3 ;
 struct rk_drvdata* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ,int *,int ,int ) ;
 int FUNC_4 (int *,int,TYPE_1__*) ;

__attribute__((used)) static int FUNC_5(struct snd_soc_pcm_runtime *VAR_4)
{
 struct rk_drvdata *VAR_5 = FUNC_2(VAR_4->card);


 if (FUNC_1(VAR_5->gpio_hp_det)) {
  FUNC_3(VAR_4->card, "Headphone Jack",
          VAR_0, &VAR_1,
          VAR_2,
          FUNC_0(VAR_2));
  VAR_3.gpio = VAR_5->gpio_hp_det;
  FUNC_4(&VAR_1, 1, &VAR_3);
 }

 return 0;
}
