
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint64 ;
typedef size_t NPY_DATETIMEUNIT ;


 int* VAR_0 ;

__attribute__((used)) static npy_uint64
FUNC_0(NPY_DATETIMEUNIT VAR_1, NPY_DATETIMEUNIT VAR_2)
{
    npy_uint64 VAR_3 = 1;
    NPY_DATETIMEUNIT VAR_4 = VAR_1;

    while (VAR_4 < VAR_2) {
        VAR_3 *= VAR_0[VAR_4];





        if (VAR_3&0xff00000000000000ULL) {
            return 0;
        }
        ++VAR_4;
    }
    return VAR_3;
}
