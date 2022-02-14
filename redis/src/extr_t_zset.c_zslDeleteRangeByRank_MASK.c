
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
typedef int dict ;
struct TYPE_9__ {unsigned long span; TYPE_2__* forward; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,TYPE_2__**) ;
 int FUNC_2 (TYPE_2__*) ;

unsigned long FUNC_3(zskiplist *VAR_1, unsigned int VAR_2, unsigned int VAR_3, dict *VAR_4) {
    zskiplistNode *VAR_5[VAR_0], *VAR_6;
    unsigned long VAR_7 = 0, VAR_8 = 0;
    int VAR_9;

    VAR_6 = VAR_1->header;
    for (VAR_9 = VAR_1->level-1; VAR_9 >= 0; VAR_9--) {
        while (VAR_6->level[VAR_9].forward && (VAR_7 + VAR_6->level[VAR_9].span) < VAR_2) {
            VAR_7 += VAR_6->level[VAR_9].span;
            VAR_6 = VAR_6->level[VAR_9].forward;
        }
        VAR_5[VAR_9] = VAR_6;
    }

    VAR_7++;
    VAR_6 = VAR_6->level[0].forward;
    while (VAR_6 && VAR_7 <= VAR_3) {
        zskiplistNode *VAR_10 = VAR_6->level[0].forward;
        FUNC_1(VAR_1,VAR_6,VAR_5);
        FUNC_0(VAR_4,VAR_6->ele);
        FUNC_2(VAR_6);
        VAR_8++;
        VAR_7++;
        VAR_6 = VAR_10;
    }
    return VAR_8;
}
