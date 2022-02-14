
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int waveOut ;
typedef int szText ;
typedef int WCHAR ;
struct TYPE_9__ {scalar_t__ wPid; scalar_t__ wMid; int cbSize; int szPname; } ;
typedef TYPE_1__ WAVEOUTCAPSW ;
typedef int UINT ;
typedef TYPE_1__ SP_DEVINFO_DATA ;
typedef int PBYTE ;
typedef scalar_t__ MMRESULT ;
typedef int LPCWSTR ;
typedef int LPCGUID ;
typedef int LPARAM ;
typedef int InfoData ;
typedef int HWND ;
typedef scalar_t__ HDEVINFO ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,scalar_t__,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_3 (int ,int ,int*,int) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int ,int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,scalar_t__,int ) ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__,int,TYPE_1__*) ;
 scalar_t__ FUNC_8 (int ,int *,int *,int) ;
 scalar_t__ FUNC_9 (scalar_t__,TYPE_1__*,int*,int,int *) ;
 scalar_t__ FUNC_10 (scalar_t__,TYPE_1__*,int ,int *,int ,int,int *) ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int FUNC_11 (TYPE_1__*,int) ;
 int VAR_22 ;
 int FUNC_12 (int ,int ) ;
 scalar_t__ FUNC_13 (int ,TYPE_1__*,int) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int ) ;

__attribute__((used)) static
void
FUNC_17(HWND VAR_23, LPCGUID VAR_24, LPCWSTR VAR_25)
{
    HDEVINFO VAR_26;
    DWORD VAR_27 = 0;
    SP_DEVINFO_DATA VAR_28;
    WCHAR VAR_29[30];
    HWND VAR_30[3];
    WAVEOUTCAPSW VAR_31;
    UINT VAR_32;
    MMRESULT VAR_33;



    VAR_32 = FUNC_14();
    if (VAR_32)
    {
        do
        {
                FUNC_11(&VAR_31, sizeof(VAR_31));
                VAR_33 = FUNC_13(VAR_27++, &VAR_31, sizeof(VAR_31));
                if (!FUNC_16(VAR_25, VAR_31.szPname, FUNC_12(VAR_16, FUNC_15(VAR_31.szPname))))
                {

                    FUNC_5(VAR_23, VAR_8, VAR_31.wPid, VAR_3);

                    FUNC_5(VAR_23, VAR_11, VAR_31.wMid, VAR_3);

                    if (VAR_31.wPid == VAR_18)
                        FUNC_4(VAR_23, VAR_10, VAR_21, 0, (LPARAM)L"WDM");


                    VAR_29[0] = L'\0';
                    if (VAR_27 - 1 == 0)
                        FUNC_3(VAR_22, VAR_14, VAR_29, sizeof(VAR_29)/sizeof(WCHAR));
                    else
                        FUNC_3(VAR_22, VAR_13, VAR_29, sizeof(VAR_29)/sizeof(WCHAR));

                    VAR_29[(sizeof(VAR_29)/sizeof(WCHAR))-1] = L'\0';

                    FUNC_4(VAR_23, VAR_9, VAR_21, 0, (LPARAM)VAR_29);
                    break;
                }
                }while(VAR_33 == VAR_17 && VAR_27 < VAR_32);
    }

    VAR_27 = 0;

    VAR_26 = FUNC_8(VAR_24, ((void*)0), ((void*)0), VAR_0|VAR_1);
    if (VAR_26 == VAR_15)
        return;

    do
    {
        FUNC_11(&VAR_28, sizeof(VAR_28));
        VAR_28.cbSize = sizeof(VAR_28);

        if (FUNC_7(VAR_26, VAR_27, &VAR_28))
        {

            if (FUNC_9(VAR_26, &VAR_28, VAR_29, sizeof(VAR_29)/sizeof(WCHAR), ((void*)0)))
                FUNC_4(VAR_23, VAR_6, VAR_21, 0, (LPARAM)VAR_29);


            if (FUNC_10(VAR_26, &VAR_28, VAR_19, ((void*)0), (PBYTE)VAR_29, sizeof(VAR_29), ((void*)0)))
                FUNC_4(VAR_23, VAR_4, VAR_21, 0, (LPARAM)VAR_29);




            VAR_30[0] = FUNC_1(VAR_23, VAR_7);
            VAR_30[1] = FUNC_1(VAR_23, VAR_12);
            VAR_30[2] = FUNC_1(VAR_23, VAR_5);
            FUNC_0(VAR_30, VAR_26, &VAR_28);
            break;
        }

        if (FUNC_2() == VAR_2)
            break;

        VAR_27++;
    }while(VAR_20);


    FUNC_6(VAR_26);
}
