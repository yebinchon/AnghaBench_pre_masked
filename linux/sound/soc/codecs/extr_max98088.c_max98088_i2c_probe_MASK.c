
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct max98088_priv {int pdata; int devtype; int mclk; int regmap; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_4__ {int platform_data; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct max98088_priv* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (TYPE_1__*,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct max98088_priv*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_6,
         const struct i2c_device_id *VAR_7)
{
       struct max98088_priv *VAR_8;
       int VAR_9;

       VAR_8 = FUNC_3(&VAR_6->dev, sizeof(struct max98088_priv),
          VAR_2);
       if (VAR_8 == ((void*)0))
               return -VAR_0;

       VAR_8->regmap = FUNC_4(VAR_6, &VAR_4);
       if (FUNC_0(VAR_8->regmap))
        return FUNC_1(VAR_8->regmap);

 VAR_8->mclk = FUNC_2(&VAR_6->dev, "mclk");
 if (FUNC_0(VAR_8->mclk))
  if (FUNC_1(VAR_8->mclk) == -VAR_1)
   return FUNC_1(VAR_8->mclk);

       VAR_8->devtype = VAR_7->driver_data;

       FUNC_6(VAR_6, VAR_8);
       VAR_8->pdata = VAR_6->dev.platform_data;

       VAR_9 = FUNC_5(&VAR_6->dev,
                       &VAR_5, &VAR_3[0], 2);
       return VAR_9;
}
