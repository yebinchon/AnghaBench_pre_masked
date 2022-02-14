
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssm2518 {int regmap; int enable_gpio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int,int) ;

__attribute__((used)) static int FUNC_6(struct ssm2518 *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;

 if (!VAR_4) {
  VAR_5 = FUNC_5(VAR_3->regmap, VAR_2,
   VAR_1, VAR_1);
  FUNC_3(VAR_3->regmap);
 }

 if (FUNC_0(VAR_3->enable_gpio))
  FUNC_1(VAR_3->enable_gpio, VAR_4);

 FUNC_2(VAR_3->regmap, !VAR_4);

 if (VAR_4) {
  VAR_5 = FUNC_5(VAR_3->regmap, VAR_2,
   VAR_1 | VAR_0, 0x00);
  FUNC_4(VAR_3->regmap);
 }

 return VAR_5;
}
