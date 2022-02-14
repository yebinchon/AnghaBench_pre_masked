
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adau1977 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct adau1977 *VAR_2)
{
 int VAR_3;







 FUNC_0(VAR_2->regmap, 1);
 VAR_3 = FUNC_1(VAR_2->regmap, VAR_1,
   VAR_0);
 FUNC_0(VAR_2->regmap, 0);
 if (VAR_3)
  return VAR_3;

 return VAR_3;
}
