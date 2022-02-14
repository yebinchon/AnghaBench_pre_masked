
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct snd_soc_dai {int dummy; } ;
struct snd_pcm_substream {scalar_t__ stream; int runtime; } ;
struct TYPE_5__ {int maxburst; } ;
struct TYPE_4__ {int maxburst; } ;
struct fsl_sai {TYPE_2__ dma_params_rx; TYPE_1__ dma_params_tx; TYPE_3__* soc_data; int regmap; } ;
struct TYPE_6__ {unsigned int reg_offset; scalar_t__ use_edma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 struct fsl_sai* FUNC_4 (struct snd_soc_dai*) ;

__attribute__((used)) static int FUNC_5(struct snd_pcm_substream *VAR_6,
  struct snd_soc_dai *VAR_7)
{
 struct fsl_sai *VAR_8 = FUNC_4(VAR_7);
 unsigned int VAR_9 = VAR_8->soc_data->reg_offset;
 bool VAR_10 = VAR_6->stream == VAR_4;
 int VAR_11;

 FUNC_1(VAR_8->regmap, FUNC_0(VAR_10, VAR_9),
      VAR_1,
      VAR_0);





 if (VAR_8->soc_data->use_edma)
  FUNC_3(VAR_6->runtime, 0,
        VAR_2,
        VAR_10 ? VAR_8->dma_params_tx.maxburst :
        VAR_8->dma_params_rx.maxburst);

 VAR_11 = FUNC_2(VAR_6->runtime, 0,
   VAR_3, &VAR_5);

 return VAR_11;
}
