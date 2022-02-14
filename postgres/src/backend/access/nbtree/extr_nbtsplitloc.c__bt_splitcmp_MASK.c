
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ curdelta; } ;
typedef TYPE_1__ SplitPoint ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 SplitPoint *VAR_2 = (SplitPoint *) VAR_0;
 SplitPoint *VAR_3 = (SplitPoint *) VAR_1;

 if (VAR_2->curdelta > VAR_3->curdelta)
  return 1;
 if (VAR_2->curdelta < VAR_3->curdelta)
  return -1;

 return 0;
}
