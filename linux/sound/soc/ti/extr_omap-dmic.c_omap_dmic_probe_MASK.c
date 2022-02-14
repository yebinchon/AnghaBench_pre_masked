
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_soc_dai {int dummy; } ;
struct omap_dmic {int dma_data; scalar_t__ threshold; int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct omap_dmic*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct omap_dmic* FUNC_4 (struct snd_soc_dai*) ;
 int FUNC_5 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_6(struct snd_soc_dai *VAR_2)
{
 struct omap_dmic *VAR_3 = FUNC_4(VAR_2);

 FUNC_1(VAR_3->dev);


 FUNC_2(VAR_3->dev);
 FUNC_0(VAR_3, VAR_0, 0x00);
 FUNC_3(VAR_3->dev);


 VAR_3->threshold = VAR_1 - 3;

 FUNC_5(VAR_2, ((void*)0), &VAR_3->dma_data);

 return 0;
}
