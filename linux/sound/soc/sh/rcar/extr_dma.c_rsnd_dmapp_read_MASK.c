
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dma_ctrl {int dummy; } ;
struct rsnd_dma {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct rsnd_dma_ctrl*,struct rsnd_dma*,int ) ;
 struct rsnd_mod* FUNC_2 (struct rsnd_dma*) ;
 struct rsnd_priv* FUNC_3 (struct rsnd_mod*) ;
 struct rsnd_dma_ctrl* FUNC_4 (struct rsnd_priv*) ;

__attribute__((used)) static u32 FUNC_5(struct rsnd_dma *VAR_0, u32 VAR_1)
{
 struct rsnd_mod *VAR_2 = FUNC_2(VAR_0);
 struct rsnd_priv *VAR_3 = FUNC_3(VAR_2);
 struct rsnd_dma_ctrl *VAR_4 = FUNC_4(VAR_3);

 return FUNC_0(FUNC_1(VAR_4, VAR_0, VAR_1));
}
