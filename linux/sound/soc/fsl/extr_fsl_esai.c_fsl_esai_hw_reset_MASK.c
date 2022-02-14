
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct fsl_esai {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (struct fsl_esai*) ;
 int FUNC_3 (struct fsl_esai*) ;
 int FUNC_4 (struct fsl_esai*,int) ;
 int FUNC_5 (struct fsl_esai*,int) ;
 int FUNC_6 (int ,int ,int*) ;
 int FUNC_7 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_12)
{
 struct fsl_esai *VAR_13 = (struct fsl_esai *)VAR_12;
 bool VAR_14 = 1, VAR_15 = 0, VAR_16[2];
 u32 VAR_17, VAR_18;


 FUNC_6(VAR_13->regmap, VAR_11, &VAR_17);
 FUNC_6(VAR_13->regmap, VAR_9, &VAR_18);
 VAR_16[VAR_14] = VAR_17 & VAR_5;
 VAR_16[VAR_15] = VAR_18 & VAR_5;


 FUNC_5(VAR_13, VAR_14);
 FUNC_5(VAR_13, VAR_15);


 FUNC_2(VAR_13);


 FUNC_7(VAR_13->regmap, VAR_10,
      VAR_4, VAR_3);
 FUNC_7(VAR_13->regmap, VAR_8,
      VAR_4, VAR_3);


 FUNC_3(VAR_13);


 FUNC_7(VAR_13->regmap, VAR_10,
      VAR_4, 0);
 FUNC_7(VAR_13->regmap, VAR_8,
      VAR_4, 0);
 FUNC_7(VAR_13->regmap, VAR_7,
      VAR_2, FUNC_1(VAR_0));
 FUNC_7(VAR_13->regmap, VAR_6,
      VAR_1, FUNC_0(VAR_0));


 if (VAR_16[VAR_14])
  FUNC_4(VAR_13, VAR_14);
 if (VAR_16[VAR_15])
  FUNC_4(VAR_13, VAR_15);
}
