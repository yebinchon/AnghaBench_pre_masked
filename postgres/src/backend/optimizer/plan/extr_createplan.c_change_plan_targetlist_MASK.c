
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int parallel_safe; int * targetlist; } ;
typedef TYPE_1__ Plan ;
typedef int List ;


 TYPE_1__* FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

Plan *
FUNC_3(Plan *VAR_0, List *VAR_1, bool VAR_2)
{





 if (!FUNC_1(VAR_0) &&
  !FUNC_2(VAR_1, VAR_0->targetlist))
  VAR_0 = FUNC_0(VAR_0, VAR_1,
           VAR_0->parallel_safe &&
           VAR_2);
 else
 {

  VAR_0->targetlist = VAR_1;
  VAR_0->parallel_safe &= VAR_2;
 }
 return VAR_0;
}
