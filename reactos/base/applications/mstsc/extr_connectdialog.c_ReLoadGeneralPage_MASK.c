
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VOID ;
struct TYPE_3__ {int hGeneralPage; int pRdpSettings; } ;
typedef TYPE_1__* PINFO ;
typedef scalar_t__ LPWSTR ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static VOID
FUNC_2(PINFO VAR_2)
{
    LPWSTR VAR_3;


    VAR_3 = FUNC_0(VAR_2->pRdpSettings,
                                   L"full address");
    if (VAR_3)
    {
        FUNC_1(VAR_2->hGeneralPage,
                        VAR_1,
                        VAR_3);
    }


    VAR_3 = FUNC_0(VAR_2->pRdpSettings,
                                   L"username");
    if (VAR_3)
    {
        FUNC_1(VAR_2->hGeneralPage,
                        VAR_0,
                        VAR_3);
    }
}
