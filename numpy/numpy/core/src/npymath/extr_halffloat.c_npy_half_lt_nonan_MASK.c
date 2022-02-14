
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_half ;



int FUNC_0(npy_half VAR_0, npy_half VAR_1)
{
    if (VAR_0&0x8000u) {
        if (VAR_1&0x8000u) {
            return (VAR_0&0x7fffu) > (VAR_1&0x7fffu);
        } else {

            return (VAR_0 != 0x8000u) || (VAR_1 != 0x0000u);
        }
    } else {
        if (VAR_1&0x8000u) {
            return 0;
        } else {
            return (VAR_0&0x7fffu) < (VAR_1&0x7fffu);
        }
    }
}
