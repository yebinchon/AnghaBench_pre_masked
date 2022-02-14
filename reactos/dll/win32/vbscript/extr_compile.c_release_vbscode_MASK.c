
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int bstr_cnt; struct TYPE_5__* instrs; struct TYPE_5__* source; struct TYPE_5__* bstr_pool; int heap; scalar_t__ context; int entry; } ;
typedef TYPE_1__ vbscode_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(vbscode_t *VAR_0)
{
    unsigned VAR_1;

    FUNC_4(&VAR_0->entry);

    for(VAR_1=0; VAR_1 < VAR_0->bstr_cnt; VAR_1++)
        FUNC_1(VAR_0->bstr_pool[VAR_1]);

    if(VAR_0->context)
        FUNC_0(VAR_0->context);
    FUNC_3(&VAR_0->heap);

    FUNC_2(VAR_0->bstr_pool);
    FUNC_2(VAR_0->source);
    FUNC_2(VAR_0->instrs);
    FUNC_2(VAR_0);
}
