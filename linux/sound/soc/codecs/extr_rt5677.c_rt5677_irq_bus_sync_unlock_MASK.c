
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt5677_priv {int irq_lock; int irq_en; int regmap; } ;
struct irq_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct rt5677_priv* FUNC_0 (struct irq_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,int,int ) ;

__attribute__((used)) static void FUNC_3(struct irq_data *VAR_4)
{
 struct rt5677_priv *VAR_5 = FUNC_0(VAR_4);


 FUNC_2(VAR_5->regmap, VAR_3,
   VAR_0 | VAR_1 |
   VAR_2, VAR_5->irq_en);
 FUNC_1(&VAR_5->irq_lock);
}
