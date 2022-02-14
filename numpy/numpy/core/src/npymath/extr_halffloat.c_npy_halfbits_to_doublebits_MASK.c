
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint64 ;
typedef int npy_uint16 ;



npy_uint64 FUNC_0(npy_uint16 VAR_0)
{
    npy_uint16 VAR_1, VAR_2;
    npy_uint64 VAR_3, VAR_4, VAR_5;

    VAR_1 = (VAR_0&0x7c00u);
    VAR_3 = ((npy_uint64)VAR_0&0x8000u) << 48;
    switch (VAR_1) {
        case 0x0000u:
            VAR_2 = (VAR_0&0x03ffu);

            if (VAR_2 == 0) {
                return VAR_3;
            }

            VAR_2 <<= 1;
            while ((VAR_2&0x0400u) == 0) {
                VAR_2 <<= 1;
                VAR_1++;
            }
            VAR_4 = ((npy_uint64)(1023 - 15 - VAR_1)) << 52;
            VAR_5 = ((npy_uint64)(VAR_2&0x03ffu)) << 42;
            return VAR_3 + VAR_4 + VAR_5;
        case 0x7c00u:

            return VAR_3 + 0x7ff0000000000000ULL +
                                (((npy_uint64)(VAR_0&0x03ffu)) << 42);
        default:

            return VAR_3 + (((npy_uint64)(VAR_0&0x7fffu) + 0xfc000u) << 42);
    }
}
