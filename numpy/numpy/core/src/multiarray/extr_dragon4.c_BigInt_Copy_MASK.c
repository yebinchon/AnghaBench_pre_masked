
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_uint32 ;
struct TYPE_4__ {int length; int* blocks; } ;
typedef TYPE_1__ BigInt ;



__attribute__((used)) static void
FUNC_0(BigInt *VAR_0, const BigInt *VAR_1)
{
    npy_uint32 VAR_2 = VAR_1->length;
    npy_uint32 * VAR_3 = VAR_0->blocks;
    const npy_uint32 *VAR_4;
    for (VAR_4 = VAR_1->blocks; VAR_4 != VAR_1->blocks + VAR_2; ++VAR_3, ++VAR_4) {
        *VAR_3 = *VAR_4;
    }
    VAR_0->length = VAR_2;
}
