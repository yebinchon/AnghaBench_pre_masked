
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * lpVtbl; } ;
struct TYPE_7__ {int refCount; TYPE_1__ IEnumTfContexts_iface; int * docmgr; } ;
typedef TYPE_1__ IEnumTfContexts ;
typedef int HRESULT ;
typedef TYPE_2__ EnumTfContext ;
typedef int DocumentMgr ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,TYPE_1__*) ;

__attribute__((used)) static HRESULT FUNC_3(DocumentMgr *VAR_4, IEnumTfContexts **VAR_5)
{
    EnumTfContext *VAR_6;

    VAR_6 = FUNC_1(FUNC_0(),VAR_1,sizeof(EnumTfContext));
    if (VAR_6 == ((void*)0))
        return VAR_0;

    VAR_6->IEnumTfContexts_iface.lpVtbl = &VAR_2;
    VAR_6->refCount = 1;
    VAR_6->docmgr = VAR_4;

    *VAR_5 = &VAR_6->IEnumTfContexts_iface;
    FUNC_2("returning %p\n", *VAR_5);
    return VAR_3;
}
