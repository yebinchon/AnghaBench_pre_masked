
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int nr_tz_sensor; TYPE_1__* tzi; } ;
struct TYPE_3__ {int instance; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

int FUNC_0(int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1.nr_tz_sensor; VAR_3++)
  if (VAR_1.tzi[VAR_3].instance == VAR_2)
   return VAR_3;
 return -VAR_0;
}
