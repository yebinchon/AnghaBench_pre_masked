
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcm3060_priv {int regmap; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct pcm3060_priv* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct i2c_client*,int *) ;
 int FUNC_4 (struct i2c_client*,struct pcm3060_priv*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_3,
        const struct i2c_device_id *VAR_4)
{
 struct pcm3060_priv *VAR_5;

 VAR_5 = FUNC_2(&VAR_3->dev, sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_3, VAR_5);

 VAR_5->regmap = FUNC_3(VAR_3, &VAR_2);
 if (FUNC_0(VAR_5->regmap))
  return FUNC_1(VAR_5->regmap);

 return FUNC_5(&VAR_3->dev);
}
