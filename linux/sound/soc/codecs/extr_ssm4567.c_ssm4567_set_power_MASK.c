
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm4567 {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int,int) ;
 int FUNC_4 (int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ssm4567 *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_4) {
  VAR_5 = FUNC_3(VAR_3->regmap,
   VAR_1,
   VAR_0, VAR_0);
  FUNC_1(VAR_3->regmap);
 }

 FUNC_0(VAR_3->regmap, !VAR_4);

 if (VAR_4) {
  VAR_5 = FUNC_4(VAR_3->regmap, VAR_2,
   0x00);
  if (VAR_5)
   return VAR_5;

  VAR_5 = FUNC_3(VAR_3->regmap,
   VAR_1,
   VAR_0, 0x00);
  FUNC_2(VAR_3->regmap);
 }

 return VAR_5;
}
