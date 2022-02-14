
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct aud96p22_priv {int regmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*,int) ;
 struct aud96p22_priv* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct device*,int *,int *,int) ;
 int FUNC_6 (struct i2c_client*,struct aud96p22_priv*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
         const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct aud96p22_priv *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8), VAR_1);
 if (VAR_8 == ((void*)0))
  return -VAR_0;

 VAR_8->regmap = FUNC_4(VAR_5, &VAR_4);
 if (FUNC_0(VAR_8->regmap)) {
  VAR_9 = FUNC_1(VAR_8->regmap);
  FUNC_2(VAR_7, "failed to init i2c regmap: %d\n", VAR_9);
  return VAR_9;
 }

 FUNC_6(VAR_5, VAR_8);

 VAR_9 = FUNC_5(VAR_7, &VAR_3, &VAR_2, 1);
 if (VAR_9) {
  FUNC_2(VAR_7, "failed to register component: %d\n", VAR_9);
  return VAR_9;
 }

 return 0;
}
