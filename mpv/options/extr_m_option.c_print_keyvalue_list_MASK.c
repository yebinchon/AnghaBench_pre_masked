
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m_option_t ;


 char** FUNC_0 (void const*) ;
 char* FUNC_1 (char*,char*,char*,char*) ;
 char* FUNC_2 (int *,char*) ;
 char* FUNC_3 (char*,char*) ;

__attribute__((used)) static char *FUNC_4(const m_option_t *VAR_0, const void *VAR_1)
{
    char **VAR_2 = FUNC_0(VAR_1);
    char *VAR_3 = FUNC_2(((void*)0), "");
    for (int VAR_4 = 0; VAR_2 && VAR_2[VAR_4] && VAR_2[VAR_4 + 1]; VAR_4 += 2) {
        if (VAR_3[0])
            VAR_3 = FUNC_3(VAR_3, ",");
        VAR_3 = FUNC_1(VAR_3, "%s=%s", VAR_2[VAR_4], VAR_2[VAR_4 + 1]);
    }
    return VAR_3;
}
