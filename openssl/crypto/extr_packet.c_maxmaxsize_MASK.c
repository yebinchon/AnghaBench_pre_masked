
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 size_t VAR_0 ;

__attribute__((used)) static size_t FUNC_0(size_t VAR_1)
{
    if (VAR_1 >= sizeof(size_t) || VAR_1 == 0)
        return VAR_0;

    return ((size_t)1 << (VAR_1 * 8)) - 1 + VAR_1;
}
