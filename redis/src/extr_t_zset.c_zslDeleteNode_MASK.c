
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int backward; TYPE_1__* level; } ;
typedef TYPE_4__ zskiplistNode ;
struct TYPE_13__ {int level; int length; TYPE_3__* header; int tail; } ;
typedef TYPE_5__ zskiplist ;
struct TYPE_11__ {TYPE_2__* level; } ;
struct TYPE_10__ {int * forward; } ;
struct TYPE_9__ {int span; TYPE_4__* forward; } ;



void FUNC_0(zskiplist *VAR_0, zskiplistNode *VAR_1, zskiplistNode **VAR_2) {
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_0->level; VAR_3++) {
        if (VAR_2[VAR_3]->level[VAR_3].forward == VAR_1) {
            VAR_2[VAR_3]->level[VAR_3].span += VAR_1->level[VAR_3].span - 1;
            VAR_2[VAR_3]->level[VAR_3].forward = VAR_1->level[VAR_3].forward;
        } else {
            VAR_2[VAR_3]->level[VAR_3].span -= 1;
        }
    }
    if (VAR_1->level[0].forward) {
        VAR_1->level[0].forward->backward = VAR_1->backward;
    } else {
        VAR_0->tail = VAR_1->backward;
    }
    while(VAR_0->level > 1 && VAR_0->header->level[VAR_0->level-1].forward == ((void*)0))
        VAR_0->level--;
    VAR_0->length--;
}
