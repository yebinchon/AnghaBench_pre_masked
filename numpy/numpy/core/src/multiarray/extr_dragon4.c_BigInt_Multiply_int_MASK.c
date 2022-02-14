
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int npy_uint64 ;
typedef int npy_uint32 ;
struct TYPE_4__ {int* blocks; int length; } ;
typedef TYPE_1__ BigInt ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(BigInt *VAR_1, const BigInt *VAR_2, npy_uint32 VAR_3)
{

    npy_uint32 VAR_4 = 0;
    npy_uint32 *VAR_5 = VAR_1->blocks;
    const npy_uint32 *VAR_6 = VAR_2->blocks;
    const npy_uint32 *VAR_7 = VAR_2->blocks + VAR_2->length;
    for ( ; VAR_6 != VAR_7; ++VAR_6, ++VAR_5) {
        npy_uint64 VAR_8 = (npy_uint64)(*VAR_6) * VAR_3 + VAR_4;
        *VAR_5 = (npy_uint32)(VAR_8 & FUNC_1(32));
        VAR_4 = VAR_8 >> 32;
    }


    if (VAR_4 != 0) {

        FUNC_0(VAR_2->length + 1 <= VAR_0);
        *VAR_5 = (npy_uint32)VAR_4;
        VAR_1->length = VAR_2->length + 1;
    }
    else {
        VAR_1->length = VAR_2->length;
    }
}
