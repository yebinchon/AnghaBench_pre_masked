
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dmaen {scalar_t__ chan; } ;
struct rsnd_dma {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 struct rsnd_dmaen* FUNC_1 (struct rsnd_dma*) ;
 struct rsnd_dma* FUNC_2 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_3(struct rsnd_mod *VAR_0,
      struct rsnd_dai_stream *VAR_1,
      struct rsnd_priv *VAR_2)
{
 struct rsnd_dma *VAR_3 = FUNC_2(VAR_0);
 struct rsnd_dmaen *VAR_4 = FUNC_1(VAR_3);

 if (VAR_4->chan)
  FUNC_0(VAR_4->chan);

 return 0;
}
