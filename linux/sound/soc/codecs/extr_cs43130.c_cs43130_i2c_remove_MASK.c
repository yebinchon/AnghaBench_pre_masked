
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dev; } ;
struct cs43130_private {scalar_t__ xtal_ibias; int supplies; int reset_gpio; int wq; int work; scalar_t__ dc_meas; int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 struct cs43130_private* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int,int) ;
 int FUNC_7 (int ,int ) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_11)
{
 struct cs43130_private *VAR_12 = FUNC_4(VAR_11);

 if (VAR_12->xtal_ibias != VAR_6)
  FUNC_6(VAR_12->regmap, VAR_2,
       VAR_4,
       1 << VAR_5);

 FUNC_6(VAR_12->regmap, VAR_2,
      VAR_0 | VAR_1,
      VAR_0 | VAR_1);

 if (VAR_12->dc_meas) {
  FUNC_0(&VAR_12->work);
  FUNC_2(VAR_12->wq);

  FUNC_1(&VAR_11->dev, &VAR_9);
  FUNC_1(&VAR_11->dev, &VAR_10);
  FUNC_1(&VAR_11->dev, &VAR_7);
  FUNC_1(&VAR_11->dev, &VAR_8);
 }

 FUNC_3(VAR_12->reset_gpio, 0);

 FUNC_5(&VAR_11->dev);
 FUNC_7(VAR_3, VAR_12->supplies);

 return 0;
}
