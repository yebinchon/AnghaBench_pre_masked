
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct clk {int dummy; } ;


 struct clk* FUNC_0 (struct clk*) ;
 int FUNC_1 (struct clk*,unsigned int) ;
 struct clk* FUNC_2 (int ,char*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_0,
      int VAR_1, unsigned int VAR_2, int VAR_3)
{
 struct snd_soc_component *VAR_4 = VAR_0->component;
 struct clk *VAR_5;
 struct clk *VAR_6;

 VAR_6 = FUNC_2(VAR_4->dev, "pll");
 VAR_5 = FUNC_0(VAR_6);

 return FUNC_1(VAR_5, VAR_2);
}
