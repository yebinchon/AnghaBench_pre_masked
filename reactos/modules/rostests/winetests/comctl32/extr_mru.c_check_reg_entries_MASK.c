
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff ;
typedef int LPBYTE ;
typedef int * HKEY ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int **) ;
 int FUNC_1 (int *,char*,int *,int*,int ,int*) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (char*,char const*) ;
 unsigned int FUNC_4 (char const*) ;

__attribute__((used)) static void FUNC_5(const char *VAR_3, const char**VAR_4)
{
    char VAR_5[128];
    HKEY VAR_6 = ((void*)0);
    DWORD VAR_7, VAR_8, VAR_9;
    unsigned int VAR_10;

    FUNC_2(!FUNC_0(VAR_0, VAR_2, &VAR_6),
       "Couldn't open test key \"%s\"\n", VAR_2);
    if (!VAR_6) return;

    VAR_7 = VAR_1;
    VAR_8 = sizeof(VAR_5);
    VAR_5[0] = '\0';
    VAR_9 = FUNC_1(VAR_6, "MRUList", ((void*)0), &VAR_7, (LPBYTE)VAR_5, &VAR_8);

    FUNC_2(!VAR_9 && VAR_5[0], "Checking MRU: got %d from RegQueryValueExW\n", VAR_9);
    if(VAR_9 || !VAR_5[0]) return;

    FUNC_2(FUNC_3(VAR_5, VAR_3) == 0, "Checking MRU: Expected list %s, got %s\n",
       VAR_3, VAR_5);
    if(FUNC_3(VAR_5, VAR_3)) return;

    for (VAR_10 = 0; VAR_10 < FUNC_4(VAR_3); VAR_10++)
    {
        char VAR_11[2];
        VAR_11[0] = VAR_3[VAR_10];
        VAR_11[1] = '\0';
        VAR_7 = VAR_1;
        VAR_8 = sizeof(VAR_5);
        VAR_5[0] = '\0';
        VAR_9 = FUNC_1(VAR_6, VAR_11, ((void*)0), &VAR_7, (LPBYTE)VAR_5, &VAR_8);
        FUNC_2(!VAR_9 && VAR_5[0],
           "Checking MRU item %d ('%c'): got %d from RegQueryValueExW\n",
           VAR_10, VAR_3[VAR_10], VAR_9);
        if(VAR_9 || !VAR_5[0]) return;
        FUNC_2(!FUNC_3(VAR_5, VAR_4[VAR_3[VAR_10]-'a']),
           "Checking MRU item %d ('%c'): expected \"%s\", got \"%s\"\n",
           VAR_10, VAR_3[VAR_10], VAR_5, VAR_4[VAR_3[VAR_10] - 'a']);
    }
}
