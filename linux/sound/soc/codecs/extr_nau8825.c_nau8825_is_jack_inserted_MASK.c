
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct regmap*,int ,int*) ;

__attribute__((used)) static bool FUNC_1(struct regmap *VAR_4)
{
 bool VAR_5, VAR_6;
 int VAR_7, VAR_8;

 FUNC_0(VAR_4, VAR_3, &VAR_8);
 VAR_5 = VAR_8 & VAR_1;
 FUNC_0(VAR_4, VAR_2, &VAR_7);
 VAR_6 = VAR_7 & VAR_0;



 return VAR_5 == VAR_6;
}
