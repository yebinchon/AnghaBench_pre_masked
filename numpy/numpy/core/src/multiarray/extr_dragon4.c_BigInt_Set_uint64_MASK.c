
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_uint64 ;
struct TYPE_3__ {int* blocks; int length; } ;
typedef TYPE_1__ BigInt ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(BigInt *VAR_0, npy_uint64 VAR_1)
{
    if (VAR_1 > FUNC_0(32)) {
        VAR_0->blocks[0] = VAR_1 & FUNC_0(32);
        VAR_0->blocks[1] = (VAR_1 >> 32) & FUNC_0(32);
        VAR_0->length = 2;
    }
    else if (VAR_1 != 0) {
        VAR_0->blocks[0] = VAR_1 & FUNC_0(32);
        VAR_0->length = 1;
    }
    else {
        VAR_0->length = 0;
    }
}
