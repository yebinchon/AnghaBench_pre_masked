
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct omap_mcpdm {int * dma_data; TYPE_1__* config; int dev; int irq; } ;
struct TYPE_2__ {int threshold; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,char*) ;
 int VAR_4 ;
 int FUNC_1 (struct omap_mcpdm*,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ,char*,void*) ;
 struct omap_mcpdm* FUNC_7 (struct snd_soc_dai*) ;
 int FUNC_8 (struct snd_soc_dai*,int *,int *) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_dai *VAR_5)
{
 struct omap_mcpdm *VAR_6 = FUNC_7(VAR_5);
 int VAR_7;

 FUNC_3(VAR_6->dev);


 FUNC_4(VAR_6->dev);
 FUNC_1(VAR_6, VAR_0, 0x00);

 VAR_7 = FUNC_6(VAR_6->irq, VAR_4, 0, "McPDM",
     (void *)VAR_6);

 FUNC_5(VAR_6->dev);

 if (VAR_7) {
  FUNC_0(VAR_6->dev, "Request for IRQ failed\n");
  FUNC_2(VAR_6->dev);
 }


 VAR_6->config[VAR_3].threshold = 2;
 VAR_6->config[VAR_2].threshold =
       VAR_1 - 3;

 FUNC_8(VAR_5,
      &VAR_6->dma_data[VAR_3],
      &VAR_6->dma_data[VAR_2]);

 return VAR_7;
}
