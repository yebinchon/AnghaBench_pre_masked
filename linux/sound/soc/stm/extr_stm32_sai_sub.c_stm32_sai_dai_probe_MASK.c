
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int maxburst; int addr_width; scalar_t__ addr; } ;
struct stm32_sai_sub_data {scalar_t__ sync; int regmap; int synci; int synco; int np_sync_provider; TYPE_2__* pdata; TYPE_3__ dma_params; scalar_t__ phys_addr; struct snd_soc_dai* cpu_dai; } ;
struct snd_soc_dai {int dev; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_5__ {int fifo_size; } ;
struct TYPE_6__ {int (* set_sync ) (TYPE_2__*,int ,int ,int ) ;TYPE_1__ conf; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (struct stm32_sai_sub_data*) ;
 scalar_t__ FUNC_2 (struct stm32_sai_sub_data*) ;
 scalar_t__ FUNC_3 (struct stm32_sai_sub_data*) ;
 struct stm32_sai_sub_data* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int) ;
 int FUNC_6 (struct snd_soc_dai*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_7 (TYPE_2__*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct snd_soc_dai *VAR_6)
{
 struct stm32_sai_sub_data *VAR_7 = FUNC_4(VAR_6->dev);
 int VAR_8 = 0, VAR_9, VAR_10;

 VAR_7->cpu_dai = VAR_6;

 VAR_7->dma_params.addr = (dma_addr_t)(VAR_7->phys_addr + VAR_5);





 VAR_7->dma_params.maxburst = 4;
 if (VAR_7->pdata->conf.fifo_size < 8)
  VAR_7->dma_params.maxburst = 1;

 VAR_7->dma_params.addr_width = VAR_0;

 if (FUNC_2(VAR_7))
  FUNC_6(VAR_6, &VAR_7->dma_params, ((void*)0));
 else
  FUNC_6(VAR_6, ((void*)0), &VAR_7->dma_params);


 if (FUNC_3(VAR_7))
  return 0;

 VAR_9 = VAR_2;
 if (FUNC_1(VAR_7))
  VAR_8 |= VAR_2;


 if (VAR_7->sync == VAR_1) {

  VAR_10 = VAR_7->pdata->set_sync(VAR_7->pdata, VAR_7->np_sync_provider,
        VAR_7->synco, VAR_7->synci);
  if (VAR_10)
   return VAR_10;
 }

 VAR_9 |= VAR_3;
 VAR_8 |= FUNC_0(VAR_7->sync);

 return FUNC_5(VAR_7->regmap, VAR_4, VAR_9, VAR_8);
}
