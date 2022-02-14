
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static inline size_t
FUNC_1(size_t VAR_0)
{
    size_t VAR_1 = 1;

    while (VAR_1 < VAR_0)
    {
        VAR_1 <<= 1;
        FUNC_0(VAR_1 > 0);
    }

    return VAR_1;
}
