
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int in_addr_t ;


 int const VAR_0 ;

__attribute__((used)) static inline in_addr_t
FUNC_0(const int VAR_1)
{
    const int VAR_2 = sizeof(in_addr_t) * 8;
    in_addr_t VAR_3 = 0;
    if (VAR_1 > 0 && VAR_1 <= VAR_2)
    {
        VAR_3 = VAR_0 << (VAR_2-VAR_1);
    }
    return VAR_3;
}
