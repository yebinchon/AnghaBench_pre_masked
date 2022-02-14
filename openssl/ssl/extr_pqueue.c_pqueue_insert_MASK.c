
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* items; } ;
typedef TYPE_1__ pqueue ;
struct TYPE_7__ {struct TYPE_7__* next; int priority; } ;
typedef TYPE_2__ pitem ;


 int FUNC_0 (int ,int ,int) ;

pitem *FUNC_1(pqueue *VAR_0, pitem *VAR_1)
{
    pitem *VAR_2, *VAR_3;

    if (VAR_0->items == ((void*)0)) {
        VAR_0->items = VAR_1;
        return VAR_1;
    }

    for (VAR_2 = ((void*)0), VAR_3 = VAR_0->items;
         VAR_3 != ((void*)0); VAR_2 = VAR_3, VAR_3 = VAR_3->next) {



        int VAR_4 = FUNC_0(VAR_3->priority, VAR_1->priority, 8);
        if (VAR_4 > 0) {
            VAR_1->next = VAR_3;

            if (VAR_2 == ((void*)0))
                VAR_0->items = VAR_1;
            else
                VAR_2->next = VAR_1;

            return VAR_1;
        }

        else if (VAR_4 == 0)
            return ((void*)0);
    }

    VAR_1->next = ((void*)0);
    VAR_2->next = VAR_1;

    return VAR_1;
}
