
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int npy_uint32 ;
typedef int npy_half ;


 int FUNC_0 (int ) ;

npy_half FUNC_1(float VAR_0)
{
    union { float f; npy_uint32 fbits; } VAR_1;
    VAR_1.f = VAR_0;
    return FUNC_0(VAR_1.fbits);
}
