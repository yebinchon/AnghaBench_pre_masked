
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {double usage; } ;
struct TYPE_4__ {TYPE_1__ counters; } ;
typedef TYPE_2__ pgssEntry ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 double VAR_2 = (*(pgssEntry *const *) VAR_0)->counters.usage;
 double VAR_3 = (*(pgssEntry *const *) VAR_1)->counters.usage;

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return +1;
 else
  return 0;
}
