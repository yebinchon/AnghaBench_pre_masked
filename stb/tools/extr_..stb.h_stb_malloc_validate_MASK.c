
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void** prevn; void* next; } ;
typedef TYPE_1__ stb__nochildren ;
struct TYPE_4__ {void** prevn; void* next; void* child; } ;
typedef TYPE_2__ stb__alloc ;





 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 void*** FUNC_2 (void*) ;

void FUNC_3(void *VAR_0, void *VAR_1)
{
   if (VAR_0 == ((void*)0)) return;

   switch(FUNC_1(VAR_0)) {
      case 129:
         return;
      case 128: {
         stb__nochildren *VAR_2 = (stb__nochildren *) VAR_0 - 1;
         if (VAR_2->prevn)
            FUNC_0(*VAR_2->prevn == VAR_0);
         if (VAR_2->next) {
            FUNC_0(*FUNC_2(VAR_2->next) == &VAR_2->next);
            FUNC_3(VAR_2, VAR_1);
         }
         return;
      }
      case 130: {
         stb__alloc *VAR_3 = (stb__alloc *) VAR_0 - 1;

         if (VAR_3->prevn)
            FUNC_0(*VAR_3->prevn == VAR_0);

         if (VAR_3->child) {
            FUNC_0(*FUNC_2(VAR_3->child) == &VAR_3->child);
            FUNC_3(VAR_3->child, VAR_0);
         }

         if (VAR_3->next) {
            FUNC_0(*FUNC_2(VAR_3->next) == &VAR_3->next);
            FUNC_3(VAR_3->next, VAR_1);
         }
         return;
      }
      default:
         FUNC_0(0);
   }
}
