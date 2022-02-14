
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* level; } ;
typedef TYPE_3__ zskiplistNode ;
struct TYPE_11__ {struct TYPE_11__* header; TYPE_1__* level; } ;
typedef TYPE_4__ zskiplist ;
struct TYPE_9__ {TYPE_3__* forward; } ;
struct TYPE_8__ {TYPE_3__* forward; } ;


 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_3__*) ;

void FUNC_2(zskiplist *VAR_0) {
    zskiplistNode *VAR_1 = VAR_0->header->level[0].forward, *VAR_2;

    FUNC_0(VAR_0->header);
    while(VAR_1) {
        VAR_2 = VAR_1->level[0].forward;
        FUNC_1(VAR_1);
        VAR_1 = VAR_2;
    }
    FUNC_0(VAR_0);
}
