
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; struct TYPE_5__* prev; struct TYPE_5__* next; } ;
typedef TYPE_1__ hlist ;


 TYPE_1__* FUNC_0 (int) ;
 int VAR_0 ;

int FUNC_1(hlist **VAR_1, hlist **VAR_2, int VAR_3, int VAR_4) {
   int VAR_5;

   if (*VAR_1 == ((void*)0)) {
       if ((*VAR_1 = FUNC_0(sizeof(hlist))) == ((void*)0))
           return 0;
       *VAR_2 = *VAR_1;
       (*VAR_1)->next = ((void*)0);
       (*VAR_1)->prev = ((void*)0);
       VAR_5 = 1;
   }
   else if (VAR_3 == VAR_0) {
       hlist *VAR_6 = (*VAR_2)->prev;
       VAR_6->next = ((void*)0);
       (*VAR_2)->next = *VAR_1;
       (*VAR_2)->prev = ((void*)0);
       *VAR_1 = *VAR_2;
       *VAR_2 = VAR_6;
       (*VAR_1)->next->prev = *VAR_1;
       VAR_5 = 0;
   }
   else {
       hlist *VAR_7 = FUNC_0(sizeof(hlist));
       if (!VAR_7)
           return 0;
       VAR_7->next = *VAR_1;
       VAR_7->prev = ((void*)0);
       *VAR_1 = VAR_7;
       (*VAR_1)->next->prev = *VAR_1;
       VAR_5 = 1;
   }
   (*VAR_1)->value = VAR_4;
   return VAR_5;
}
