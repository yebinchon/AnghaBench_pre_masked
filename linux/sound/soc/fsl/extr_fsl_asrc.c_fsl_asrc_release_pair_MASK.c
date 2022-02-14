
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_asrc_pair {int index; scalar_t__ error; scalar_t__ channels; struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {int lock; int ** pair; int channel_avail; int regmap; } ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct fsl_asrc_pair *VAR_1)
{
 struct fsl_asrc *VAR_2 = VAR_1->asrc_priv;
 enum asrc_pair_index VAR_3 = VAR_1->index;
 unsigned long VAR_4;


 FUNC_1(VAR_2->regmap, VAR_0,
      FUNC_0(VAR_3), 0);

 FUNC_2(&VAR_2->lock, VAR_4);

 VAR_2->channel_avail += VAR_1->channels;
 VAR_2->pair[VAR_3] = ((void*)0);
 VAR_1->error = 0;

 FUNC_3(&VAR_2->lock, VAR_4);
}
