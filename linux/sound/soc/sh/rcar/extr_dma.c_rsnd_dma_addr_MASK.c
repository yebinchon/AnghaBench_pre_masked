
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (struct rsnd_dai_stream*,struct rsnd_mod*,int,int) ;
 struct rsnd_priv* FUNC_1 (struct rsnd_dai_stream*) ;
 scalar_t__ FUNC_2 (struct rsnd_priv*) ;

__attribute__((used)) static dma_addr_t FUNC_3(struct rsnd_dai_stream *VAR_0,
    struct rsnd_mod *VAR_1,
    int VAR_2, int VAR_3)
{
 struct rsnd_priv *VAR_4 = FUNC_1(VAR_0);




 if (FUNC_2(VAR_4))
  return 0;

 if (!VAR_1)
  return 0;

 return FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3);
}
