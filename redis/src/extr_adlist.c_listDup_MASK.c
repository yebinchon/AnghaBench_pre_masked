
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* value; } ;
typedef TYPE_1__ listNode ;
typedef int listIter ;
struct TYPE_11__ {void* (* dup ) (void*) ;int match; int free; } ;
typedef TYPE_2__ list ;


 int * FUNC_0 (TYPE_2__*,void*) ;
 TYPE_2__* FUNC_1 () ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int *) ;
 void* FUNC_5 (void*) ;

list *FUNC_6(list *VAR_0)
{
    list *VAR_1;
    listIter VAR_2;
    listNode *VAR_3;

    if ((VAR_1 = FUNC_1()) == ((void*)0))
        return ((void*)0);
    VAR_1->dup = VAR_0->dup;
    VAR_1->free = VAR_0->free;
    VAR_1->match = VAR_0->match;
    FUNC_4(VAR_0, &VAR_2);
    while((VAR_3 = FUNC_2(&VAR_2)) != ((void*)0)) {
        void *VAR_4;

        if (VAR_1->dup) {
            VAR_4 = VAR_1->dup(VAR_3->value);
            if (VAR_4 == ((void*)0)) {
                FUNC_3(VAR_1);
                return ((void*)0);
            }
        } else
            VAR_4 = VAR_3->value;
        if (FUNC_0(VAR_1, VAR_4) == ((void*)0)) {
            FUNC_3(VAR_1);
            return ((void*)0);
        }
    }
    return VAR_1;
}
