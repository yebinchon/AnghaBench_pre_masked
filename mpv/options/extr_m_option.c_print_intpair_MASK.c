
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m_option_t ;


 char* FUNC_0 (int *,char*,int const) ;
 char* FUNC_1 (char*,char*,int const) ;

__attribute__((used)) static char *FUNC_2(const m_option_t *VAR_0, const void *VAR_1)
{
    const int *VAR_2 = VAR_1;
    char *VAR_3 = FUNC_0(((void*)0), "%d", VAR_2[0]);
    if (VAR_2[1] != -1)
        VAR_3 = FUNC_1(VAR_3, "-%d", VAR_2[1]);
    return VAR_3;
}
