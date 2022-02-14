
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_mod {int dummy; } ;
struct rsnd_dai_stream {int dummy; } ;
struct dma_chan {int dummy; } ;


 struct dma_chan* FUNC_0 (struct rsnd_dai_stream*,struct rsnd_mod*) ;

__attribute__((used)) static struct dma_chan *FUNC_1(struct rsnd_dai_stream *VAR_0,
         struct rsnd_mod *VAR_1,
         struct rsnd_mod *VAR_2)
{
 if ((!VAR_1 && !VAR_2) ||
     (VAR_1 && VAR_2))
  return ((void*)0);

 if (VAR_1)
  return FUNC_0(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_2);
}
