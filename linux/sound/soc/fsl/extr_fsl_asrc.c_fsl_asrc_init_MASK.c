
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_asrc {int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
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
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int FUNC_3(struct fsl_asrc *VAR_12)
{

 FUNC_2(VAR_12->regmap, VAR_4, VAR_0);


 FUNC_2(VAR_12->regmap, VAR_5, 0x0);


 FUNC_2(VAR_12->regmap, VAR_6, 0x7fffff);
 FUNC_2(VAR_12->regmap, VAR_7, 0x255555);
 FUNC_2(VAR_12->regmap, VAR_8, 0xff7280);
 FUNC_2(VAR_12->regmap, VAR_9, 0xff7280);
 FUNC_2(VAR_12->regmap, VAR_10, 0xff7280);


 FUNC_1(VAR_12->regmap, VAR_11,
      VAR_1, FUNC_0(0xfc));


 FUNC_2(VAR_12->regmap, VAR_3, 0x06D6);


 return FUNC_2(VAR_12->regmap, VAR_2, 0x0947);
}
