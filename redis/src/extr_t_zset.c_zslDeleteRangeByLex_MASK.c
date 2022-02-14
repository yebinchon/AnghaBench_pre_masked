
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int ele; TYPE_1__* level; } ;
typedef TYPE_2__ zskiplistNode ;
struct TYPE_11__ {int level; TYPE_2__* header; } ;
typedef TYPE_3__ zskiplist ;
typedef int zlexrangespec ;
typedef int dict ;
struct TYPE_9__ {TYPE_2__* forward; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

unsigned long FUNC_5(zskiplist *VAR_1, zlexrangespec *VAR_2, dict *VAR_3) {
    zskiplistNode *VAR_4[VAR_0], *VAR_5;
    unsigned long VAR_6 = 0;
    int VAR_7;


    VAR_5 = VAR_1->header;
    for (VAR_7 = VAR_1->level-1; VAR_7 >= 0; VAR_7--) {
        while (VAR_5->level[VAR_7].forward &&
            !FUNC_3(VAR_5->level[VAR_7].forward->ele,VAR_2))
                VAR_5 = VAR_5->level[VAR_7].forward;
        VAR_4[VAR_7] = VAR_5;
    }


    VAR_5 = VAR_5->level[0].forward;


    while (VAR_5 && FUNC_4(VAR_5->ele,VAR_2)) {
        zskiplistNode *VAR_8 = VAR_5->level[0].forward;
        FUNC_1(VAR_1,VAR_5,VAR_4);
        FUNC_0(VAR_3,VAR_5->ele);
        FUNC_2(VAR_5);
        VAR_6++;
        VAR_5 = VAR_8;
    }
    return VAR_6;
}
