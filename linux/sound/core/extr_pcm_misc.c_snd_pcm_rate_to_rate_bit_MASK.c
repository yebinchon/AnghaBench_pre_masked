
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int count; unsigned int* list; } ;


 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;

unsigned int FUNC_0(unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1.count; VAR_3++)
  if (VAR_1.list[VAR_3] == VAR_2)
   return 1u << VAR_3;
 return VAR_0;
}
