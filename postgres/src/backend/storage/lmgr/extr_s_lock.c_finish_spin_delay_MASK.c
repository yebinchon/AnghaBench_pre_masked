
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cur_delay; } ;
typedef TYPE_1__ SpinDelayStatus ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;

void
FUNC_2(SpinDelayStatus *VAR_3)
{
 if (VAR_3->cur_delay == 0)
 {

  if (VAR_2 < VAR_0)
   VAR_2 = FUNC_1(VAR_2 + 100, VAR_0);
 }
 else
 {
  if (VAR_2 > VAR_1)
   VAR_2 = FUNC_0(VAR_2 - 1, VAR_1);
 }
}
