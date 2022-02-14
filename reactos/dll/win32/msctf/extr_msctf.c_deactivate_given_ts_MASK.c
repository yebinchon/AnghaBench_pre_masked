
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pITfThreadMgrEx; int * pITfTextInputProcessor; } ;
typedef int HRESULT ;
typedef TYPE_1__ ActivatedTextService ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static HRESULT FUNC_3(ActivatedTextService *VAR_1)
{
    HRESULT VAR_2 = VAR_0;

    if (VAR_1->pITfTextInputProcessor)
    {
        VAR_2 = FUNC_0(VAR_1->pITfTextInputProcessor);
        FUNC_1(VAR_1->pITfTextInputProcessor);
        FUNC_2(VAR_1->pITfThreadMgrEx);
        VAR_1->pITfTextInputProcessor = ((void*)0);
        VAR_1->pITfThreadMgrEx = ((void*)0);
    }

    return VAR_2;
}
