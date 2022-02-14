
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {int dummy; } ;
struct rsnd_mod {int dummy; } ;
struct rsnd_dmapp {int chcr; int dmapp_id; } ;
struct rsnd_dma_ctrl {int dmapp_num; } ;
struct rsnd_dma {int dst_addr; int src_addr; } ;
struct rsnd_dai_stream {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,int ,int *,int *,int) ;
 struct rsnd_dmapp* FUNC_1 (struct rsnd_dma*) ;
 int FUNC_2 (struct rsnd_dai_stream*,struct rsnd_mod*,struct rsnd_mod*) ;
 struct rsnd_priv* FUNC_3 (struct rsnd_dai_stream*) ;
 struct device* FUNC_4 (struct rsnd_priv*) ;
 struct rsnd_dma_ctrl* FUNC_5 (struct rsnd_priv*) ;

__attribute__((used)) static int FUNC_6(struct rsnd_dai_stream *VAR_1,
        struct rsnd_dma *VAR_2,
        struct rsnd_mod *VAR_3, struct rsnd_mod *VAR_4)
{
 struct rsnd_dmapp *VAR_5 = FUNC_1(VAR_2);
 struct rsnd_priv *VAR_6 = FUNC_3(VAR_1);
 struct rsnd_dma_ctrl *VAR_7 = FUNC_5(VAR_6);
 struct device *VAR_8 = FUNC_4(VAR_6);

 VAR_5->dmapp_id = VAR_7->dmapp_num;
 VAR_5->chcr = FUNC_2(VAR_1, VAR_3, VAR_4) | VAR_0;

 VAR_7->dmapp_num++;

 FUNC_0(VAR_8, "id/src/dst/chcr = %d/%pad/%pad/%08x\n",
  VAR_5->dmapp_id, &VAR_2->src_addr, &VAR_2->dst_addr, VAR_5->chcr);

 return 0;
}
