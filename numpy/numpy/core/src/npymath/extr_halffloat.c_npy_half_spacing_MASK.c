
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint16 ;
typedef int npy_half ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

npy_half FUNC_2(npy_half VAR_2)
{
    npy_half VAR_3;
    npy_uint16 VAR_4 = VAR_2&0x7c00u;
    npy_uint16 VAR_5 = VAR_2&0x03ffu;
    if (VAR_4 == 0x7c00u) {



        VAR_3 = VAR_0;
    } else if (VAR_2 == 0x7bffu) {



        VAR_3 = VAR_1;
    } else if ((VAR_2&0x8000u) && VAR_5 == 0) {
        if (VAR_4 > 0x2c00u) {
            VAR_3 = VAR_4 - 0x2c00u;
        } else if(VAR_4 > 0x0400u) {
            VAR_3 = 1 << ((VAR_4 >> 10) - 2);
        } else {
            VAR_3 = 0x0001u;
        }
    } else if (VAR_4 > 0x2800u) {
        VAR_3 = VAR_4 - 0x2800u;
    } else if (VAR_4 > 0x0400u) {
        VAR_3 = 1 << ((VAR_4 >> 10) - 1);
    } else {
        VAR_3 = 0x0001u;
    }

    return VAR_3;
}
