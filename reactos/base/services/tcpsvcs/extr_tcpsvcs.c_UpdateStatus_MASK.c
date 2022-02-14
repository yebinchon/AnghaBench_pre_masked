
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char WCHAR ;
typedef int VOID ;
struct TYPE_5__ {scalar_t__ dwCheckPoint; scalar_t__ dwCurrentState; } ;
struct TYPE_4__ {TYPE_3__ servStatus; int hStatus; } ;
typedef TYPE_1__* PSERVICEINFO ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 int FUNC_3 (char*,int,char*,scalar_t__,scalar_t__) ;

__attribute__((used)) static VOID
FUNC_4(PSERVICEINFO VAR_2,
             DWORD VAR_3,
             DWORD VAR_4)
{
    WCHAR VAR_5[50];

    if (VAR_4 > 0)
        VAR_2->servStatus.dwCheckPoint += VAR_4;
    else
        VAR_2->servStatus.dwCheckPoint = VAR_4;

    if (VAR_3 > 0)
        VAR_2->servStatus.dwCurrentState = VAR_3;

    FUNC_3(VAR_5,
               49,
               L"Service state 0x%lx, CheckPoint %lu",
               VAR_2->servStatus.dwCurrentState,
               VAR_2->servStatus.dwCheckPoint);
    FUNC_1(VAR_5, 0, 0, VAR_1);

    if (!FUNC_2(VAR_2->hStatus, &VAR_2->servStatus))
        FUNC_1(L"Cannot set service status", FUNC_0(), 0, VAR_0);
}
