
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__* PWCHAR ;
typedef int HANDLE ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (char*,scalar_t__*,scalar_t__,scalar_t__) ;
 int FUNC_1 () ;
 void* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,scalar_t__*) ;
 scalar_t__* FUNC_4 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__* FUNC_5 (scalar_t__*,scalar_t__) ;
 int FUNC_6 (scalar_t__*,scalar_t__*,scalar_t__) ;

PWCHAR *FUNC_7( HANDLE VAR_1, PWCHAR VAR_2 ) {
    PWCHAR VAR_3, VAR_4, VAR_5;
    PWCHAR *VAR_6;
    DWORD VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_3 = FUNC_4(VAR_1, VAR_2, &VAR_7, &VAR_8);
    if (!VAR_3) return ((void*)0);
    if (VAR_7 != VAR_0)
    {
        FUNC_0("Type mismatch for %S (%d != %d)\n", VAR_2, VAR_7, VAR_0);


    }

    VAR_4 = FUNC_5(VAR_3, VAR_8);
    FUNC_3(FUNC_1(), 0, VAR_3);
    if (!VAR_4) return ((void*)0);

    for (VAR_5 = VAR_4, VAR_9 = 0; *VAR_5; VAR_5++, VAR_9++) while (*VAR_5) VAR_5++;

    VAR_6 = FUNC_2(FUNC_1(), 0, (VAR_9 + 1) * sizeof(PWCHAR));
    if (!VAR_6)
    {
        FUNC_3(FUNC_1(), 0, VAR_4);
        return ((void*)0);
    }

    for (VAR_5 = VAR_4, VAR_10 = 0; *VAR_5; VAR_5++, VAR_10++)
    {
        PWCHAR VAR_11 = VAR_5;

        for (VAR_9 = 0; *VAR_5; VAR_9++, VAR_5++);

        VAR_6[VAR_10] = FUNC_2(FUNC_1(), 0, VAR_9 * sizeof(WCHAR));
        FUNC_6(VAR_6[VAR_10], VAR_11, VAR_9 * sizeof(WCHAR));
    }

    VAR_6[VAR_10] = ((void*)0);

    FUNC_3(FUNC_1(), 0, VAR_4);

    return VAR_6;
}
