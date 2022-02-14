
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_asrc_pair {int index; struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {int regmap; } ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct fsl_asrc_pair *VAR_1)
{
 struct fsl_asrc *VAR_2 = VAR_1->asrc_priv;
 enum asrc_pair_index VAR_3 = VAR_1->index;


 FUNC_1(VAR_2->regmap, VAR_0,
      FUNC_0(VAR_3), 0);
}
