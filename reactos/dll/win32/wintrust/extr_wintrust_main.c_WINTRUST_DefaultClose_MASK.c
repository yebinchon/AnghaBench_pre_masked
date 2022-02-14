
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* hWVTStateData; } ;
typedef TYPE_2__ WINTRUST_DATA ;
struct TYPE_7__ {TYPE_3__* pPDSip; } ;
struct TYPE_9__ {struct TYPE_9__* psPfns; TYPE_1__ u; struct TYPE_9__* padwTrustStepErrors; int (* pfnCleanupPolicy ) (TYPE_3__*) ;} ;
typedef int LONG ;
typedef int HWND ;
typedef int GUID ;
typedef int DWORD ;
typedef TYPE_3__ CRYPT_PROVIDER_DATA ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;

__attribute__((used)) static LONG FUNC_4(HWND VAR_1, GUID *VAR_2,
 WINTRUST_DATA *VAR_3)
{
    DWORD VAR_4 = VAR_0;
    CRYPT_PROVIDER_DATA *VAR_5 = VAR_3->hWVTStateData;

    FUNC_0("(%p, %s, %p)\n", VAR_1, FUNC_2(VAR_2), VAR_3);

    if (VAR_5)
    {
        if (VAR_5->psPfns->pfnCleanupPolicy)
            VAR_4 = VAR_5->psPfns->pfnCleanupPolicy(VAR_5);

        FUNC_1(VAR_5->padwTrustStepErrors);
        FUNC_1(VAR_5->u.pPDSip);
        FUNC_1(VAR_5->psPfns);
        FUNC_1(VAR_5);
        VAR_3->hWVTStateData = ((void*)0);
    }
    FUNC_0("returning %08x\n", VAR_4);
    return VAR_4;
}
