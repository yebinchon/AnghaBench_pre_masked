
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dma; } ;


 int FUNC_0 (struct rsnd_dai_stream*,struct rsnd_mod*,int *) ;
 int FUNC_1 (struct rsnd_mod*,struct rsnd_dai_stream*,struct rsnd_priv*) ;
 scalar_t__ FUNC_2 (struct rsnd_mod*,struct rsnd_dai_stream*) ;

__attribute__((used)) static int FUNC_3(struct rsnd_mod *VAR_0,
         struct rsnd_dai_stream *VAR_1,
         struct rsnd_priv *VAR_2)
{
 int VAR_3;





 if (FUNC_2(VAR_0, VAR_1))
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;


 VAR_3 = FUNC_0(VAR_1, VAR_0, &VAR_1->dma);

 return VAR_3;
}
