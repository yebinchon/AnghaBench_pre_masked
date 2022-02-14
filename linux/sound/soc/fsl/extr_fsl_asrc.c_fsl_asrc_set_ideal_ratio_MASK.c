
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_asrc_pair {int index; struct fsl_asrc* asrc_priv; } ;
struct fsl_asrc {int regmap; } ;
typedef enum asrc_pair_index { ____Placeholder_asrc_pair_index } asrc_pair_index ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct fsl_asrc_pair *VAR_2,
        int VAR_3, int VAR_4)
{
 struct fsl_asrc *VAR_5 = VAR_2->asrc_priv;
 enum asrc_pair_index VAR_6 = VAR_2->index;
 unsigned long VAR_7;
 int VAR_8;

 if (!VAR_4) {
  FUNC_2("output rate should not be zero\n");
  return -VAR_0;
 }


 VAR_7 = (VAR_3 / VAR_4) << VAR_1;


 VAR_3 %= VAR_4;

 for (VAR_8 = 1; VAR_8 <= VAR_1; VAR_8++) {
  VAR_3 <<= 1;

  if (VAR_3 < VAR_4)
   continue;

  VAR_7 |= 1 << (VAR_1 - VAR_8);
  VAR_3 -= VAR_4;

  if (!VAR_3)
   break;
 }

 FUNC_3(VAR_5->regmap, FUNC_1(VAR_6), VAR_7);
 FUNC_3(VAR_5->regmap, FUNC_0(VAR_6), VAR_7 >> 24);

 return 0;
}
