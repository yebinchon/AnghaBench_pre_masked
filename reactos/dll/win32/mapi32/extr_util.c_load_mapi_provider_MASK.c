
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;
typedef int * LPWSTR ;
typedef int LPCWSTR ;
typedef int * LPBYTE ;
typedef int HMODULE ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *,scalar_t__) ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (int ,int ,int *,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,char const*) ;

__attribute__((used)) static void FUNC_9(HKEY VAR_3, LPCWSTR VAR_4, HMODULE *VAR_5)
{
    static const WCHAR VAR_6[] = {'m','a','p','i','3','2','.','d','l','l',0 };

    DWORD VAR_7, VAR_8 = 0;
    LPWSTR VAR_9;


    if ((FUNC_5(VAR_3, VAR_4, ((void*)0), &VAR_7, ((void*)0), &VAR_8) == VAR_0) &&
        ((VAR_7 == VAR_2) || (VAR_7 == VAR_1)) && (VAR_8 > 0))
    {
        VAR_9 = FUNC_2(FUNC_1(), 0, VAR_8);

        if (VAR_9)
        {
            FUNC_5(VAR_3, VAR_4, ((void*)0), ((void*)0), (LPBYTE)VAR_9, &VAR_8);


            if (FUNC_8(VAR_9, VAR_6) != 0)
            {
                if (VAR_7 == VAR_1)
                {
                    DWORD VAR_10;
                    LPWSTR VAR_11;


                    VAR_10 = FUNC_0(VAR_9, ((void*)0), 0);
                    VAR_11 = FUNC_2(FUNC_1(), 0, sizeof(WCHAR) * VAR_10 + 1);

                    if (VAR_11)
                    {
                        FUNC_0(VAR_9, VAR_11, VAR_10 + 1);

                        FUNC_3(FUNC_1(), 0, VAR_9);
                        VAR_9 = VAR_11;
                    }
                }


                FUNC_6("loading %s\n", FUNC_7(VAR_9));
                *VAR_5 = FUNC_4(VAR_9);
            }

            FUNC_3(FUNC_1(), 0, VAR_9);
        }
    }
}
