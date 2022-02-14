
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dapm_context {int dummy; } ;
struct snd_soc_component {int dummy; } ;
struct TYPE_2__ {scalar_t__ dmic2_clk_pin; int * gpio_config; } ;
struct rt5677_priv {int dsp_pri_lock; int dsp_cmd_lock; TYPE_1__ pdata; int regmap; struct snd_soc_component* component; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (struct rt5677_priv*,int,int ) ;
 int FUNC_5 (struct snd_soc_component*,int ) ;
 struct snd_soc_dapm_context* FUNC_6 (struct snd_soc_component*) ;
 struct rt5677_priv* FUNC_7 (struct snd_soc_component*) ;
 int FUNC_8 (struct snd_soc_dapm_context*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_component *VAR_10)
{
 struct snd_soc_dapm_context *VAR_11 = FUNC_6(VAR_10);
 struct rt5677_priv *VAR_12 = FUNC_7(VAR_10);
 int VAR_13;

 VAR_12->component = VAR_10;

 if (VAR_12->pdata.dmic2_clk_pin == VAR_1) {
  FUNC_8(VAR_11,
   VAR_9,
   FUNC_0(VAR_9));
 } else {
  FUNC_8(VAR_11,
   VAR_8,
   FUNC_0(VAR_8));
 }

 FUNC_5(VAR_10, VAR_7);

 FUNC_2(VAR_12->regmap, VAR_0,
   ~VAR_3, 0x0020);
 FUNC_3(VAR_12->regmap, VAR_5,
   VAR_6 | VAR_4);

 for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
  FUNC_4(VAR_12, VAR_13, VAR_12->pdata.gpio_config[VAR_13]);

 FUNC_1(&VAR_12->dsp_cmd_lock);
 FUNC_1(&VAR_12->dsp_pri_lock);

 return 0;
}
