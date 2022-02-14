
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* child; struct TYPE_9__* next; struct TYPE_9__** prevn; int alloc; } ;
typedef TYPE_1__ stb__nochildren ;
typedef TYPE_1__ stb__chunk ;
typedef TYPE_1__ stb__alloc ;





 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (void*) ;
 TYPE_1__*** FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 scalar_t__ VAR_0 ;

void FUNC_6(void *VAR_1)
{
   if (VAR_1 == ((void*)0)) return;


   ++VAR_0;

   switch(FUNC_3(VAR_1)) {
      case 129:




         return;
      case 128: {
         stb__nochildren *VAR_2 = (stb__nochildren *) VAR_1 - 1;

         *(VAR_2->prevn) = VAR_2->next;
         if (VAR_2->next)
            *FUNC_4(VAR_2->next) = VAR_2->prevn;
         FUNC_1(VAR_2);
         return;
      }
      case 130: {
         stb__alloc *VAR_3 = (stb__alloc *) VAR_1 - 1;
         stb__chunk *VAR_4, *VAR_5;
         void *VAR_6;


         *(VAR_3->prevn) = VAR_3->next;
         if (VAR_3->next)
            *FUNC_4(VAR_3->next) = VAR_3->prevn;


         VAR_4 = (stb__chunk *) FUNC_2(VAR_3);
         while (VAR_4 != ((void*)0)) {
            VAR_5 = VAR_4->next;
            VAR_0 += VAR_4->alloc;
            FUNC_1(VAR_4);
            VAR_4 = VAR_5;
         }


         FUNC_5(VAR_3,((void*)0));
         VAR_3->prevn = ((void*)0);
         VAR_3->next = ((void*)0);


         while ((VAR_6 = VAR_3->child) != ((void*)0)) {
            FUNC_6(VAR_6);
         }


         FUNC_1(VAR_3);
         return;
      }
      default:
         FUNC_0(0);
   }
}
