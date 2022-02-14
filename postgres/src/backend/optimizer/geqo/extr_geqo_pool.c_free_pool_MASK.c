
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* string; } ;
struct TYPE_5__ {int size; struct TYPE_5__* data; } ;
typedef TYPE_1__ Pool ;
typedef int PlannerInfo ;
typedef TYPE_2__ Chromosome ;


 int FUNC_0 (TYPE_1__*) ;

void
FUNC_1(PlannerInfo *VAR_0, Pool *VAR_1)
{
 Chromosome *VAR_2;
 int VAR_3;


 VAR_2 = (Chromosome *) VAR_1->data;
 for (VAR_3 = 0; VAR_3 < VAR_1->size; VAR_3++)
  FUNC_0(VAR_2[VAR_3].string);


 FUNC_0(VAR_1->data);


 FUNC_0(VAR_1);
}
