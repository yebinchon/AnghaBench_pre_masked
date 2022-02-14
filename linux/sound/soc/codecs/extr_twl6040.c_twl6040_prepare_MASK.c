
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl6040_data {int sysclk; int clk_in; int pll; } ;
struct twl6040 {int dummy; } ;
struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct snd_pcm_substream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 struct twl6040_data* FUNC_1 (struct snd_soc_component*) ;
 struct twl6040* FUNC_2 (struct snd_soc_component*) ;
 int FUNC_3 (struct twl6040*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct snd_pcm_substream *VAR_2,
   struct snd_soc_dai *VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_3->component;
 struct twl6040 *VAR_5 = FUNC_2(VAR_4);
 struct twl6040_data *VAR_6 = FUNC_1(VAR_4);
 int VAR_7;

 if (!VAR_6->sysclk) {
  FUNC_0(VAR_4->dev,
   "no mclk configured, call set_sysclk() on init\n");
  return -VAR_0;
 }

 VAR_7 = FUNC_3(VAR_5, VAR_6->pll, VAR_6->clk_in, VAR_6->sysclk);
 if (VAR_7) {
  FUNC_0(VAR_4->dev, "Can not set PLL (%d)\n", VAR_7);
  return -VAR_1;
 }

 return 0;
}
