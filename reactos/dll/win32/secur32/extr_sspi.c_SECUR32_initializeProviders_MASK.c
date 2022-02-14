
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int securityPkgNames ;
typedef char WCHAR ;
typedef int PBYTE ;
typedef scalar_t__ LSTATUS ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_2 (int ,int ,int *,scalar_t__*,int ,scalar_t__*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (char) ;
 scalar_t__ FUNC_8 (char*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_9(void)
{
    HKEY VAR_7;
    LSTATUS VAR_8;


    VAR_8 = FUNC_1(VAR_1, VAR_5, 0,
     VAR_2, &VAR_7);
    if (VAR_8 == VAR_0)
    {
        WCHAR VAR_9[VAR_3];
        DWORD VAR_10 = sizeof(VAR_9), VAR_11;

        VAR_8 = FUNC_2(VAR_7, VAR_6, ((void*)0), &VAR_11,
         (PBYTE)VAR_9, &VAR_10);
        if (VAR_8 == VAR_0 && VAR_11 == VAR_4)
        {
            WCHAR *VAR_12;

            VAR_10 = VAR_10 / sizeof(WCHAR);
            for (VAR_12 = VAR_9;
              VAR_12 < VAR_9 + VAR_10; )
            {
                WCHAR *VAR_13;

                for (VAR_13 = VAR_12; *VAR_13 && *VAR_13 != ','; VAR_13++)
                    ;
                if (*VAR_13 == ',')
                    *VAR_13 = '\0';
                for (; *VAR_12 && FUNC_7(*VAR_12) && VAR_12 < VAR_9 + VAR_10;
                 VAR_12++)
                    ;
                if (*VAR_12)
                    FUNC_6(VAR_12);
                VAR_12 += FUNC_8(VAR_12) + 1;
            }
        }
        FUNC_0(VAR_7);
    }
}
