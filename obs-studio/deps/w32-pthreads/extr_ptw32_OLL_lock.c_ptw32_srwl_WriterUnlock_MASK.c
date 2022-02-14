
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int tailPtr; } ;
typedef TYPE_3__ ptw32_srwl_rwlock_t ;
struct TYPE_10__ {TYPE_2__* wNodePtr; } ;
typedef TYPE_4__ ptw32_srwl_local_t ;
struct TYPE_8__ {TYPE_1__* qNextPtr; } ;
struct TYPE_7__ {int spin; } ;
typedef int PTW32_INTERLOCKED_PVOIDPTR ;
typedef scalar_t__ PTW32_INTERLOCKED_PVOID ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__,scalar_t__) ;

void
FUNC_1(ptw32_srwl_rwlock_t* VAR_1, ptw32_srwl_local_t* VAR_2)
{
  if (VAR_2->wNodePtr->qNextPtr == ((void*)0))
  {
    if (FUNC_0(
              (PTW32_INTERLOCKED_PVOIDPTR)&VAR_1->tailPtr,
              (PTW32_INTERLOCKED_PVOID)((void*)0),
              (PTW32_INTERLOCKED_PVOID)VAR_2->wNodePtr)
        == (PTW32_INTERLOCKED_PVOID)((void*)0))
    {
      return;
    }
    else
    {
      while (VAR_2->wNodePtr->qNextPtr == ((void*)0));
    }
  }

  VAR_2->wNodePtr->qNextPtr->spin = VAR_0;
  VAR_2->wNodePtr->qNextPtr = ((void*)0);
}
