
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ string; } ;
struct TYPE_4__ {int size; int string_length; TYPE_2__* data; } ;
typedef TYPE_1__ Pool ;
typedef int PlannerInfo ;
typedef int Gene ;
typedef TYPE_2__ Chromosome ;


 scalar_t__ FUNC_0 (int) ;

Pool *
FUNC_1(PlannerInfo *VAR_0, int VAR_1, int VAR_2)
{
 Pool *VAR_3;
 Chromosome *VAR_4;
 int VAR_5;


 VAR_3 = (Pool *) FUNC_0(sizeof(Pool));
 VAR_3->size = (int) VAR_1;
 VAR_3->string_length = (int) VAR_2;


 VAR_3->data = (Chromosome *) FUNC_0(VAR_1 * sizeof(Chromosome));


 VAR_4 = (Chromosome *) VAR_3->data;
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  VAR_4[VAR_5].string = FUNC_0((VAR_2 + 1) * sizeof(Gene));

 return VAR_3;
}
