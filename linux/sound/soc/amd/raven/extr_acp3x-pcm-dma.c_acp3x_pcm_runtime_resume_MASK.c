
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_dev_data {scalar_t__ acp3x_base; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 struct i2s_dev_data* FUNC_1 (struct device*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_2)
{
 int VAR_3;
 struct i2s_dev_data *VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_0(VAR_4->acp3x_base);
 if (VAR_3)
  return -VAR_0;
 FUNC_2(1, VAR_4->acp3x_base + VAR_1);
 return 0;
}
