
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int m_option_t ;
typedef double int64_t ;


 double VAR_0 ;
 double VAR_1 ;
 int FUNC_0 (int const*,void*) ;

__attribute__((used)) static void FUNC_1(const m_option_t *VAR_2, void *VAR_3, double VAR_4)
{
    double VAR_5 = *(int64_t *)VAR_3 * VAR_4;
    int64_t VAR_6 = VAR_5;
    if (VAR_5 < VAR_1)
        VAR_6 = VAR_1;
    if (VAR_5 > VAR_0)
        VAR_6 = VAR_0;
    *(int64_t *)VAR_3 = VAR_6;
    FUNC_0(VAR_2, VAR_3);
}
