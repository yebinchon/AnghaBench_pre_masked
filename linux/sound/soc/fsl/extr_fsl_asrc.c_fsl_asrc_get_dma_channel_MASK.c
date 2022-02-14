
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_asrc_pair {int index; struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {TYPE_1__* pdev; } ;
struct dma_chan {int dummy; } ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 struct dma_chan* FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,char*,char,int) ;

struct dma_chan *FUNC_2(struct fsl_asrc_pair *VAR_1, bool VAR_2)
{
 struct fsl_asrc *VAR_3 = VAR_1->asrc_priv;
 enum asrc_pair_index VAR_4 = VAR_1->index;
 char VAR_5[4];

 FUNC_1(VAR_5, "%cx%c", VAR_2 == VAR_0 ? 'r' : 't', VAR_4 + 'a');

 return FUNC_0(&VAR_3->pdev->dev, VAR_5);
}
