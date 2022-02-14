
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int direction; int next; } ;
typedef TYPE_1__ listIter ;
struct TYPE_6__ {int head; } ;
typedef TYPE_2__ list ;


 int VAR_0 ;

void FUNC_0(list *VAR_1, listIter *VAR_2) {
    VAR_2->next = VAR_1->head;
    VAR_2->direction = VAR_0;
}
