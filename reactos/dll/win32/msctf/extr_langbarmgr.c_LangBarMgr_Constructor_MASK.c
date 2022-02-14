
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * lpVtbl; } ;
struct TYPE_5__ {int refCount; TYPE_1__ ITfLangBarMgr_iface; } ;
typedef TYPE_2__ LangBarMgr ;
typedef int IUnknown ;
typedef int HRESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__* FUNC_1 (int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,int *) ;

HRESULT FUNC_3(IUnknown *VAR_4, IUnknown **VAR_5)
{
    LangBarMgr *VAR_6;
    if (VAR_4)
        return VAR_0;

    VAR_6 = FUNC_1(FUNC_0(),0,sizeof(LangBarMgr));
    if (VAR_6 == ((void*)0))
        return VAR_1;

    VAR_6->ITfLangBarMgr_iface.lpVtbl = &VAR_2;
    VAR_6->refCount = 1;

    *VAR_5 = (IUnknown *)&VAR_6->ITfLangBarMgr_iface;
    FUNC_2("returning %p\n", *VAR_5);
    return VAR_3;
}
