
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max9860_priv {int dvddio; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 struct max9860_priv* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct max9860_priv *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 FUNC_2(VAR_2->dvddio);
 return 0;
}
