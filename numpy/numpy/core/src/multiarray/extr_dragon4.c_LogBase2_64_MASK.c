
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint64 ;
typedef scalar_t__ npy_uint32 ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static npy_uint32
FUNC_1(npy_uint64 VAR_0)
{
    npy_uint64 VAR_1;

    VAR_1 = VAR_0 >> 32;
    if (VAR_1) {
        return 32 + FUNC_0((npy_uint32)VAR_1);
    }

    return FUNC_0((npy_uint32)VAR_0);
}
