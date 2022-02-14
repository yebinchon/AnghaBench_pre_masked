
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_asrc_pair {int index; int channels; struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {int regmap; } ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int*) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct fsl_asrc_pair *VAR_5)
{
 struct fsl_asrc *VAR_6 = VAR_5->asrc_priv;
 enum asrc_pair_index VAR_7 = VAR_5->index;
 int VAR_8, VAR_9 = 10, VAR_10;


 FUNC_5(VAR_6->regmap, VAR_3,
      FUNC_2(VAR_7), FUNC_1(VAR_7));


 do {
  FUNC_7(5);
  FUNC_4(VAR_6->regmap, VAR_1, &VAR_8);
  VAR_8 &= FUNC_0(VAR_7);
 } while (!VAR_8 && --VAR_9);


 FUNC_4(VAR_6->regmap, VAR_2, &VAR_8);
 for (VAR_10 = 0; VAR_10 < VAR_5->channels * 4; VAR_10++)
  FUNC_6(VAR_6->regmap, FUNC_3(VAR_7), 0);


 FUNC_6(VAR_6->regmap, VAR_4, VAR_0);
}
