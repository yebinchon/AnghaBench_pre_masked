
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmf_args {int count; } ;
struct macio_chip {int * base; } ;
struct i2sbus_dev {int bus_number; scalar_t__ enable; } ;
struct i2sbus_control {struct macio_chip* macio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__,struct pmf_args*) ;

int FUNC_2(struct i2sbus_control *VAR_4,
     struct i2sbus_dev *VAR_5)
{
 struct pmf_args VAR_6 = { .count = 0 };
 struct macio_chip *VAR_7 = VAR_4->macio;

 if (VAR_5->enable)
  return FUNC_1(VAR_5->enable, &VAR_6);

 if (VAR_7 == ((void*)0) || VAR_7->base == ((void*)0))
  return -VAR_0;

 switch (VAR_5->bus_number) {
 case 0:


  FUNC_0(VAR_1, VAR_2);
  break;
 case 1:
  FUNC_0(VAR_1, VAR_3);
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
