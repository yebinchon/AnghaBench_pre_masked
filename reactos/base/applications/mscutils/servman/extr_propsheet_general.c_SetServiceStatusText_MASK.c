
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VOID ;
typedef int UINT ;
struct TYPE_7__ {TYPE_2__* pService; } ;
struct TYPE_5__ {scalar_t__ dwCurrentState; } ;
struct TYPE_6__ {TYPE_1__ ServiceStatusProcess; } ;
typedef TYPE_3__* PSERVICEPROPSHEET ;
typedef scalar_t__ LPWSTR ;
typedef int LPARAM ;
typedef int HWND ;


 scalar_t__ FUNC_0 (scalar_t__*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static VOID
FUNC_3(PSERVICEPROPSHEET VAR_6,
                     HWND VAR_7)
{
    LPWSTR VAR_8;
    UINT VAR_9;

    if (VAR_6->pService->ServiceStatusProcess.dwCurrentState == VAR_3)
    {
        VAR_9 = VAR_1;
    }
    else
    {
        VAR_9 = VAR_2;
    }

    if (FUNC_0(&VAR_8,
                           VAR_5,
                           VAR_9))
    {
        FUNC_2(VAR_7,
                            VAR_0,
                            VAR_4,
                            0,
                            (LPARAM)VAR_8);
        FUNC_1(VAR_8);
    }
}
