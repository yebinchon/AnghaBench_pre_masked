
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int szBuffer ;
typedef int WCHAR ;
typedef int UINT ;
struct TYPE_2__ {int OSConfigurationCount; int TimeOut; scalar_t__ szDefaultPos; scalar_t__ szDefaultOS; int UseBootIni; } ;
typedef scalar_t__ LRESULT ;
typedef int LPARAM ;
typedef int HWND ;
typedef int HRESULT ;
typedef int FILE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,scalar_t__,int) ;
 scalar_t__ FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 TYPE_1__ VAR_12 ;
 int FUNC_6 (int*,int,char*) ;
 int FUNC_7 (int*,int,int*) ;
 int VAR_13 ;
 int FUNC_8 (int*,char*,int) ;
 int * FUNC_9 (int*,char*) ;
 int FUNC_10 (int*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 scalar_t__ FUNC_13 (int*,int,int *) ;
 int FUNC_14 (scalar_t__,int*) ;
 int FUNC_15 (int*) ;

__attribute__((used)) static BOOL
FUNC_16(WCHAR *VAR_14, HWND VAR_15)
{
    WCHAR VAR_16[VAR_0];
    HWND VAR_17;
    FILE * VAR_18;
    UINT VAR_19;
    LRESULT VAR_20;
    HRESULT VAR_21;

    VAR_21 = FUNC_7(VAR_16, sizeof(VAR_16), VAR_14);
    if (FUNC_1(VAR_21))
        return VAR_1;

    VAR_21 = FUNC_6(VAR_16, sizeof(VAR_16), L"freeldr.ini");
    if (FUNC_1(VAR_21))
        return VAR_1;

    VAR_18 = FUNC_9(VAR_16, L"rt");
    if (!VAR_18)
    {
        VAR_21 = FUNC_7(VAR_16, sizeof(VAR_16), VAR_14);
        if (FUNC_1(VAR_21))
            return VAR_1;

        VAR_21 = FUNC_6(VAR_16, sizeof(VAR_16), L"boot.ini");
        if (FUNC_1(VAR_21))
            return VAR_1;

        VAR_18 = FUNC_9(VAR_16, L"rt");
        if (!VAR_18)
            return VAR_1;
    }

    VAR_17 = FUNC_2(VAR_15, VAR_5);

    while(!FUNC_12(VAR_18))
    {
        if (FUNC_13(VAR_16, VAR_0, VAR_18))
        {
            VAR_19 = FUNC_15(VAR_16);
            if (VAR_19 > 1)
            {
                VAR_16[VAR_19] = L'\0';
                VAR_16[VAR_19 - 1] = L'\0';

                VAR_20 = FUNC_4(VAR_17, VAR_7, 0, (LPARAM)VAR_16);

                if (VAR_16[0] == L'[')
                    continue;

                if (!FUNC_8(VAR_16, L"timeout=", 8))
                {
                    VAR_12.TimeOut = FUNC_10(&VAR_16[8]);
                    continue;
                }

                if (!FUNC_8(VAR_16, L"default=", 8))
                {
                    FUNC_14(VAR_12.szDefaultOS, &VAR_16[8]);
                    continue;
                }
                if (VAR_20 != VAR_8)
                    FUNC_3(VAR_17, VAR_11, VAR_20, 1);
                VAR_12.OSConfigurationCount++;
            }
        }
    }

    FUNC_11(VAR_18);
    VAR_12.UseBootIni = VAR_13;

    VAR_20 = FUNC_4(VAR_17, VAR_9, 3, (LPARAM)VAR_12.szDefaultOS);
    if (VAR_20 != VAR_8)
    {
       VAR_12.szDefaultPos = VAR_20;
       FUNC_3(VAR_17, VAR_10, VAR_20, 0);
    }

    FUNC_5(VAR_15, VAR_6, VAR_12.TimeOut, VAR_1);
    if (VAR_12.OSConfigurationCount < 2)
    {
        FUNC_0(FUNC_2(VAR_15, VAR_4), VAR_1);
        FUNC_0(FUNC_2(VAR_15, VAR_3), VAR_1);
        FUNC_0(FUNC_2(VAR_15, VAR_2), VAR_1);
    }
    return VAR_13;
}
