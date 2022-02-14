
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int bstr_cnt; unsigned int str_cnt; struct TYPE_6__* instrs; struct TYPE_6__* str_pool; struct TYPE_6__* bstr_pool; int heap; struct TYPE_6__* source; scalar_t__ ref; } ;
typedef TYPE_1__ bytecode_t ;


 int FUNC_0 (TYPE_1__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__) ;

void FUNC_4(bytecode_t *VAR_0)
{
    unsigned VAR_1;

    if(--VAR_0->ref)
        return;

    for(VAR_1=0; VAR_1 < VAR_0->bstr_cnt; VAR_1++)
        FUNC_0(VAR_0->bstr_pool[VAR_1]);
    for(VAR_1=0; VAR_1 < VAR_0->str_cnt; VAR_1++)
        FUNC_3(VAR_0->str_pool[VAR_1]);

    FUNC_1(VAR_0->source);
    FUNC_2(&VAR_0->heap);
    FUNC_1(VAR_0->bstr_pool);
    FUNC_1(VAR_0->str_pool);
    FUNC_1(VAR_0->instrs);
    FUNC_1(VAR_0);
}
