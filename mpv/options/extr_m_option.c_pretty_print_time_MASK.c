
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m_option_t ;


 scalar_t__ FUNC_0 (int const*) ;
 double VAR_0 ;
 char* FUNC_1 (double,int) ;
 char* FUNC_2 (int *,char*) ;

__attribute__((used)) static char *FUNC_3(const m_option_t *VAR_1, const void *VAR_2)
{
    double VAR_3 = *(double *)VAR_2;
    if (VAR_3 == VAR_0 && FUNC_0(VAR_1))
        return FUNC_2(((void*)0), "no");
    return FUNC_1(VAR_3, 0);
}
