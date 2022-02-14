
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {double score; int ele; TYPE_1__* level; } ;
typedef TYPE_2__ zskiplistNode ;
struct TYPE_12__ {int level; TYPE_2__* header; } ;
typedef TYPE_3__ zskiplist ;
typedef int sds ;
struct TYPE_10__ {TYPE_2__* forward; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;

int FUNC_3(zskiplist *VAR_1, double VAR_2, sds VAR_3, zskiplistNode **VAR_4) {
    zskiplistNode *VAR_5[VAR_0], *VAR_6;
    int VAR_7;

    VAR_6 = VAR_1->header;
    for (VAR_7 = VAR_1->level-1; VAR_7 >= 0; VAR_7--) {
        while (VAR_6->level[VAR_7].forward &&
                (VAR_6->level[VAR_7].forward->score < VAR_2 ||
                    (VAR_6->level[VAR_7].forward->score == VAR_2 &&
                     FUNC_0(VAR_6->level[VAR_7].forward->ele,VAR_3) < 0)))
        {
            VAR_6 = VAR_6->level[VAR_7].forward;
        }
        VAR_5[VAR_7] = VAR_6;
    }


    VAR_6 = VAR_6->level[0].forward;
    if (VAR_6 && VAR_2 == VAR_6->score && FUNC_0(VAR_6->ele,VAR_3) == 0) {
        FUNC_1(VAR_1, VAR_6, VAR_5);
        if (!VAR_4)
            FUNC_2(VAR_6);
        else
            *VAR_4 = VAR_6;
        return 1;
    }
    return 0;
}
