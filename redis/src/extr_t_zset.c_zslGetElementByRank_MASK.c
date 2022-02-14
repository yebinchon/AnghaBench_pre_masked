
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* level; } ;
typedef TYPE_2__ zskiplistNode ;
struct TYPE_8__ {int level; TYPE_2__* header; } ;
typedef TYPE_3__ zskiplist ;
struct TYPE_6__ {unsigned long span; TYPE_2__* forward; } ;



zskiplistNode* FUNC_0(zskiplist *VAR_0, unsigned long VAR_1) {
    zskiplistNode *VAR_2;
    unsigned long VAR_3 = 0;
    int VAR_4;

    VAR_2 = VAR_0->header;
    for (VAR_4 = VAR_0->level-1; VAR_4 >= 0; VAR_4--) {
        while (VAR_2->level[VAR_4].forward && (VAR_3 + VAR_2->level[VAR_4].span) <= VAR_1)
        {
            VAR_3 += VAR_2->level[VAR_4].span;
            VAR_2 = VAR_2->level[VAR_4].forward;
        }
        if (VAR_3 == VAR_1) {
            return VAR_2;
        }
    }
    return ((void*)0);
}
