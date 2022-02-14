
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct gsp_data {int attrs; int hwmon_dev; } ;


 int FUNC_0 (int ) ;
 struct gsp_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct gsp_data*) ;
 int FUNC_3 (int *,int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_0)
{
 struct gsp_data *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(VAR_1->hwmon_dev);
 FUNC_3(&VAR_0->dev.kobj, &VAR_1->attrs);
 FUNC_2(VAR_1);
 return 0;
}
