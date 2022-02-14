
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static
__inline
int
FUNC_0(long long *VAR_0, int VAR_1)
{
    int VAR_2;
    VAR_2 = ((unsigned long long) *VAR_0) % (unsigned) VAR_1;
    *VAR_0 = ((unsigned long long) *VAR_0) / (unsigned) VAR_1;
    return VAR_2;
}
