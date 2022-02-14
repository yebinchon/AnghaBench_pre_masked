
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {struct snd_soc_component* component; } ;
struct snd_soc_component {int dummy; } ;
struct pcm512x_priv {int pll_out; } ;


 int FUNC_0 (struct pcm512x_priv*,int) ;
 unsigned long FUNC_1 (int ,unsigned long) ;
 struct pcm512x_priv* FUNC_2 (struct snd_soc_component*) ;

__attribute__((used)) static unsigned long FUNC_3(struct snd_soc_dai *VAR_0,
         unsigned long VAR_1,
         unsigned long VAR_2)
{
 struct snd_soc_component *VAR_3 = VAR_0->component;
 struct pcm512x_priv *VAR_4 = FUNC_2(VAR_3);
 unsigned long VAR_5;

 if (!VAR_4->pll_out)
  return 0;

 if (VAR_2 % VAR_1)
  return 0;


 for (VAR_5 = FUNC_1(FUNC_0(VAR_4, 6144000), VAR_1);
      VAR_5;
      VAR_5 -= VAR_1) {

  if (VAR_2 / VAR_5 > 128)
   return 0;

  if (!(VAR_2 % VAR_5))
   return VAR_5;

  VAR_5 -= VAR_1;
 }

 return 0;
}
