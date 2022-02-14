
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rt274_priv {TYPE_1__* i2c; int jack; int regmap; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (struct rt274_priv*,int*,int*) ;
 int FUNC_3 (int ,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_5, void *VAR_6)
{
 struct rt274_priv *VAR_7 = VAR_6;
 bool VAR_8 = 0;
 bool VAR_9 = 0;
 int VAR_10, VAR_11 = 0;


 FUNC_1(VAR_7->regmap, VAR_1,
    VAR_2, VAR_2);

 VAR_10 = FUNC_2(VAR_7, &VAR_8, &VAR_9);

 if (VAR_10 == 0) {
  if (VAR_8)
   VAR_11 |= VAR_3;

  if (VAR_9)
   VAR_11 |= VAR_4;

  FUNC_3(VAR_7->jack, VAR_11,
   VAR_4 | VAR_3);

  FUNC_0(&VAR_7->i2c->dev, 300);
 }

 return VAR_0;
}
