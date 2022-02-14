
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct macio_dev {TYPE_1__* bus; } ;
struct i2sbus_control {int macio; int list; } ;
struct TYPE_2__ {int chip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct i2sbus_control* FUNC_1 (int,int ) ;

int FUNC_2(struct macio_dev* VAR_2, struct i2sbus_control **VAR_3)
{
 *VAR_3 = FUNC_1(sizeof(struct i2sbus_control), VAR_1);
 if (!*VAR_3)
  return -VAR_0;

 FUNC_0(&(*VAR_3)->list);

 (*VAR_3)->macio = VAR_2->bus->chip;
 return 0;
}
