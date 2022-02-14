
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long long npy_uint64 ;
typedef scalar_t__ npy_uint32 ;
struct TYPE_3__ {int length; scalar_t__* blocks; } ;
typedef TYPE_1__ BigInt ;


 int FUNC_0 (int) ;
 unsigned long long FUNC_1 (int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(BigInt *VAR_1)
{

    npy_uint64 VAR_2 = 0;

    npy_uint32 *VAR_3 = VAR_1->blocks;
    npy_uint32 *VAR_4 = VAR_1->blocks + VAR_1->length;
    for ( ; VAR_3 != VAR_4; ++VAR_3) {
        npy_uint64 VAR_5 = (npy_uint64)(*VAR_3) * 10ull + VAR_2;
        (*VAR_3) = (npy_uint32)(VAR_5 & FUNC_1(32));
        VAR_2 = VAR_5 >> 32;
    }

    if (VAR_2 != 0) {

        FUNC_0(VAR_1->length + 1 <= VAR_0);
        *VAR_3 = (npy_uint32)VAR_2;
        ++VAR_1->length;
    }
}
