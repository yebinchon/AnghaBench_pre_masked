
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m_option_t ;


 char* FUNC_0 (int const*,int*) ;
 char* FUNC_1 (char*,char*,char*,char const*) ;
 char* FUNC_2 (int *,char*) ;

__attribute__((used)) static char *FUNC_3(const m_option_t *VAR_0, const void *VAR_1)
{
    int VAR_2 = *(int *)VAR_1;
    char *VAR_3 = FUNC_2(((void*)0), "");
    while (1) {
        const char *VAR_4 = FUNC_0(VAR_0, &VAR_2);
        if (!VAR_4)
            break;

        VAR_3 = FUNC_1(VAR_3, "%s%s", VAR_3[0] ? "+" : "", VAR_4);
    }
    return VAR_3;
}
