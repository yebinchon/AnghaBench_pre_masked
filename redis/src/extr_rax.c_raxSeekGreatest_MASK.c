
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int raxNode ;
struct TYPE_7__ {TYPE_2__* node; int stack; } ;
typedef TYPE_1__ raxIterator ;
struct TYPE_8__ {int size; int data; scalar_t__ iscompr; } ;


 int FUNC_0 (TYPE_2__**,int **,int) ;
 int FUNC_1 (TYPE_1__*,int,int) ;
 int ** FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;

int FUNC_4(raxIterator *VAR_0) {
    while(VAR_0->node->size) {
        if (VAR_0->node->iscompr) {
            if (!FUNC_1(VAR_0,VAR_0->node->data,
                VAR_0->node->size)) return 0;
        } else {
            if (!FUNC_1(VAR_0,VAR_0->node->data+VAR_0->node->size-1,1))
                return 0;
        }
        raxNode **VAR_1 = FUNC_2(VAR_0->node);
        if (!FUNC_3(&VAR_0->stack,VAR_0->node)) return 0;
        FUNC_0(&VAR_0->node,VAR_1,sizeof(VAR_0->node));
    }
    return 1;
}
