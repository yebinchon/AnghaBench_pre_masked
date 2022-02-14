
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int id; } ;
struct rsnd_priv {int dummy; } ;
struct rsnd_dai {int dummy; } ;


 struct rsnd_priv* FUNC_0 (struct snd_soc_dai*) ;
 struct rsnd_dai* FUNC_1 (struct rsnd_priv*,int ) ;

__attribute__((used)) static struct rsnd_dai *FUNC_2(struct snd_soc_dai *VAR_0)
{
 struct rsnd_priv *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, VAR_0->id);
}
