
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stb_malloc; } ;
typedef TYPE_1__ stb__arr ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (void*) ;
 int FUNC_3 (TYPE_1__*) ;

void FUNC_4(void **VAR_0)
{
   void *VAR_1 = *VAR_0;
   FUNC_1(VAR_1);
   if (VAR_1) {
      stb__arr *VAR_2 = FUNC_2(VAR_1);
      if (VAR_2->stb_malloc)
         FUNC_3(VAR_2);
      else
         FUNC_0(VAR_2);
   }
   *VAR_0 = ((void*)0);
}
