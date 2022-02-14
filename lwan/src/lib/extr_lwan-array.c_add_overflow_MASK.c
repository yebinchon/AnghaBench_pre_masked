
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;
 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline bool FUNC_1(size_t VAR_1, size_t VAR_2, size_t *VAR_3)
{
    if (FUNC_0(VAR_1 > 0 && VAR_2 > VAR_0 - VAR_1))
        return 1;

    *VAR_3 = VAR_1 + VAR_2;
    return 0;
}
