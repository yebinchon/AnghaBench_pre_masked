
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_15__ {double score; int * ele; TYPE_2__* level; TYPE_1__* backward; } ;
typedef TYPE_3__ zskiplistNode ;
struct TYPE_16__ {int level; TYPE_3__* header; } ;
typedef TYPE_4__ zskiplist ;
typedef int sds ;
struct TYPE_14__ {TYPE_3__* forward; } ;
struct TYPE_13__ {double score; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,TYPE_3__**) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_4__*,double,int *) ;

zskiplistNode *FUNC_5(zskiplist *VAR_1, double VAR_2, sds VAR_3, double VAR_4) {
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
    FUNC_1(VAR_6 && VAR_2 == VAR_6->score && FUNC_0(VAR_6->ele,VAR_3) == 0);




    if ((VAR_6->backward == ((void*)0) || VAR_6->backward->score < VAR_4) &&
        (VAR_6->level[0].forward == ((void*)0) || VAR_6->level[0].forward->score > VAR_4))
    {
        VAR_6->score = VAR_4;
        return VAR_6;
    }



    FUNC_2(VAR_1, VAR_6, VAR_5);
    zskiplistNode *VAR_8 = FUNC_4(VAR_1,VAR_4,VAR_6->ele);


    VAR_6->ele = ((void*)0);
    FUNC_3(VAR_6);
    return VAR_8;
}
