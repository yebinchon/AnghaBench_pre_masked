
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_component {int dev; } ;
struct rt5616_priv {struct snd_soc_component* component; int mclk; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 struct rt5616_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_3(struct snd_soc_component *VAR_1)
{
 struct rt5616_priv *VAR_2 = FUNC_2(VAR_1);


 VAR_2->mclk = FUNC_1(VAR_1->dev, "mclk");
 if (FUNC_0(VAR_2->mclk) == -VAR_0)
  return -VAR_0;

 VAR_2->component = VAR_1;

 return 0;
}
