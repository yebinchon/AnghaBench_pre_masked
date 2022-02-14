
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int name ;
typedef char* LPCSTR ;
typedef int LPBYTE ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int,char*,int*,int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,char*,int ,int,int *) ;
 scalar_t__ FUNC_3 (int ,char*,int *,int *,int ,int*) ;
 scalar_t__ FUNC_4 (char*,char* const) ;
 size_t FUNC_5 (char* const) ;

__attribute__((used)) static BOOL FUNC_6(HKEY VAR_4, const LPCSTR *VAR_5)
{
    char VAR_6[64];
    DWORD VAR_7 = 0;
    DWORD VAR_8 = sizeof(VAR_6);
    BOOL VAR_9 = VAR_1;

    if (VAR_5[0] == ((void*)0))
    {

       char *VAR_10;
       if (FUNC_3(VAR_4, "Identifier", ((void*)0), ((void*)0), (LPBYTE) VAR_6, &VAR_8) != VAR_0)
           return VAR_1;
       for (VAR_10 = VAR_6; VAR_10 < VAR_6 + FUNC_5(VAR_6) - 6 && ! VAR_9; VAR_10++)
       {
           char VAR_11 = VAR_10[6];
           VAR_10[6] = '\0';
           VAR_9 = (FUNC_4(VAR_10, "VMware") == 0);
           VAR_10[6] = VAR_11;
       }
       return VAR_9;
    }

    while (FUNC_1(VAR_4, VAR_7, VAR_6, &VAR_8, ((void*)0), ((void*)0), ((void*)0), ((void*)0)) == VAR_0 &&
           ! VAR_9) {
        char VAR_12 = VAR_6[FUNC_5(VAR_5[0])];
        VAR_6[FUNC_5(VAR_5[0])] = '\0';
        if (FUNC_4(VAR_6, VAR_5[0]) == 0) {
            HKEY VAR_13;
            VAR_6[FUNC_5(VAR_5[0])] = VAR_12;
            if (FUNC_2(VAR_4, VAR_6, 0, VAR_2 | VAR_3, &VAR_13) == VAR_0) {
                VAR_9 = FUNC_6(VAR_13, VAR_5 + 1);
                FUNC_0(VAR_13);
            }
        }

        VAR_8 = sizeof(VAR_6);
        VAR_7++;
    }

    return VAR_9;
}
