
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t items; size_t maxitems; void** stack; void** static_items; int oom; } ;
typedef TYPE_1__ raxStack ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void**,void**,int) ;
 void** FUNC_1 (int) ;
 void** FUNC_2 (void**,int) ;

__attribute__((used)) static inline int FUNC_3(raxStack *VAR_2, void *VAR_3) {
    if (VAR_2->items == VAR_2->maxitems) {
        if (VAR_2->stack == VAR_2->static_items) {
            VAR_2->stack = FUNC_1(sizeof(void*)*VAR_2->maxitems*2);
            if (VAR_2->stack == ((void*)0)) {
                VAR_2->stack = VAR_2->static_items;
                VAR_2->oom = 1;
                VAR_1 = VAR_0;
                return 0;
            }
            FUNC_0(VAR_2->stack,VAR_2->static_items,sizeof(void*)*VAR_2->maxitems);
        } else {
            void **VAR_4 = FUNC_2(VAR_2->stack,sizeof(void*)*VAR_2->maxitems*2);
            if (VAR_4 == ((void*)0)) {
                VAR_2->oom = 1;
                VAR_1 = VAR_0;
                return 0;
            }
            VAR_2->stack = VAR_4;
        }
        VAR_2->maxitems *= 2;
    }
    VAR_2->stack[VAR_2->items] = VAR_3;
    VAR_2->items++;
    return 1;
}
