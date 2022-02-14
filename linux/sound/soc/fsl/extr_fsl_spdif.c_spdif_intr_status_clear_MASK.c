
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct regmap {int dummy; } ;
struct fsl_spdif_priv {struct regmap* regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct regmap*,int ,int*) ;
 int FUNC_1 (struct regmap*,int ,int) ;

__attribute__((used)) static u32 FUNC_2(struct fsl_spdif_priv *VAR_3)
{
 struct regmap *VAR_4 = VAR_3->regmap;
 u32 VAR_5, VAR_6;

 FUNC_0(VAR_4, VAR_2, &VAR_5);
 FUNC_0(VAR_4, VAR_1, &VAR_6);

 FUNC_1(VAR_4, VAR_0, VAR_5 & VAR_6);

 return VAR_5;
}
