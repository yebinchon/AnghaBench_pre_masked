
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; int * ptr; } ;
typedef int * PVOID ;
typedef int PUSER_HANDLE_TABLE ;
typedef TYPE_1__* PUSER_HANDLE_ENTRY ;
typedef scalar_t__ HANDLE_TYPE ;
typedef int HANDLE ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int ) ;

PVOID FUNC_2(PUSER_HANDLE_TABLE VAR_0, HANDLE VAR_1, HANDLE_TYPE VAR_2 )
{
   PUSER_HANDLE_ENTRY VAR_3;

   FUNC_0(VAR_0);

   if (!(VAR_3 = FUNC_1(VAR_0, VAR_1 )) || VAR_3->type != VAR_2)
   {
      return ((void*)0);
   }
   return VAR_3->ptr;
}
