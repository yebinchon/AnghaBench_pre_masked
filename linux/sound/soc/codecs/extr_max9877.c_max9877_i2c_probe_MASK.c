
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct TYPE_3__ {int def; int reg; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 struct regmap* FUNC_3 (struct i2c_client*,int *) ;
 int FUNC_4 (int *,int *,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_5 (struct regmap*,int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_3,
        const struct i2c_device_id *VAR_4)
{
 struct regmap *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_3, &VAR_1);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);


 for (VAR_6 = 0; VAR_6 < FUNC_0(VAR_2); VAR_6++)
  FUNC_5(VAR_5, VAR_2[VAR_6].reg, VAR_2[VAR_6].def);

 return FUNC_4(&VAR_3->dev,
   &VAR_0, ((void*)0), 0);
}
