
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usp10_script_range {scalar_t__ const rangeFirst; scalar_t__ const rangeLast; } ;
typedef scalar_t__ DWORD ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
    const struct usp10_script_range *VAR_2 = VAR_1;
    const DWORD *VAR_3 = VAR_0;

    if (*VAR_3 < VAR_2->rangeFirst)
        return -1;
    if (*VAR_3 > VAR_2->rangeLast)
        return 1;
    return 0;
}
