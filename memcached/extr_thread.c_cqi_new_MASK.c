
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int malloc_fails; } ;
struct TYPE_6__ {struct TYPE_6__* next; } ;
typedef TYPE_1__ CQ_ITEM ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 TYPE_2__ VAR_3 ;

__attribute__((used)) static CQ_ITEM *FUNC_5(void) {
    CQ_ITEM *VAR_4 = ((void*)0);
    FUNC_3(&VAR_2);
    if (VAR_1) {
        VAR_4 = VAR_1;
        VAR_1 = VAR_4->next;
    }
    FUNC_4(&VAR_2);

    if (((void*)0) == VAR_4) {
        int VAR_5;


        VAR_4 = FUNC_2(sizeof(CQ_ITEM) * VAR_0);
        if (((void*)0) == VAR_4) {
            FUNC_0();
            VAR_3.malloc_fails++;
            FUNC_1();
            return ((void*)0);
        }






        for (VAR_5 = 2; VAR_5 < VAR_0; VAR_5++)
            VAR_4[VAR_5 - 1].next = &VAR_4[VAR_5];

        FUNC_3(&VAR_2);
        VAR_4[VAR_0 - 1].next = VAR_1;
        VAR_1 = &VAR_4[1];
        FUNC_4(&VAR_2);
    }

    return VAR_4;
}
