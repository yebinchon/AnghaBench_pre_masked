
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int clsid; } ;
struct TYPE_5__ {int * pITfThreadMgrEx; int * pITfTextInputProcessor; int tid; TYPE_1__ LanguageProfile; } ;
typedef int ITfThreadMgrEx ;
typedef int ITfThreadMgr ;
typedef int HRESULT ;
typedef TYPE_2__ ActivatedTextService ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int ,int *,void**) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;

__attribute__((used)) static HRESULT FUNC_5(ActivatedTextService *VAR_3, ITfThreadMgrEx *VAR_4)
{
    HRESULT VAR_5;


    if (VAR_3->pITfTextInputProcessor)
        return VAR_2;

    VAR_5 = FUNC_0 (&VAR_3->LanguageProfile.clsid, ((void*)0), VAR_0,
        &VAR_1, (void**)&VAR_3->pITfTextInputProcessor);
    if (FUNC_1(VAR_5)) return VAR_5;

    VAR_5 = FUNC_2(VAR_3->pITfTextInputProcessor, (ITfThreadMgr *)VAR_4, VAR_3->tid);
    if (FUNC_1(VAR_5))
    {
        FUNC_3(VAR_3->pITfTextInputProcessor);
        VAR_3->pITfTextInputProcessor = ((void*)0);
        return VAR_5;
    }

    VAR_3->pITfThreadMgrEx = VAR_4;
    FUNC_4(VAR_4);
    return VAR_5;
}
