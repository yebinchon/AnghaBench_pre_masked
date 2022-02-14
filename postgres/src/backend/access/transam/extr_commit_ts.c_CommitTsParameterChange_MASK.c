
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ commitTsActive; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_0 ;

void
FUNC_2(bool VAR_1, bool VAR_2)
{
 if (VAR_1)
 {
  if (!VAR_0->commitTsActive)
   FUNC_0();
 }
 else if (VAR_0->commitTsActive)
  FUNC_1();
}
