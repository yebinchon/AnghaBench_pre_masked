
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int ele; TYPE_1__* level; } ;
typedef TYPE_2__ zskiplistNode ;
struct TYPE_9__ {int level; TYPE_2__* header; } ;
typedef TYPE_3__ zskiplist ;
typedef int zlexrangespec ;
struct TYPE_7__ {TYPE_2__* forward; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,int *) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (int ,int *) ;

zskiplistNode *FUNC_4(zskiplist *VAR_0, zlexrangespec *VAR_1) {
    zskiplistNode *VAR_2;
    int VAR_3;


    if (!FUNC_1(VAR_0,VAR_1)) return ((void*)0);

    VAR_2 = VAR_0->header;
    for (VAR_3 = VAR_0->level-1; VAR_3 >= 0; VAR_3--) {

        while (VAR_2->level[VAR_3].forward &&
            FUNC_3(VAR_2->level[VAR_3].forward->ele,VAR_1))
                VAR_2 = VAR_2->level[VAR_3].forward;
    }


    FUNC_0(VAR_2 != ((void*)0));


    if (!FUNC_2(VAR_2->ele,VAR_1)) return ((void*)0);
    return VAR_2;
}
