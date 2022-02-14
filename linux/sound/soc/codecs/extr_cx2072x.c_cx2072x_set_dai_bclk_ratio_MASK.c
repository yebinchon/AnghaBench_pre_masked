
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct cx2072x_priv {unsigned int bclk_ratio; } ;


 struct cx2072x_priv* FUNC_0 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_1(struct snd_soc_dai *VAR_0,
          unsigned int VAR_1)
{
 struct snd_soc_component *VAR_2 = VAR_0->component;
 struct cx2072x_priv *VAR_3 = FUNC_0(VAR_2);

 VAR_3->bclk_ratio = VAR_1;
 return 0;
}
