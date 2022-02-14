
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef int npy_uint16 ;



npy_uint32 FUNC_0(npy_uint16 VAR_0)
{
    npy_uint16 VAR_1, VAR_2;
    npy_uint32 VAR_3, VAR_4, VAR_5;

    VAR_1 = (VAR_0&0x7c00u);
    VAR_3 = ((npy_uint32)VAR_0&0x8000u) << 16;
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
            VAR_4 = ((npy_uint32)(127 - 15 - VAR_1)) << 23;
            VAR_5 = ((npy_uint32)(VAR_2&0x03ffu)) << 13;
            return VAR_3 + VAR_4 + VAR_5;
        case 0x7c00u:

            return VAR_3 + 0x7f800000u + (((npy_uint32)(VAR_0&0x03ffu)) << 13);
        default:

            return VAR_3 + (((npy_uint32)(VAR_0&0x7fffu) + 0x1c000u) << 13);
    }
}
