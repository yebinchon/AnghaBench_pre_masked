
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ numbers_arr; scalar_t__ values_arr; scalar_t__ values; } ;
typedef TYPE_1__ AttStatsSlot ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(AttStatsSlot *VAR_0)
{

 if (VAR_0->values)
  FUNC_0(VAR_0->values);


 if (VAR_0->values_arr)
  FUNC_0(VAR_0->values_arr);
 if (VAR_0->numbers_arr)
  FUNC_0(VAR_0->numbers_arr);
}
