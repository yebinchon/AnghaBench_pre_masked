
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; unsigned int* list; } ;


 unsigned int VAR_0 ;
 TYPE_1__ VAR_1 ;

unsigned int FUNC_0(unsigned int VAR_2,
 unsigned int VAR_3)
{
 unsigned int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1.count; VAR_5++) {
  if (VAR_1.list[VAR_5] >= VAR_2
   && VAR_1.list[VAR_5] <= VAR_3)
   VAR_4 |= 1 << VAR_5;
 }

 if (!VAR_4)
  VAR_4 = VAR_0;

 return VAR_4;
}
