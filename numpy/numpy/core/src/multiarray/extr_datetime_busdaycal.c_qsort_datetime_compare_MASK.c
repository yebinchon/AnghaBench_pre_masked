
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_datetime ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
    npy_datetime VAR_2 = *(const npy_datetime *)VAR_0;
    npy_datetime VAR_3 = *(const npy_datetime *)VAR_1;

    return (VAR_2 < VAR_3) ? -1 : (VAR_2 == VAR_3) ? 0 : 1;
}
