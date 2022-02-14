
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ blockState; } ;


 TYPE_1__* VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

bool
FUNC_2(bool VAR_3)
{




 if (FUNC_1())
  return 1;

 if (FUNC_0())
  return 1;

 if (!VAR_3)
  return 1;

 if (VAR_0->blockState != VAR_1 &&
  VAR_0->blockState != VAR_2)
  return 1;

 return 0;
}
