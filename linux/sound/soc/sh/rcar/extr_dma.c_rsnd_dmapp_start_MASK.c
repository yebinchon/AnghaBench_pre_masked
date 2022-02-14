
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dmapp {int chcr; } ;
struct rsnd_dma {int dst_addr; int src_addr; } ;
struct rsnd_dai_stream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rsnd_dmapp* FUNC_0 (struct rsnd_dma*) ;
 int FUNC_1 (struct rsnd_dma*,int ,int ) ;
 struct rsnd_dma* FUNC_2 (struct rsnd_mod*) ;

__attribute__((used)) static int FUNC_3(struct rsnd_mod *VAR_3,
       struct rsnd_dai_stream *VAR_4,
       struct rsnd_priv *VAR_5)
{
 struct rsnd_dma *VAR_6 = FUNC_2(VAR_3);
 struct rsnd_dmapp *VAR_7 = FUNC_0(VAR_6);

 FUNC_1(VAR_6, VAR_6->src_addr, VAR_2);
 FUNC_1(VAR_6, VAR_6->dst_addr, VAR_1);
 FUNC_1(VAR_6, VAR_7->chcr, VAR_0);

 return 0;
}
