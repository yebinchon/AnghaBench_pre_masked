
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int quicklistNode ;
struct TYPE_6__ {scalar_t__ direction; int offset; int * current; int * zi; } ;
typedef TYPE_1__ quicklistIter ;
struct TYPE_7__ {int zi; TYPE_3__* node; scalar_t__ quicklist; } ;
typedef TYPE_2__ quicklistEntry ;
typedef int quicklist ;
struct TYPE_8__ {int * next; int * prev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_3__*,int *) ;

void FUNC_1(quicklistIter *VAR_2, quicklistEntry *VAR_3) {
    quicklistNode *VAR_4 = VAR_3->node->prev;
    quicklistNode *VAR_5 = VAR_3->node->next;
    int VAR_6 = FUNC_0((quicklist *)VAR_3->quicklist,
                                         VAR_3->node, &VAR_3->zi);


    VAR_2->zi = ((void*)0);


    if (VAR_6) {
        if (VAR_2->direction == VAR_0) {
            VAR_2->current = VAR_5;
            VAR_2->offset = 0;
        } else if (VAR_2->direction == VAR_1) {
            VAR_2->current = VAR_4;
            VAR_2->offset = -1;
        }
    }
}
