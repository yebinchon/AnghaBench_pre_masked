
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* name; struct TYPE_6__* next; struct TYPE_6__* head; } ;
typedef TYPE_1__ ARL_ENTRY ;
typedef TYPE_1__ ARL_BASE ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int) ;

void FUNC_3(ARL_BASE *VAR_0) {
    if(FUNC_2(!VAR_0))
        return;

    while(VAR_0->head) {
        ARL_ENTRY *VAR_1 = VAR_0->head;
        VAR_0->head = VAR_1->next;

        FUNC_0(VAR_1->name);



        FUNC_0(VAR_1);
    }

    FUNC_0(VAR_0->name);





    FUNC_0(VAR_0);
}
