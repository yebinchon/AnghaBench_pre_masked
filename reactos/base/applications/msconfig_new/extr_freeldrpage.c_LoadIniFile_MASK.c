
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int WCHAR ;
typedef scalar_t__ ULONG ;
struct TYPE_5__ {int OSConfigurationCount; int TimeOut; scalar_t__ szDefaultPos; int szDefaultOS; int UseBootIni; } ;
struct TYPE_4__ {scalar_t__ cx; } ;
typedef int SIZE_T ;
typedef TYPE_1__ SIZE ;
typedef scalar_t__ LRESULT ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int LONG ;
typedef int HWND ;
typedef scalar_t__ HFONT ;
typedef int HDC ;
typedef int FILE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (int*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int *,int) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int*,int,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_6 (int ,int*) ;
 scalar_t__ FUNC_7 (int ,int,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ,scalar_t__) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,scalar_t__,int) ;
 scalar_t__ FUNC_12 (int ,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ) ;
 scalar_t__ FUNC_15 (int ,scalar_t__) ;
 scalar_t__ FUNC_16 (int ,int ,int ,int ) ;
 int FUNC_17 (int ,int ,int ,int ) ;
 TYPE_2__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_18 (int*,char*,int) ;
 int * FUNC_19 (int *,char*,int ) ;
 int FUNC_20 (int*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *) ;
 scalar_t__ FUNC_23 (int*,int ,int *) ;
 int FUNC_24 (int ,scalar_t__) ;
 int FUNC_25 (int ,int*) ;
 int FUNC_26 (int*) ;

__attribute__((used)) static BOOL
FUNC_27(HWND VAR_11,
            LPCWSTR VAR_12)
{
    DWORD VAR_13;
    LPWSTR VAR_14;
    FILE* VAR_15;

    WCHAR VAR_16[512];
    HWND VAR_17;
    SIZE_T VAR_18;
    LRESULT VAR_19;

    SIZE VAR_20;
    LONG VAR_21;

    HDC VAR_22;
    HFONT VAR_23, VAR_24;





    VAR_13 = FUNC_2(VAR_12, ((void*)0), 0);
    VAR_14 = (LPWSTR)FUNC_12(0, VAR_13 * sizeof(WCHAR));
    FUNC_2(VAR_12, VAR_14, VAR_13);

    VAR_15 = FUNC_19(VAR_14, L"rt", VAR_10);
    FUNC_13(VAR_14);

    if (!VAR_15) return VAR_0;

    VAR_17 = FUNC_4(VAR_11, VAR_4);

    VAR_22 = FUNC_3(VAR_17);
    VAR_23 = (HFONT)FUNC_16(VAR_17, VAR_9, 0, 0);
    VAR_24 = (HFONT)FUNC_15(VAR_22, VAR_23);

    while (!FUNC_22(VAR_15) && FUNC_23(VAR_16, FUNC_0(VAR_16), VAR_15))
    {
        VAR_18 = FUNC_26(VAR_16);
        if (VAR_18 > 1)
        {

            VAR_16[VAR_18-1] = VAR_16[VAR_18] = L'\0';

            VAR_19 = FUNC_6(VAR_17, VAR_16);

            FUNC_5(VAR_22, VAR_16, (int)FUNC_26(VAR_16), &VAR_20);
            VAR_21 = FUNC_24((LONG)FUNC_8(VAR_17), VAR_20.cx + 5);
            FUNC_10(VAR_17, VAR_21);

            if (VAR_16[0] == L'[')
                continue;

            if (!FUNC_18(VAR_16, L"timeout=", 8))
            {
                VAR_7.TimeOut = FUNC_20(&VAR_16[8]);
                continue;
            }

            if (!FUNC_18(VAR_16, L"default=", 8))
            {
                FUNC_25(VAR_7.szDefaultOS, &VAR_16[8]);
                continue;
            }
            if (VAR_19 != VAR_6)
                FUNC_11(VAR_17, VAR_19, 1);

            VAR_7.OSConfigurationCount++;
        }
    }

    FUNC_15(VAR_22, VAR_24);
    FUNC_14(VAR_17, VAR_22);

    FUNC_21(VAR_15);
    VAR_7.UseBootIni = VAR_8;





    VAR_19 = FUNC_7(VAR_17, 3, VAR_7.szDefaultOS);
    if (VAR_19 != VAR_6)
    {
        VAR_7.szDefaultPos = (ULONG)VAR_19;
        FUNC_9(VAR_17, VAR_19);

    }

    FUNC_17(VAR_11, VAR_5, VAR_7.TimeOut, VAR_0);
    if (VAR_7.OSConfigurationCount < 2)
    {
        FUNC_1(FUNC_4(VAR_11, VAR_3), VAR_0);
        FUNC_1(FUNC_4(VAR_11, VAR_2), VAR_0);
        FUNC_1(FUNC_4(VAR_11, VAR_1), VAR_0);
    }

    return VAR_8;
}
