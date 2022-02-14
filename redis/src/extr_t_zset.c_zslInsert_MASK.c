
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {double score; struct TYPE_8__* backward; TYPE_1__* level; int ele; } ;
typedef TYPE_2__ zskiplistNode ;
struct TYPE_9__ {int level; unsigned int length; TYPE_2__* tail; TYPE_2__* header; } ;
typedef TYPE_3__ zskiplist ;
typedef int sds ;
struct TYPE_7__ {unsigned int span; TYPE_2__* forward; } ;


 int VAR_0 ;
 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int) ;
 TYPE_2__* FUNC_3 (int,double,int ) ;
 int FUNC_4 () ;

zskiplistNode *FUNC_5(zskiplist *VAR_1, double VAR_2, sds VAR_3) {
    zskiplistNode *VAR_4[VAR_0], *VAR_5;
    unsigned int VAR_6[VAR_0];
    int VAR_7, VAR_8;

    FUNC_2(!FUNC_0(VAR_2));
    VAR_5 = VAR_1->header;
    for (VAR_7 = VAR_1->level-1; VAR_7 >= 0; VAR_7--) {

        VAR_6[VAR_7] = VAR_7 == (VAR_1->level-1) ? 0 : VAR_6[VAR_7+1];
        while (VAR_5->level[VAR_7].forward &&
                (VAR_5->level[VAR_7].forward->score < VAR_2 ||
                    (VAR_5->level[VAR_7].forward->score == VAR_2 &&
                    FUNC_1(VAR_5->level[VAR_7].forward->ele,VAR_3) < 0)))
        {
            VAR_6[VAR_7] += VAR_5->level[VAR_7].span;
            VAR_5 = VAR_5->level[VAR_7].forward;
        }
        VAR_4[VAR_7] = VAR_5;
    }




    VAR_8 = FUNC_4();
    if (VAR_8 > VAR_1->level) {
        for (VAR_7 = VAR_1->level; VAR_7 < VAR_8; VAR_7++) {
            VAR_6[VAR_7] = 0;
            VAR_4[VAR_7] = VAR_1->header;
            VAR_4[VAR_7]->level[VAR_7].span = VAR_1->length;
        }
        VAR_1->level = VAR_8;
    }
    VAR_5 = FUNC_3(VAR_8,VAR_2,VAR_3);
    for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
        VAR_5->level[VAR_7].forward = VAR_4[VAR_7]->level[VAR_7].forward;
        VAR_4[VAR_7]->level[VAR_7].forward = VAR_5;


        VAR_5->level[VAR_7].span = VAR_4[VAR_7]->level[VAR_7].span - (VAR_6[0] - VAR_6[VAR_7]);
        VAR_4[VAR_7]->level[VAR_7].span = (VAR_6[0] - VAR_6[VAR_7]) + 1;
    }


    for (VAR_7 = VAR_8; VAR_7 < VAR_1->level; VAR_7++) {
        VAR_4[VAR_7]->level[VAR_7].span++;
    }

    VAR_5->backward = (VAR_4[0] == VAR_1->header) ? ((void*)0) : VAR_4[0];
    if (VAR_5->level[0].forward)
        VAR_5->level[0].forward->backward = VAR_5;
    else
        VAR_1->tail = VAR_5;
    VAR_1->length++;
    return VAR_5;
}
