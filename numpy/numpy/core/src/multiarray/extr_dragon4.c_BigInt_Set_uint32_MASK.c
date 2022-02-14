
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ npy_uint32 ;
struct TYPE_3__ {int length; scalar_t__* blocks; } ;
typedef TYPE_1__ BigInt ;



__attribute__((used)) static void
FUNC_0(BigInt *VAR_0, npy_uint32 VAR_1)
{
    if (VAR_1 != 0) {
        VAR_0->blocks[0] = VAR_1;
        VAR_0->length = 1;
    }
    else {
        VAR_0->length = 0;
    }
}
