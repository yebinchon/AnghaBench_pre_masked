
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct nau8810 {int clk_id; unsigned int sysclk; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned int,char*) ;
 struct nau8810* FUNC_1 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_2(struct snd_soc_dai *VAR_1,
     int VAR_2, unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct nau8810 *VAR_6 = FUNC_1(VAR_5);

 VAR_6->clk_id = VAR_2;
 VAR_6->sysclk = VAR_3;
 FUNC_0(VAR_6->dev, "master sysclk %dHz, source %s\n",
  VAR_3, VAR_2 == VAR_0 ? "PLL" : "MCLK");

 return 0;
}
