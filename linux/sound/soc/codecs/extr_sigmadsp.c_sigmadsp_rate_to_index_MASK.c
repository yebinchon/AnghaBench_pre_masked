
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned int count; unsigned int* list; } ;
struct sigmadsp {TYPE_1__ rate_constraints; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct sigmadsp *VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->rate_constraints.count; VAR_3++) {
  if (VAR_1->rate_constraints.list[VAR_3] == VAR_2)
   return VAR_3;
 }

 return -VAR_0;
}
