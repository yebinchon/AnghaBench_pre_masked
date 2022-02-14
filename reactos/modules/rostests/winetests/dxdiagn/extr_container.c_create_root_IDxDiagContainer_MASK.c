
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int params ;
struct TYPE_3__ {int dwSize; int * pReserved; int bAllowWHQLChecks; int dwDxDiagHeaderVersion; } ;
typedef int LPVOID ;
typedef int HRESULT ;
typedef TYPE_1__ DXDIAG_INIT_PARAMS ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ,int *,int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static BOOL FUNC_5(void)
{
    HRESULT VAR_8;
    DXDIAG_INIT_PARAMS VAR_9;

    VAR_8 = FUNC_0(&VAR_1, ((void*)0), VAR_0,
                          &VAR_4, (LPVOID*)&VAR_7);
    if (FUNC_4(VAR_8))
    {
        VAR_9.dwSize = sizeof(VAR_9);
        VAR_9.dwDxDiagHeaderVersion = VAR_2;
        VAR_9.bAllowWHQLChecks = VAR_3;
        VAR_9.pReserved = ((void*)0);
        VAR_8 = FUNC_2(VAR_7, &VAR_9);
        if (FUNC_4(VAR_8))
        {
            VAR_8 = FUNC_1(VAR_7, &VAR_6);
            if (FUNC_4(VAR_8))
                return VAR_5;
        }
        FUNC_3(VAR_7);
    }
    return VAR_3;
}
