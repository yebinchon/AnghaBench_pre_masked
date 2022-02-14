
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_8__ {int lpBinaryPathName; int lpDisplayName; } ;
struct TYPE_7__ {scalar_t__ dwCurrentState; } ;
typedef TYPE_1__ SERVICE_STATUS ;
typedef int * SC_HANDLE ;
typedef TYPE_2__* LPQUERY_SERVICE_CONFIGW ;
typedef int LPARAM ;
typedef int INT_PTR ;
typedef int HWND ;
typedef int DWORD ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 TYPE_2__* FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ,int ,TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_7 (int *,int *,int ) ;
 int * FUNC_8 (int *,char*,int) ;
 scalar_t__ FUNC_9 (int *,TYPE_2__*,int ,int *) ;
 scalar_t__ FUNC_10 (int *,TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_11 (int ,int ,int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_14 (int *,char*,int ,int ) ;

INT_PTR
FUNC_15(HWND VAR_15)
{
    DWORD VAR_16;
    SC_HANDLE VAR_17, VAR_18;
    LPQUERY_SERVICE_CONFIGW VAR_19;
    WCHAR VAR_20[2 * VAR_5];
    HWND VAR_21;
    SERVICE_STATUS VAR_22;

    VAR_14 = VAR_15;


    VAR_17 = FUNC_7(((void*)0), ((void*)0), VAR_6);
    if (VAR_17 != ((void*)0))
    {

        VAR_18 = FUNC_8(VAR_17, L"Vcdrom", VAR_7 | VAR_8);
        if (VAR_18 != ((void*)0))
        {

            if (!FUNC_9(VAR_18, ((void*)0), 0, &VAR_16) &&
                FUNC_3() == VAR_0)
            {

                VAR_19 = FUNC_5(FUNC_4(), 0, VAR_16);

                if (FUNC_9(VAR_18, VAR_19, VAR_16, &VAR_16))
                {

                    FUNC_14(VAR_20, L"%s:\n(%s)", VAR_19->lpDisplayName, VAR_19->lpBinaryPathName);
                    VAR_21 = FUNC_2(VAR_14, VAR_2);
                    FUNC_11(VAR_21, VAR_13, 0, (LPARAM)VAR_20);
                }

                FUNC_6(FUNC_4(), 0, VAR_19);
            }


            if (FUNC_10(VAR_18, &VAR_22))
            {
                if (VAR_22.dwCurrentState != VAR_9 &&
                    VAR_22.dwCurrentState != VAR_10)
                {
                    FUNC_12(VAR_1);
                }
                else
                {
                    FUNC_12(VAR_12);
                }
            }

            FUNC_0(VAR_18);
        }

        FUNC_0(VAR_17);
    }


    {
        VAR_21 = FUNC_2(VAR_14, VAR_3);
        FUNC_1(VAR_21, VAR_1);
        VAR_21 = FUNC_2(VAR_14, VAR_4);
        FUNC_1(VAR_21, VAR_1);
    }


    FUNC_13(VAR_15, VAR_11);

    return VAR_12;
}
