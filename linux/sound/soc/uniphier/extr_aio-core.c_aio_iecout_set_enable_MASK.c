
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_aio_chip {struct regmap* regmap_sg; } ;
struct regmap {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,int ,int ) ;

void FUNC_1(struct uniphier_aio_chip *VAR_1, bool VAR_2)
{
 struct regmap *VAR_3 = VAR_1->regmap_sg;

 if (!VAR_3)
  return;

 FUNC_0(VAR_3, VAR_0, (VAR_2) ? ~0 : 0);
}
