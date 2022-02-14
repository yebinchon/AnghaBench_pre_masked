
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m_option_t ;


 double FUNC_0 (void const*) ;
 scalar_t__ FUNC_1 (double) ;
 char* FUNC_2 (int const*,void const*) ;
 char* FUNC_3 (int *,char*,double) ;

__attribute__((used)) static char *FUNC_4(const m_option_t *VAR_0, const void *VAR_1)
{
    double VAR_2 = FUNC_0(VAR_1);
    if (FUNC_1(VAR_2))
        return FUNC_2(VAR_0, VAR_1);
    return FUNC_3(((void*)0), "%.3f", VAR_2);
}
