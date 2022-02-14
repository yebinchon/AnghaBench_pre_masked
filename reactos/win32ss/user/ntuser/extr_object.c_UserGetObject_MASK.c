
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
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ,int ) ;

PVOID FUNC_3(PUSER_HANDLE_TABLE VAR_1, HANDLE VAR_2, HANDLE_TYPE VAR_3 )
{
   PUSER_HANDLE_ENTRY VAR_4;

   FUNC_0(VAR_1);

   if (!(VAR_4 = FUNC_2(VAR_1, VAR_2 )) || VAR_4->type != VAR_3)
   {
      FUNC_1(VAR_0);
      return ((void*)0);
   }
   return VAR_4->ptr;
}
