
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ in_addr_t ;


 scalar_t__ FUNC_0 (int) ;

int
FUNC_1(in_addr_t VAR_0)
{
    int VAR_1;
    const int VAR_2 = sizeof(in_addr_t) * 8;

    for (VAR_1 = 0; VAR_1 <= VAR_2; ++VAR_1)
    {
        in_addr_t VAR_3 = FUNC_0(VAR_1);
        if (VAR_3 == VAR_0)
        {
            return VAR_1;
        }
    }
    return -1;
}
