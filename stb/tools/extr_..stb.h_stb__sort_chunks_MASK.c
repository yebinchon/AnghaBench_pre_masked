
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data_left; struct TYPE_4__* next; } ;
typedef TYPE_1__ stb__chunk ;
typedef int stb__alloc ;


 TYPE_1__* FUNC_0 (int *) ;
 int FUNC_1 (int *,TYPE_1__*) ;

__attribute__((used)) static void FUNC_2(stb__alloc *VAR_0)
{

   stb__chunk *VAR_1 = FUNC_0(VAR_0), *VAR_2;
   if (VAR_1 == ((void*)0)) return;
   VAR_2 = VAR_1->next;
   if (VAR_2 == ((void*)0)) return;
   if (VAR_1->data_left > VAR_2->data_left) return;

   VAR_1->next = VAR_2->next;
   VAR_2->next = VAR_1;
   FUNC_1(VAR_0, VAR_2);
}
