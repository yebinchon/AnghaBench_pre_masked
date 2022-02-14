
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rsnd_priv {struct rsnd_dma_ctrl* dma; } ;
struct rsnd_dma_ctrl {int base; scalar_t__ dmapp_num; } ;
struct resource {int dummy; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,struct resource*) ;
 struct rsnd_dma_ctrl* FUNC_4 (struct device*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct resource* FUNC_5 (struct platform_device*,int ,char*) ;
 scalar_t__ FUNC_6 (struct rsnd_priv*) ;
 int FUNC_7 (int *,int *,int *,int *,int ,int ) ;
 struct device* FUNC_8 (struct rsnd_priv*) ;
 struct platform_device* FUNC_9 (struct rsnd_priv*) ;

int FUNC_10(struct rsnd_priv *VAR_4)
{
 struct platform_device *VAR_5 = FUNC_9(VAR_4);
 struct device *VAR_6 = FUNC_8(VAR_4);
 struct rsnd_dma_ctrl *VAR_7;
 struct resource *VAR_8;




 if (FUNC_6(VAR_4))
  return 0;




 VAR_8 = FUNC_5(VAR_5, VAR_1, "audmapp");
 VAR_7 = FUNC_4(VAR_6, sizeof(*VAR_7), VAR_0);
 if (!VAR_7 || !VAR_8) {
  FUNC_2(VAR_6, "dma allocate failed\n");
  return 0;
 }

 VAR_7->dmapp_num = 0;
 VAR_7->base = FUNC_3(VAR_6, VAR_8);
 if (FUNC_0(VAR_7->base))
  return FUNC_1(VAR_7->base);

 VAR_4->dma = VAR_7;


 return FUNC_7(((void*)0), &VAR_2, &VAR_3, ((void*)0), 0, 0);
}
