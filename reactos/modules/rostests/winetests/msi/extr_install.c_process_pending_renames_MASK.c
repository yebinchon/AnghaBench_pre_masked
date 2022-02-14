
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * LPBYTE ;
typedef scalar_t__ LONG ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_1 ;
 char* FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*,char*,int) ;
 int VAR_4 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ,int *,int *,int *,int*) ;
 int FUNC_8 (int ,int ,int ,int ,int *,int) ;
 int VAR_5 ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (int,char*,...) ;
 int VAR_6 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*,char*) ;

__attribute__((used)) static void FUNC_14(HKEY VAR_7)
{
    char *VAR_8, *VAR_9, *VAR_10, *VAR_11, *VAR_12;
    DWORD VAR_13;
    LONG VAR_14;
    BOOL VAR_15 = VAR_0;

    VAR_14 = FUNC_7(VAR_7, VAR_6, ((void*)0), ((void*)0), ((void*)0), &VAR_13);
    FUNC_11(!VAR_14, "RegQueryValueExA failed %d\n", VAR_14);

    VAR_8 = FUNC_3(FUNC_2(), 0, VAR_13 + 1);
    VAR_12 = VAR_11 = FUNC_3(FUNC_2(), VAR_1, VAR_13 + 1);

    VAR_14 = FUNC_7(VAR_7, VAR_6, ((void*)0), ((void*)0), (LPBYTE)VAR_8, &VAR_13);
    VAR_8[VAR_13] = 0;
    FUNC_11(!VAR_14, "RegQueryValueExA failed %d\n", VAR_14);
    if (VAR_14) return;

    for (VAR_9 = VAR_8; *VAR_9; VAR_9 = VAR_10 + FUNC_12(VAR_10) + 1)
    {
        DWORD VAR_16 = VAR_2;
        BOOL VAR_17;

        VAR_10 = VAR_9 + FUNC_12(VAR_9) + 1;

        if (!FUNC_13(VAR_9, "msitest"))
        {
            FUNC_10(VAR_12, VAR_9);
            VAR_12 += FUNC_12(VAR_9) + 1;
            FUNC_10(VAR_12, VAR_10);
            VAR_12 += FUNC_12(VAR_10) + 1;
            continue;
        }

        VAR_15 = VAR_5;

        if (*VAR_10 == '!')
        {
            VAR_16 |= VAR_3;
            VAR_10++;
        }
        if (VAR_9[0] == '\\' && VAR_9[1] == '?' && VAR_9[2] == '?' && VAR_9[3] == '\\') VAR_9 += 4;
        if (*VAR_10)
        {
            if (VAR_10[0] == '\\' && VAR_10[1] == '?' && VAR_10[2] == '?' && VAR_10[3] == '\\') VAR_10 += 4;
            VAR_17 = FUNC_5(VAR_9, VAR_10, VAR_16);
            FUNC_11(VAR_17, "Failed to move file %s -> %s (%u)\n", VAR_9, VAR_10, FUNC_1());
        }
        else
        {
            VAR_17 = FUNC_0(VAR_9);
            FUNC_11(VAR_17 || FUNC_9(!VAR_17) , "Failed to delete file %s (%u)\n", VAR_9, FUNC_1());
        }
    }

    FUNC_11(VAR_15, "Expected a 'msitest' entry\n");

    if (*VAR_11)
        FUNC_8(VAR_7, VAR_6, 0, VAR_4, (LPBYTE)VAR_11, VAR_12 + 1 - VAR_11);
    else
        FUNC_6(VAR_7, VAR_6);

    FUNC_4(FUNC_2(), 0, VAR_8);
    FUNC_4(FUNC_2(), 0, VAR_11);
}
