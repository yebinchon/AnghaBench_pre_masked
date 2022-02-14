
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt298_priv {TYPE_1__* i2c; int jack; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int FUNC_2 (struct rt298_priv*,int*,int*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_4, void *VAR_5)
{
 struct rt298_priv *VAR_6 = VAR_5;
 bool VAR_7 = 0;
 bool VAR_8 = 0;
 int VAR_9, VAR_10 = 0;

 VAR_9 = FUNC_2(VAR_6, &VAR_7, &VAR_8);


 FUNC_1(VAR_6->regmap, VAR_1, 0x1, 0x1);

 if (VAR_9 == 0) {
  if (VAR_7)
   VAR_10 |= VAR_2;

  if (VAR_8)
   VAR_10 |= VAR_3;

  FUNC_3(VAR_6->jack, VAR_10,
   VAR_3 | VAR_2);

  FUNC_0(&VAR_6->i2c->dev, 300);
 }

 return VAR_0;
}
