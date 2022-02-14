
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_12__ {int cHandleEntries; } ;
struct TYPE_11__ {int * DbgHandleCount; } ;
struct TYPE_10__ {TYPE_4__* ppi; } ;
struct TYPE_9__ {int type; TYPE_4__* pi; scalar_t__ flags; struct TYPE_9__* ptr; } ;
struct TYPE_8__ {TYPE_2__* freelist; } ;
typedef TYPE_1__* PUSER_HANDLE_TABLE ;
typedef TYPE_2__* PUSER_HANDLE_ENTRY ;
typedef TYPE_3__* PTHREADINFO ;
typedef TYPE_4__* PPROCESSINFO ;
 TYPE_5__* VAR_0 ;

__attribute__((used)) __inline static void *FUNC_0(PUSER_HANDLE_TABLE VAR_1, PUSER_HANDLE_ENTRY VAR_2)
{
   void *VAR_3;
   VAR_3 = VAR_2->ptr;
   VAR_2->ptr = VAR_1->freelist;
   VAR_2->type = 0;
   VAR_2->flags = 0;
   VAR_2->pi = ((void*)0);
   VAR_1->freelist = VAR_2;

   VAR_0->cHandleEntries--;

   return VAR_3;
}
