
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wintrust_step {int dummy; } ;
struct TYPE_11__ {TYPE_3__* hWVTStateData; } ;
typedef TYPE_2__ WINTRUST_DATA ;
struct TYPE_10__ {TYPE_3__* pPDSip; } ;
struct TYPE_12__ {struct TYPE_12__* psPfns; TYPE_1__ u; struct TYPE_12__* padwTrustStepErrors; int dwRegPolicySettings; int * pgActionID; scalar_t__ hWndParent; TYPE_2__* pWintrustData; } ;
typedef int LONG ;
typedef scalar_t__ HWND ;
typedef int GUID ;
typedef int DWORD ;
typedef TYPE_3__ CRYPT_PROVIDER_DATA ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 () ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (char*,scalar_t__,...) ;
 int FUNC_3 (struct wintrust_step*,TYPE_3__*) ;
 TYPE_3__* FUNC_4 () ;
 int FUNC_5 (struct wintrust_step*,int ,TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,TYPE_3__*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static LONG FUNC_10(HWND VAR_3, GUID *VAR_4,
 WINTRUST_DATA *VAR_5)
{
    DWORD VAR_6 = VAR_1, VAR_7 = 0;
    CRYPT_PROVIDER_DATA *VAR_8;
    BOOL VAR_9;
    struct wintrust_step VAR_10[5];

    FUNC_2("(%p, %s, %p)\n", VAR_3, FUNC_9(VAR_4), VAR_5);

    VAR_8 = FUNC_4();
    if (!VAR_8)
        return VAR_0;

    VAR_9 = FUNC_8(VAR_4, VAR_8->psPfns);
    if (!VAR_9)
    {
        VAR_6 = FUNC_1();
        goto error;
    }

    VAR_5->hWVTStateData = VAR_8;
    VAR_8->pWintrustData = VAR_5;
    if (VAR_3 == VAR_2)
        VAR_8->hWndParent = FUNC_0();
    else
        VAR_8->hWndParent = VAR_3;
    VAR_8->pgActionID = VAR_4;
    FUNC_7(&VAR_8->dwRegPolicySettings);

    VAR_7 = FUNC_3(VAR_10,
     VAR_8->psPfns);
    VAR_6 = FUNC_5(VAR_10, VAR_7, VAR_8);
    goto done;

error:
    if (VAR_8)
    {
        FUNC_6(VAR_8->padwTrustStepErrors);
        FUNC_6(VAR_8->u.pPDSip);
        FUNC_6(VAR_8->psPfns);
        FUNC_6(VAR_8);
    }
done:
    FUNC_2("returning %08x\n", VAR_6);
    return VAR_6;
}
