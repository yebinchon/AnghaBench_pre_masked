
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct dma_chan {int dummy; } ;


 struct dma_chan* FUNC_0 (int ,struct rsnd_mod*,char*) ;
 int FUNC_1 (struct rsnd_dai_stream*) ;
 struct rsnd_priv* FUNC_2 (struct rsnd_mod*) ;
 int FUNC_3 (struct rsnd_priv*) ;
 scalar_t__ FUNC_4 (struct rsnd_dai_stream*) ;

__attribute__((used)) static struct dma_chan *FUNC_5(struct rsnd_dai_stream *VAR_0,
      struct rsnd_mod *VAR_1)
{
 struct rsnd_priv *VAR_2 = FUNC_2(VAR_1);
 int VAR_3 = FUNC_1(VAR_0);
 char *VAR_4;
 if (FUNC_4(VAR_0))
  VAR_4 = VAR_3 ? "rxu" : "txu";
 else
  VAR_4 = VAR_3 ? "rx" : "tx";

 return FUNC_0(FUNC_3(VAR_2),
     VAR_1, VAR_4);
}
