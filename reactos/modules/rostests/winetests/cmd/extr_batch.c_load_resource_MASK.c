
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HRSRC ;
typedef int DWORD ;


 int * FUNC_0 (int *,char const*,char const*) ;
 int FUNC_1 () ;
 char* FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,char*,char const*,int ) ;

__attribute__((used)) static DWORD FUNC_5(const char *VAR_0, const char *VAR_1, const char **VAR_2)
{
    const char *VAR_3;
    HRSRC VAR_4;
    DWORD VAR_5;

    VAR_4 = FUNC_0(((void*)0), VAR_0, VAR_1);
    FUNC_4(VAR_4 != ((void*)0), "Could not find resource %s: %u\n", VAR_0, FUNC_1());
    if(!VAR_4)
        return 0;

    VAR_3 = FUNC_2(((void*)0), VAR_4);
    VAR_5 = FUNC_3(((void*)0), VAR_4);
    while(VAR_5 && !VAR_3[VAR_5-1])
        VAR_5--;

    *VAR_2 = VAR_3;
    return VAR_5;
}
