
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int t_self; int t_data; } ;
struct TYPE_5__ {scalar_t__ fn_xmin; int fn_tid; } ;
typedef TYPE_1__ PLyProcedure ;
typedef TYPE_2__* HeapTuple ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;

__attribute__((used)) static bool
FUNC_2(PLyProcedure *VAR_0, HeapTuple VAR_1)
{
 if (VAR_0 == ((void*)0))
  return 0;


 if (!(VAR_0->fn_xmin == FUNC_0(VAR_1->t_data) &&
    FUNC_1(&VAR_0->fn_tid, &VAR_1->t_self)))
  return 0;

 return 1;
}
