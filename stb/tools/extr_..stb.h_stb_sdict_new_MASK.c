
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * arena; } ;
typedef TYPE_1__ stb_sdict ;


 int * FUNC_0 (int) ;
 TYPE_1__* FUNC_1 () ;

stb_sdict * FUNC_2(int VAR_0)
{
   stb_sdict *VAR_1 = FUNC_1();
   if (VAR_1 == ((void*)0)) return ((void*)0);
   VAR_1->arena = VAR_0 ? FUNC_0(1) : ((void*)0);
   return VAR_1;
}
