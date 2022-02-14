
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigmadsp_ops {int dummy; } ;
struct sigmadsp {int read; int write; struct i2c_client* control_data; } ;
struct i2c_client {int dev; } ;


 scalar_t__ FUNC_0 (struct sigmadsp*) ;
 struct sigmadsp* FUNC_1 (int *,struct sigmadsp_ops const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;

struct sigmadsp *FUNC_2(struct i2c_client *VAR_2,
 const struct sigmadsp_ops *VAR_3, const char *VAR_4)
{
 struct sigmadsp *VAR_5;

 VAR_5 = FUNC_1(&VAR_2->dev, VAR_3, VAR_4);
 if (FUNC_0(VAR_5))
  return VAR_5;

 VAR_5->control_data = VAR_2;
 VAR_5->write = VAR_1;
 VAR_5->read = VAR_0;

 return VAR_5;
}
