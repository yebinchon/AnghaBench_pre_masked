
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ cbCtlContext; int pbCtlContext; } ;
typedef TYPE_1__* PCCTL_CONTEXT ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,scalar_t__) ;

__attribute__((used)) static BOOL FUNC_1(PCCTL_CONTEXT VAR_2, DWORD VAR_3,
 DWORD VAR_4, const void *VAR_5)
{
    BOOL VAR_6;

    if (VAR_5)
    {
        PCCTL_CONTEXT VAR_7 = VAR_5;

        if (VAR_2->cbCtlContext == VAR_7->cbCtlContext)
        {
            if (VAR_7->cbCtlContext)
                VAR_6 = !FUNC_0(VAR_2->pbCtlContext, VAR_7->pbCtlContext,
                 VAR_7->cbCtlContext);
            else
                VAR_6 = VAR_1;
        }
        else
            VAR_6 = VAR_0;
    }
    else
        VAR_6 = VAR_0;
    return VAR_6;
}
