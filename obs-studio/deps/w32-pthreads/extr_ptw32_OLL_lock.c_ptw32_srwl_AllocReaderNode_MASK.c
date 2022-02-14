
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ allocState; struct TYPE_5__* next; } ;
typedef TYPE_1__ ptw32_srwl_node_t ;
struct TYPE_6__ {TYPE_1__* rNodePtr; } ;
typedef TYPE_2__ ptw32_srwl_local_t ;
typedef int PTW32_INTERLOCKED_LONGPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_LONG ;


 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

ptw32_srwl_node_t*
FUNC_1(ptw32_srwl_local_t* VAR_2)
{
  ptw32_srwl_node_t* VAR_3 = VAR_2->rNodePtr;
  for (;;)
  {
    if (VAR_3->allocState == VAR_0)
    {
      if (FUNC_0(
            (PTW32_INTERLOCKED_LONGPTR)&VAR_3->allocState,
            (PTW32_INTERLOCKED_LONG)VAR_1,
            (PTW32_INTERLOCKED_LONG)VAR_0)
          == (PTW32_INTERLOCKED_LONG)VAR_1)
      {
        return VAR_3;
      }
    }
    VAR_3 = VAR_3->next;
  }
}
