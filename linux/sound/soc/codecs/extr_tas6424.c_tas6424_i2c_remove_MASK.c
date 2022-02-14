
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tas6424_data {int supplies; scalar_t__ standby_gpio; int fault_check_work; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct device*,char*,int) ;
 struct tas6424_data* FUNC_3 (struct device*) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (int ,int ) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct tas6424_data *VAR_2 = FUNC_3(VAR_1);
 int VAR_3;

 FUNC_1(&VAR_2->fault_check_work);


 if (VAR_2->standby_gpio)
  FUNC_4(VAR_2->standby_gpio, 1);

 VAR_3 = FUNC_5(FUNC_0(VAR_2->supplies),
         VAR_2->supplies);
 if (VAR_3 < 0) {
  FUNC_2(VAR_1, "unable to disable supplies: %d\n", VAR_3);
  return VAR_3;
 }

 return 0;
}
