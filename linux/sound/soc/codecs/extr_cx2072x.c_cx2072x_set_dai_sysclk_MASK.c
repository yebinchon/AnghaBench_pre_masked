
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dev; } ;
struct cx2072x_priv {unsigned int mclk_rate; int mclk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,unsigned int) ;
 int FUNC_1 (int ,char*) ;
 struct cx2072x_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_dai *VAR_1, int VAR_2,
      unsigned int VAR_3, int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_1->component;
 struct cx2072x_priv *VAR_6 = FUNC_2(VAR_5);

 if (FUNC_0(VAR_6->mclk, VAR_3)) {
  FUNC_1(VAR_5->dev, "set clk rate failed\n");
  return -VAR_0;
 }

 VAR_6->mclk_rate = VAR_3;
 return 0;
}
