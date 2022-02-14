
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int level; int * tail; TYPE_3__* header; scalar_t__ length; } ;
typedef TYPE_2__ zskiplist ;
struct TYPE_8__ {int * backward; TYPE_1__* level; } ;
struct TYPE_6__ {scalar_t__ span; int * forward; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int,int ,int *) ;

zskiplist *FUNC_2(void) {
    int VAR_1;
    zskiplist *VAR_2;

    VAR_2 = FUNC_0(sizeof(*VAR_2));
    VAR_2->level = 1;
    VAR_2->length = 0;
    VAR_2->header = FUNC_1(VAR_0,0,((void*)0));
    for (VAR_1 = 0; VAR_1 < VAR_0; VAR_1++) {
        VAR_2->header->level[VAR_1].forward = ((void*)0);
        VAR_2->header->level[VAR_1].span = 0;
    }
    VAR_2->header->backward = ((void*)0);
    VAR_2->tail = ((void*)0);
    return VAR_2;
}
