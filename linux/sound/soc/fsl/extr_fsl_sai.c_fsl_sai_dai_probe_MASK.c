
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snd_soc_dai {int dev; } ;
struct fsl_sai {int dma_params_rx; int dma_params_tx; int regmap; TYPE_1__* soc_data; } ;
struct TYPE_2__ {unsigned int reg_offset; scalar_t__ fifo_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 struct fsl_sai* FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int ,scalar_t__) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct snd_soc_dai*,int *,int *) ;
 int FUNC_8 (struct snd_soc_dai*,struct fsl_sai*) ;

__attribute__((used)) static int FUNC_9(struct snd_soc_dai *VAR_4)
{
 struct fsl_sai *VAR_5 = FUNC_4(VAR_4->dev);
 unsigned int VAR_6 = VAR_5->soc_data->reg_offset;


 FUNC_6(VAR_5->regmap, FUNC_3(VAR_6), VAR_1);
 FUNC_6(VAR_5->regmap, FUNC_1(VAR_6), VAR_1);

 FUNC_6(VAR_5->regmap, FUNC_3(VAR_6), 0);
 FUNC_6(VAR_5->regmap, FUNC_1(VAR_6), 0);

 FUNC_5(VAR_5->regmap, FUNC_2(VAR_6),
      VAR_0,
      VAR_5->soc_data->fifo_depth - VAR_3);
 FUNC_5(VAR_5->regmap, FUNC_0(VAR_6),
      VAR_0, VAR_2 - 1);

 FUNC_7(VAR_4, &VAR_5->dma_params_tx,
    &VAR_5->dma_params_rx);

 FUNC_8(VAR_4, VAR_5);

 return 0;
}
