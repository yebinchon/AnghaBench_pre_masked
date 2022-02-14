
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
typedef int USER_HANDLE_ENTRY ;
typedef int ULONG ;
struct TYPE_3__ {int allocated_handles; scalar_t__ nb_handles; int handles; int * freelist; } ;
typedef int PVOID ;
typedef TYPE_1__* PUSER_HANDLE_TABLE ;



VOID FUNC_0(PUSER_HANDLE_TABLE VAR_0, PVOID VAR_1, ULONG VAR_2)
{
   VAR_0->freelist = ((void*)0);
   VAR_0->handles = VAR_1;

   VAR_0->nb_handles = 0;
   VAR_0->allocated_handles = VAR_2 / sizeof(USER_HANDLE_ENTRY);
}
