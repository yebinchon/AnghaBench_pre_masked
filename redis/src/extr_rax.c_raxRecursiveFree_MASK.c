
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int size; int isnull; scalar_t__ iskey; scalar_t__ iscompr; } ;
typedef TYPE_1__ raxNode ;
struct TYPE_13__ {int numnodes; } ;
typedef TYPE_2__ rax ;
typedef int child ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**,TYPE_1__**,int) ;
 void* FUNC_2 (TYPE_1__*) ;
 TYPE_1__** FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(rax *VAR_0, raxNode *VAR_1, void (*VAR_2)(void*)) {
    FUNC_0("free traversing",VAR_1);
    int VAR_3 = VAR_1->iscompr ? 1 : VAR_1->size;
    raxNode **VAR_4 = FUNC_3(VAR_1);
    while(VAR_3--) {
        raxNode *VAR_5;
        FUNC_1(&VAR_5,VAR_4,sizeof(VAR_5));
        FUNC_5(VAR_0,VAR_5,VAR_2);
        VAR_4--;
    }
    FUNC_0("free depth-first",VAR_1);
    if (VAR_2 && VAR_1->iskey && !VAR_1->isnull)
        VAR_2(FUNC_2(VAR_1));
    FUNC_4(VAR_1);
    VAR_0->numnodes--;
}
