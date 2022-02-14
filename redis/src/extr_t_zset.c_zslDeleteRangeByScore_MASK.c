
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ score; int ele; TYPE_1__* level; } ;
typedef TYPE_2__ zskiplistNode ;
struct TYPE_13__ {int level; TYPE_2__* header; } ;
typedef TYPE_3__ zskiplist ;
struct TYPE_14__ {scalar_t__ min; scalar_t__ max; scalar_t__ maxex; scalar_t__ minex; } ;
typedef TYPE_4__ zrangespec ;
typedef int dict ;
struct TYPE_11__ {TYPE_2__* forward; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;

unsigned long FUNC_3(zskiplist *VAR_1, zrangespec *VAR_2, dict *VAR_3) {
    zskiplistNode *VAR_4[VAR_0], *VAR_5;
    unsigned long VAR_6 = 0;
    int VAR_7;

    VAR_5 = VAR_1->header;
    for (VAR_7 = VAR_1->level-1; VAR_7 >= 0; VAR_7--) {
        while (VAR_5->level[VAR_7].forward && (VAR_2->minex ?
            VAR_5->level[VAR_7].forward->score <= VAR_2->min :
            VAR_5->level[VAR_7].forward->score < VAR_2->min))
                VAR_5 = VAR_5->level[VAR_7].forward;
        VAR_4[VAR_7] = VAR_5;
    }


    VAR_5 = VAR_5->level[0].forward;


    while (VAR_5 &&
           (VAR_2->maxex ? VAR_5->score < VAR_2->max : VAR_5->score <= VAR_2->max))
    {
        zskiplistNode *VAR_8 = VAR_5->level[0].forward;
        FUNC_1(VAR_1,VAR_5,VAR_4);
        FUNC_0(VAR_3,VAR_5->ele);
        FUNC_2(VAR_5);
        VAR_6++;
        VAR_5 = VAR_8;
    }
    return VAR_6;
}
