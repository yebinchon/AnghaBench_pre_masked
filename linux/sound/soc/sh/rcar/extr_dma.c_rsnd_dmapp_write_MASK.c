
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dma_ctrl {int dummy; } ;
struct rsnd_dma {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*,char*,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct rsnd_dma_ctrl*,struct rsnd_dma*,int ) ;
 struct rsnd_mod* FUNC_3 (struct rsnd_dma*) ;
 struct rsnd_priv* FUNC_4 (struct rsnd_mod*) ;
 struct device* FUNC_5 (struct rsnd_priv*) ;
 struct rsnd_dma_ctrl* FUNC_6 (struct rsnd_priv*) ;

__attribute__((used)) static void FUNC_7(struct rsnd_dma *VAR_0, u32 VAR_1, u32 VAR_2)
{
 struct rsnd_mod *VAR_3 = FUNC_3(VAR_0);
 struct rsnd_priv *VAR_4 = FUNC_4(VAR_3);
 struct rsnd_dma_ctrl *VAR_5 = FUNC_6(VAR_4);
 struct device *VAR_6 = FUNC_5(VAR_4);

 FUNC_0(VAR_6, "w 0x%px : %08x\n", FUNC_2(VAR_5, VAR_0, VAR_2), VAR_1);

 FUNC_1(VAR_1, FUNC_2(VAR_5, VAR_0, VAR_2));
}
