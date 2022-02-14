
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {unsigned short generation; int type; } ;
struct TYPE_5__ {int nb_handles; TYPE_2__* handles; } ;
typedef TYPE_1__* PUSER_HANDLE_TABLE ;
typedef TYPE_2__* PUSER_HANDLE_ENTRY ;
typedef int HANDLE ;


 int VAR_0 ;
 unsigned short FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

PUSER_HANDLE_ENTRY FUNC_2(PUSER_HANDLE_TABLE VAR_1, HANDLE VAR_2 )
{
   unsigned short VAR_3;
   int VAR_4 = (FUNC_1(VAR_2) - VAR_0) >> 1;
   if (VAR_4 < 0 || VAR_4 >= VAR_1->nb_handles)
      return ((void*)0);
   if (!VAR_1->handles[VAR_4].type)
      return ((void*)0);
   VAR_3 = FUNC_0(VAR_2);
   if (VAR_3 == VAR_1->handles[VAR_4].generation || !VAR_3 || VAR_3 == 0xffff)
      return &VAR_1->handles[VAR_4];
   return ((void*)0);
}
