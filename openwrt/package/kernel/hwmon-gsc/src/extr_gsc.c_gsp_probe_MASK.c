
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct i2c_device_id {int driver_data; } ;
struct TYPE_6__ {int kobj; } ;
struct i2c_client {TYPE_3__ dev; int name; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_5__ {int attrs; } ;
struct gsp_data {int type; TYPE_1__ attrs; int hwmon_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,char*,int ) ;
 int VAR_5 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (struct i2c_adapter*,int) ;
 int FUNC_5 (struct i2c_client*,struct gsp_data*) ;
 int FUNC_6 (struct gsp_data*) ;
 struct gsp_data* FUNC_7 (int,int ) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,TYPE_1__*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 struct gsp_data *VAR_9;
 int VAR_10;

 if (!FUNC_4(VAR_8, VAR_3 |
     VAR_4)) {
  VAR_10 = -VAR_1;
  goto exit;
 }

 if (!(VAR_9 = FUNC_7(sizeof(struct gsp_data), VAR_2))) {
  VAR_10 = -VAR_0;
  goto exit;
 }

 FUNC_5(VAR_6, VAR_9);

 VAR_9->type = VAR_7->driver_data;

 switch (VAR_9->type) {
 case 0:
  VAR_9->attrs.attrs = VAR_5;
  break;
 }

 FUNC_2(&VAR_6->dev, "%s chip found\n", VAR_6->name);


 if ((VAR_10 = FUNC_8(&VAR_6->dev.kobj, &VAR_9->attrs)))
  goto exit_free;

 VAR_9->hwmon_dev = FUNC_3(&VAR_6->dev);
 if (FUNC_0(VAR_9->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_9->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_9(&VAR_6->dev.kobj, &VAR_9->attrs);
exit_free:
 FUNC_6(VAR_9);
exit:
 return VAR_10;
}
