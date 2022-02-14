
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ cost; } ;
typedef TYPE_1__ SPLITCOST ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const SPLITCOST *VAR_2 = (const SPLITCOST *) VAR_0;
 const SPLITCOST *VAR_3 = (const SPLITCOST *) VAR_1;

 if (VAR_2->cost == VAR_3->cost)
  return 0;
 else
  return (VAR_2->cost > VAR_3->cost) ? 1 : -1;
}
