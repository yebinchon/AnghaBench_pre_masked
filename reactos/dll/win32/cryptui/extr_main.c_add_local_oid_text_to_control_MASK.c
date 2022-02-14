
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct OIDToString {int id; } ;
typedef int parFmt ;
typedef char WCHAR ;
struct TYPE_3__ {int cbSize; int dxStartIndent; int dwMask; } ;
typedef TYPE_1__ PARAFORMAT2 ;
typedef int LPWSTR ;
typedef char* LPCSTR ;
typedef int HWND ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,char*) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*,int,TYPE_1__*) ;
 int FUNC_5 (int ,char*,int) ;
 struct OIDToString* FUNC_6 (char*) ;
 int VAR_5 ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*) ;
 char* FUNC_10 (char*,char,int) ;

__attribute__((used)) static void FUNC_11(HWND VAR_6, LPCSTR VAR_7)
{
    struct OIDToString *VAR_8;
    WCHAR VAR_9 = '\n';
    PARAFORMAT2 VAR_10;

    VAR_10.cbSize = sizeof(VAR_10);
    VAR_10.dwMask = VAR_3;
    VAR_10.dxStartIndent = VAR_2 * 3;
    if ((VAR_8 = FUNC_6(VAR_7)))
    {
        WCHAR *VAR_11, *VAR_12, *VAR_13;
        BOOL VAR_14 = VAR_0;
        int VAR_15;

        VAR_15 = FUNC_3(VAR_5, VAR_8->id, (LPWSTR)&VAR_11, 0);
        VAR_13 = VAR_11;
        do {
            if ((VAR_12 = FUNC_10(VAR_13, '\n', VAR_15)))
            {
                WCHAR VAR_16[VAR_1];

                VAR_14 = VAR_4;







                FUNC_7(VAR_16, VAR_13, VAR_12 - VAR_13 + 1);
                FUNC_4(VAR_6, VAR_16,
                 VAR_12 - VAR_13, &VAR_10);
                VAR_13 = VAR_12 + 1;
                FUNC_5(VAR_6, &VAR_9, 1);
            }
            else if (VAR_14 && *VAR_13)
            {

                FUNC_4(VAR_6, VAR_13,
                 VAR_15 - (VAR_13 - VAR_11), &VAR_10);
                FUNC_5(VAR_6, &VAR_9, 1);
            }
        } while (VAR_12);
        if (!VAR_14)
        {
            FUNC_4(VAR_6, VAR_11, VAR_15, &VAR_10);
            FUNC_5(VAR_6, &VAR_9, 1);
        }
    }
    else
    {
        WCHAR *VAR_17 = FUNC_1(FUNC_0(), 0,
         (FUNC_9(VAR_7) + 1) * sizeof(WCHAR));

        if (VAR_17)
        {
            LPCSTR VAR_18;
            WCHAR *VAR_19;

            for (VAR_18 = VAR_7, VAR_19 = VAR_17; *VAR_18; VAR_18++, VAR_19++)
                *VAR_19 = *VAR_18;
            *VAR_19 = 0;
            FUNC_4(VAR_6, VAR_17, FUNC_8(VAR_17),
             &VAR_10);
            FUNC_5(VAR_6, &VAR_9, 1);
            FUNC_2(FUNC_0(), 0, VAR_17);
        }
    }
}
