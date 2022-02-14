
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double delta; } ;
typedef TYPE_1__ CommonEntry ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 double VAR_2 = ((CommonEntry *) VAR_0)->delta;
 double VAR_3 = ((CommonEntry *) VAR_1)->delta;

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return 1;
 else
  return 0;
}
