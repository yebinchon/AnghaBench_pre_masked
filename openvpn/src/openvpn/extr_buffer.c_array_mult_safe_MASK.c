
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 scalar_t__ FUNC_1 (int) ;

size_t
FUNC_2(const size_t VAR_1, const size_t VAR_2, const size_t VAR_3)
{
    const size_t VAR_4 = 0xFFFFFFFF;
    unsigned long long VAR_5 = (unsigned long long)VAR_1 * (unsigned long long)VAR_2 + (unsigned long long)VAR_3;
    if (FUNC_1(VAR_1 > VAR_4) || FUNC_1(VAR_2 > VAR_4) || FUNC_1(VAR_3 > VAR_4) || FUNC_1(VAR_5 > (unsigned long long)VAR_4))
    {
        FUNC_0(VAR_0, "attempted allocation of excessively large array");
    }
    return (size_t) VAR_5;
}
