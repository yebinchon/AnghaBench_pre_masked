
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint64 ;



__attribute__((used)) static npy_uint64
FUNC_0(npy_uint64 VAR_0, npy_uint64 VAR_1)
{
    npy_uint64 VAR_2;

    if (VAR_0 > VAR_1) {
        VAR_2 = VAR_0;
        VAR_0 = VAR_1;
        VAR_1 = VAR_2;
    }
    while (VAR_0 != VAR_1 && VAR_1 != 0) {
        VAR_2 = VAR_0 % VAR_1;
        VAR_0 = VAR_1;
        VAR_1 = VAR_2;
    }

    return VAR_0;
}
