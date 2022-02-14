
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ref; int * next; int * frame; int * obj; int * jsobj; } ;
typedef TYPE_1__ scope_chain_t ;
typedef int jsdisp_t ;
typedef int IDispatch ;
typedef int HRESULT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 TYPE_1__* FUNC_1 (int) ;
 int * FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_3(scope_chain_t *VAR_2, jsdisp_t *VAR_3, IDispatch *VAR_4, scope_chain_t **VAR_5)
{
    scope_chain_t *VAR_6;

    VAR_6 = FUNC_1(sizeof(scope_chain_t));
    if(!VAR_6)
        return VAR_0;

    VAR_6->ref = 1;

    FUNC_0(VAR_4);
    VAR_6->jsobj = VAR_3;
    VAR_6->obj = VAR_4;
    VAR_6->frame = ((void*)0);
    VAR_6->next = VAR_2 ? FUNC_2(VAR_2) : ((void*)0);

    *VAR_5 = VAR_6;
    return VAR_1;
}
