
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint64 ;
typedef int npy_half ;


 int FUNC_0 (int ) ;

double FUNC_1(npy_half VAR_0)
{
    union { double ret; npy_uint64 retbits; } VAR_1;
    VAR_1.retbits = FUNC_0(VAR_0);
    return VAR_1.ret;
}
