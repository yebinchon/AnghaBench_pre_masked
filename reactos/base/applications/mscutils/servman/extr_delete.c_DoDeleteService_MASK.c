
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* pCurrentService; } ;
struct TYPE_4__ {int lpServiceName; } ;
typedef scalar_t__ SC_HANDLE ;
typedef TYPE_2__* PMAIN_WND_INFO ;
typedef int LPWSTR ;
typedef int HWND ;
typedef int BOOL ;


 scalar_t__ FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *,int ) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static BOOL
FUNC_7(PMAIN_WND_INFO VAR_6,
                HWND VAR_7)
{
    SC_HANDLE VAR_8;
    SC_HANDLE VAR_9;
    BOOL VAR_10 = VAR_1;

    VAR_8 = FUNC_5(((void*)0),
                                ((void*)0),
                                VAR_3);
    if (VAR_8)
    {
        VAR_9 = FUNC_6(VAR_8,
                           VAR_6->pCurrentService->lpServiceName,
                           VAR_0);
        if (VAR_9)
        {
            if (FUNC_2(VAR_9))
            {
                LPWSTR VAR_11;


                if (FUNC_0(&VAR_11,
                                       VAR_5,
                                       VAR_2))
                {
                    FUNC_3(VAR_11);

                    FUNC_4(VAR_11);
                }

                VAR_10 = VAR_4;
            }

            FUNC_1(VAR_9);
        }

        FUNC_1(VAR_8);
    }

    return VAR_10;
}
