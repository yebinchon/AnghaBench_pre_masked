
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2sbus_dev {int item; } ;
struct i2sbus_control {int list; } ;


 int FUNC_0 (struct i2sbus_control*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(struct i2sbus_control *VAR_0,
          struct i2sbus_dev *VAR_1)
{

 FUNC_1(&VAR_1->item);
 if (FUNC_2(&VAR_0->list))
  FUNC_0(VAR_0);
}
