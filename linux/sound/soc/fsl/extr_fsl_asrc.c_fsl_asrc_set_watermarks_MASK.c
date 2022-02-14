
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_asrc_pair {int index; struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {int regmap; } ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_4(struct fsl_asrc_pair *VAR_4, u32 VAR_5, u32 VAR_6)
{
 struct fsl_asrc *VAR_7 = VAR_4->asrc_priv;
 enum asrc_pair_index VAR_8 = VAR_4->index;

 FUNC_3(VAR_7->regmap, FUNC_2(VAR_8),
      VAR_1 |
      VAR_2 |
      VAR_3,
      VAR_0 |
      FUNC_0(VAR_5) |
      FUNC_1(VAR_6));
}
