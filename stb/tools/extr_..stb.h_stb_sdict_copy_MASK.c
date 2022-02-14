
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {void* arena; } ;
typedef TYPE_1__ stb_sdict ;


 int FUNC_0 (void*) ;
 int * FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;

stb_sdict* FUNC_3(stb_sdict *VAR_0)
{
   stb_sdict *VAR_1;
   void *VAR_2 = VAR_0->arena;
   void *VAR_3 = VAR_2 ? FUNC_1(1) : ((void*)0);
   VAR_0->arena = VAR_3;
   VAR_1 = FUNC_2(VAR_0);
   VAR_0->arena = VAR_2;
   if (VAR_1)
      VAR_1->arena = VAR_3;
   else if (VAR_3)
      FUNC_0(VAR_3);
   return VAR_1;
}
