
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int count; unsigned int* list; } ;


 TYPE_1__ VAR_0 ;

unsigned int FUNC_0(unsigned int VAR_1)
{
 unsigned int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0.count; VAR_2++)
  if ((1u << VAR_2) == VAR_1)
   return VAR_0.list[VAR_2];
 return 0;
}
