
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; scalar_t__ iscompr; scalar_t__ isnull; scalar_t__ iskey; } ;
typedef TYPE_1__ raxNode ;


 int FUNC_0 (size_t) ;
 TYPE_1__* FUNC_1 (size_t) ;

raxNode *FUNC_2(size_t VAR_0, int VAR_1) {
    size_t VAR_2 = sizeof(raxNode)+VAR_0+FUNC_0(VAR_0)+
                      sizeof(raxNode*)*VAR_0;
    if (VAR_1) VAR_2 += sizeof(void*);
    raxNode *VAR_3 = FUNC_1(VAR_2);
    if (VAR_3 == ((void*)0)) return ((void*)0);
    VAR_3->iskey = 0;
    VAR_3->isnull = 0;
    VAR_3->iscompr = 0;
    VAR_3->size = VAR_0;
    return VAR_3;
}
