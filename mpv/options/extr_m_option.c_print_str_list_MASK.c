
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m_option_t ;


 char** FUNC_0 (void const*) ;
 char* FUNC_1 (int *,char*) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static char *FUNC_3(const m_option_t *VAR_0, const void *VAR_1)
{
    char **VAR_2 = ((void*)0);
    char *VAR_3 = ((void*)0);

    if (!(VAR_1 && FUNC_0(VAR_1)))
        return FUNC_1(((void*)0), "");
    VAR_2 = FUNC_0(VAR_1);

    for (int VAR_4 = 0; VAR_2[VAR_4]; VAR_4++) {
        if (VAR_3)
            VAR_3 = FUNC_2(VAR_3, ",");
        VAR_3 = FUNC_2(VAR_3, VAR_2[VAR_4]);
    }
    return VAR_3;
}
