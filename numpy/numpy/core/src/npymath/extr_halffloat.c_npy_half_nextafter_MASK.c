
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ npy_int16 ;
typedef int npy_half ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 () ;

npy_half FUNC_7(npy_half VAR_1, npy_half VAR_2)
{
    npy_half VAR_3;

    if (!FUNC_1(VAR_1) || FUNC_3(VAR_2)) {



        VAR_3 = VAR_0;
    } else if (FUNC_0(VAR_1, VAR_2)) {
        VAR_3 = VAR_1;
    } else if (FUNC_4(VAR_1)) {
        VAR_3 = (VAR_2&0x8000u) + 1;
    } else if (!(VAR_1&0x8000u)) {
        if ((npy_int16)VAR_1 > (npy_int16)VAR_2) {
            VAR_3 = VAR_1-1;
        } else {
            VAR_3 = VAR_1+1;
        }
    } else {
        if (!(VAR_2&0x8000u) || (VAR_1&0x7fffu) > (VAR_2&0x7fffu)) {
            VAR_3 = VAR_1-1;
        } else {
            VAR_3 = VAR_1+1;
        }
    }






    return VAR_3;
}
