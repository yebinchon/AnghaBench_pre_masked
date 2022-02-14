
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int score; } ;
typedef TYPE_3__ zskiplistNode ;
struct TYPE_13__ {TYPE_2__* header; TYPE_3__* tail; } ;
typedef TYPE_4__ zskiplist ;
struct TYPE_14__ {scalar_t__ min; scalar_t__ max; scalar_t__ maxex; scalar_t__ minex; } ;
typedef TYPE_5__ zrangespec ;
struct TYPE_11__ {TYPE_1__* level; } ;
struct TYPE_10__ {TYPE_3__* forward; } ;


 int FUNC_0 (int ,TYPE_5__*) ;
 int FUNC_1 (int ,TYPE_5__*) ;

int FUNC_2(zskiplist *VAR_0, zrangespec *VAR_1) {
    zskiplistNode *VAR_2;


    if (VAR_1->min > VAR_1->max ||
            (VAR_1->min == VAR_1->max && (VAR_1->minex || VAR_1->maxex)))
        return 0;
    VAR_2 = VAR_0->tail;
    if (VAR_2 == ((void*)0) || !FUNC_0(VAR_2->score,VAR_1))
        return 0;
    VAR_2 = VAR_0->header->level[0].forward;
    if (VAR_2 == ((void*)0) || !FUNC_1(VAR_2->score,VAR_1))
        return 0;
    return 1;
}
