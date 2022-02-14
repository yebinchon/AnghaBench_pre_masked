
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2s_dev_data {scalar_t__ acp3x_base; } ;
struct device {int dummy; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct device*,char*) ;
 struct i2s_dev_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_1)
{
 int VAR_2;
 struct i2s_dev_data *VAR_3 = FUNC_2(VAR_1);

 VAR_2 = FUNC_0(VAR_3->acp3x_base);
 if (VAR_2)
  FUNC_1(VAR_1, "ACP de-init failed\n");
 else
  FUNC_3(VAR_1, "ACP de-initialized\n");

 FUNC_4(0, VAR_3->acp3x_base + VAR_0);

 return 0;
}
