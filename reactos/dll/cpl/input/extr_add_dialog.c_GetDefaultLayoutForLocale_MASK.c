
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int INFCONTEXT ;
typedef scalar_t__ HINF ;
typedef int DWORD ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__,char*,char*,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int,char*,int ,int *) ;
 scalar_t__ FUNC_6 (char*,int *,int ,int *) ;
 int FUNC_7 (char*,int ,char*,int ) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*,char*) ;

__attribute__((used)) static DWORD
FUNC_10(DWORD VAR_3)
{
    DWORD VAR_4 = 0;
    HINF VAR_5;

    VAR_5 = FUNC_6(L"intl.inf", ((void*)0), VAR_0, ((void*)0));
    if (VAR_5 != VAR_1)
    {
        WCHAR VAR_6[VAR_2];
        INFCONTEXT VAR_7;

        FUNC_7(VAR_6, FUNC_0(VAR_6), L"%08X", VAR_3);

        if (FUNC_3(VAR_5, L"Locales", VAR_6, &VAR_7))
        {
            if (FUNC_4(&VAR_7) >= 5)
            {
                WCHAR VAR_8[VAR_2];

                if (FUNC_5(&VAR_7, 5, VAR_8, FUNC_0(VAR_8), ((void*)0)))
                {
                    if (FUNC_8(VAR_8) == 13)
                    {
                        WCHAR *VAR_9 = L":";
                        WCHAR *VAR_10;

                        VAR_10 = FUNC_9(VAR_8, VAR_9);
                        if (VAR_10 != ((void*)0))
                            VAR_10 = FUNC_9(((void*)0), VAR_9);

                        if (VAR_10 != ((void*)0))
                        {
                            VAR_4 = FUNC_1(VAR_10);
                        }
                    }
                }
            }
        }

        FUNC_2(VAR_5);
    }

    return VAR_4;
}
