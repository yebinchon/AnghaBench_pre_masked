
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int location; } ;
typedef TYPE_1__ pgssLocationLen ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int VAR_2 = ((const pgssLocationLen *) VAR_0)->location;
 int VAR_3 = ((const pgssLocationLen *) VAR_1)->location;

 if (VAR_2 < VAR_3)
  return -1;
 else if (VAR_2 > VAR_3)
  return +1;
 else
  return 0;
}
