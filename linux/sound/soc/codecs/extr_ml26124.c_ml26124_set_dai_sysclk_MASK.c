
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct ml26124_priv {int clk_in; unsigned int mclk; } ;


 int VAR_0 ;


 struct ml26124_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_1,
  int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct ml26124_priv *VAR_6 = FUNC_0(VAR_5);

 switch (VAR_2) {
 case 128:
  VAR_6->clk_in = 128;
  break;
 case 129:
  VAR_6->clk_in = 129;
  break;
 default:
  return -VAR_0;
 }

 VAR_6->mclk = VAR_3;

 return 0;
}
