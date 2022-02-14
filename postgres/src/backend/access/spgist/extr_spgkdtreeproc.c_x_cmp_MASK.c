
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* p; } ;
struct TYPE_3__ {scalar_t__ x; } ;
typedef TYPE_2__ SortedPoint ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 SortedPoint *VAR_2 = (SortedPoint *) VAR_0;
 SortedPoint *VAR_3 = (SortedPoint *) VAR_1;

 if (VAR_2->p->x == VAR_3->p->x)
  return 0;
 return (VAR_2->p->x > VAR_3->p->x) ? 1 : -1;
}
