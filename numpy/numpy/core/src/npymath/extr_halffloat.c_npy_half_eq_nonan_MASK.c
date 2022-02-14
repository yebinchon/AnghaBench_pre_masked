
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_half ;



int FUNC_0(npy_half VAR_0, npy_half VAR_1)
{
    return (VAR_0 == VAR_1 || ((VAR_0 | VAR_1) & 0x7fff) == 0);
}
