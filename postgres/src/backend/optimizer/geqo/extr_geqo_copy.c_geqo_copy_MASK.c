
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int worth; int * string; } ;
typedef int PlannerInfo ;
typedef TYPE_1__ Chromosome ;



void
FUNC_0(PlannerInfo *VAR_0, Chromosome *VAR_1, Chromosome *VAR_2,
    int VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  VAR_1->string[VAR_4] = VAR_2->string[VAR_4];

 VAR_1->worth = VAR_2->worth;
}
