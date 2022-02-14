
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint64 ;
typedef int npy_half ;


 int FUNC_0 (int ) ;

npy_half FUNC_1(double VAR_0)
{
    union { double d; npy_uint64 dbits; } VAR_1;
    VAR_1.d = VAR_0;
    return FUNC_0(VAR_1.dbits);
}
