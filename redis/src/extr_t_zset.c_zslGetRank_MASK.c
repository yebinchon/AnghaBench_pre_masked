
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {double score; scalar_t__ ele; TYPE_1__* level; } ;
typedef TYPE_2__ zskiplistNode ;
struct TYPE_7__ {int level; TYPE_2__* header; } ;
typedef TYPE_3__ zskiplist ;
typedef int sds ;
struct TYPE_5__ {TYPE_2__* forward; scalar_t__ span; } ;


 scalar_t__ FUNC_0 (scalar_t__,int ) ;

unsigned long FUNC_1(zskiplist *VAR_0, double VAR_1, sds VAR_2) {
    zskiplistNode *VAR_3;
    unsigned long VAR_4 = 0;
    int VAR_5;

    VAR_3 = VAR_0->header;
    for (VAR_5 = VAR_0->level-1; VAR_5 >= 0; VAR_5--) {
        while (VAR_3->level[VAR_5].forward &&
            (VAR_3->level[VAR_5].forward->score < VAR_1 ||
                (VAR_3->level[VAR_5].forward->score == VAR_1 &&
                FUNC_0(VAR_3->level[VAR_5].forward->ele,VAR_2) <= 0))) {
            VAR_4 += VAR_3->level[VAR_5].span;
            VAR_3 = VAR_3->level[VAR_5].forward;
        }


        if (VAR_3->ele && FUNC_0(VAR_3->ele,VAR_2) == 0) {
            return VAR_4;
        }
    }
    return 0;
}
