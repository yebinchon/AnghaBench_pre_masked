
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* proc_ptr; } ;
typedef TYPE_1__ plperl_proc_ptr ;
struct TYPE_8__ {scalar_t__ fn_xmin; int fn_tid; } ;
typedef TYPE_2__ plperl_proc_desc ;
struct TYPE_9__ {int t_self; int t_data; } ;
typedef TYPE_3__* HeapTuple ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static bool
FUNC_3(plperl_proc_ptr *VAR_0, HeapTuple VAR_1)
{
 if (VAR_0 && VAR_0->proc_ptr)
 {
  plperl_proc_desc *VAR_2 = VAR_0->proc_ptr;
  bool VAR_3;






  VAR_3 = (VAR_2->fn_xmin == FUNC_0(VAR_1->t_data) &&
     FUNC_1(&VAR_2->fn_tid, &VAR_1->t_self));

  if (VAR_3)
   return 1;


  VAR_0->proc_ptr = ((void*)0);

  FUNC_2(VAR_2);
 }

 return 0;
}
