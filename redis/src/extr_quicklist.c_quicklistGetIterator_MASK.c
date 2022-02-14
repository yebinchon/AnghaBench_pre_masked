
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int offset; int direction; int * zi; TYPE_2__ const* quicklist; int current; } ;
typedef TYPE_1__ quicklistIter ;
struct TYPE_7__ {int tail; int head; } ;
typedef TYPE_2__ quicklist ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int) ;

quicklistIter *FUNC_1(const quicklist *VAR_2, int VAR_3) {
    quicklistIter *VAR_4;

    VAR_4 = FUNC_0(sizeof(*VAR_4));

    if (VAR_3 == VAR_0) {
        VAR_4->current = VAR_2->head;
        VAR_4->offset = 0;
    } else if (VAR_3 == VAR_1) {
        VAR_4->current = VAR_2->tail;
        VAR_4->offset = -1;
    }

    VAR_4->direction = VAR_3;
    VAR_4->quicklist = VAR_2;

    VAR_4->zi = ((void*)0);

    return VAR_4;
}
