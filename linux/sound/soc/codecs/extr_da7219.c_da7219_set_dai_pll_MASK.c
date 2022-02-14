
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct da7219_priv {int pll_lock; } ;


 int FUNC_0 (struct snd_soc_component*,int,unsigned int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct da7219_priv* FUNC_3 (struct snd_soc_component*) ;

__attribute__((used)) static int FUNC_4(struct snd_soc_dai *VAR_0, int VAR_1,
         int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 struct snd_soc_component *VAR_5 = VAR_0->component;
 struct da7219_priv *VAR_6 = FUNC_3(VAR_5);
 int VAR_7;

 FUNC_1(&VAR_6->pll_lock);
 VAR_7 = FUNC_0(VAR_5, VAR_2, VAR_4);
 FUNC_2(&VAR_6->pll_lock);

 return VAR_7;
}
