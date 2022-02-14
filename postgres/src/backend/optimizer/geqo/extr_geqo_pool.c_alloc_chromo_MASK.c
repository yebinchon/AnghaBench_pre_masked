
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * string; } ;
typedef int PlannerInfo ;
typedef int Gene ;
typedef TYPE_1__ Chromosome ;


 scalar_t__ FUNC_0 (int) ;

Chromosome *
FUNC_1(PlannerInfo *VAR_0, int VAR_1)
{
 Chromosome *VAR_2;

 VAR_2 = (Chromosome *) FUNC_0(sizeof(Chromosome));
 VAR_2->string = (Gene *) FUNC_0((VAR_1 + 1) * sizeof(Gene));

 return VAR_2;
}
