
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int type; } ;
struct rsnd_dai_stream {int dummy; } ;


 struct rsnd_mod* FUNC_0 (struct rsnd_priv*,int) ;
 int FUNC_1 (struct rsnd_mod*,struct rsnd_dai_stream*,int ) ;
 struct rsnd_priv* FUNC_2 (struct rsnd_dai_stream*) ;

int FUNC_3(struct rsnd_dai_stream *VAR_0, int VAR_1)
{
 struct rsnd_priv *VAR_2 = FUNC_2(VAR_0);
 struct rsnd_mod *VAR_3 = FUNC_0(VAR_2, VAR_1);

 return FUNC_1(VAR_3, VAR_0, VAR_3->type);
}
