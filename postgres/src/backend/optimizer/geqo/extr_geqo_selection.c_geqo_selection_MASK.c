
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; int string_length; int * data; } ;
typedef TYPE_1__ Pool ;
typedef int PlannerInfo ;
typedef int Chromosome ;


 int FUNC_0 (int *,int *,int *,int ) ;
 int FUNC_1 (int *,int,double) ;

void
FUNC_2(PlannerInfo *VAR_0, Chromosome *VAR_1, Chromosome *VAR_2,
      Pool *VAR_3, double VAR_4)
{
 int VAR_5,
    VAR_6;

 VAR_5 = FUNC_1(VAR_0, VAR_3->size, VAR_4);
 VAR_6 = FUNC_1(VAR_0, VAR_3->size, VAR_4);
 if (VAR_3->size > 1)
 {
  while (VAR_5 == VAR_6)
   VAR_6 = FUNC_1(VAR_0, VAR_3->size, VAR_4);
 }

 FUNC_0(VAR_0, VAR_1, &VAR_3->data[VAR_5], VAR_3->string_length);
 FUNC_0(VAR_0, VAR_2, &VAR_3->data[VAR_6], VAR_3->string_length);
}
