
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_uint32 ;
struct TYPE_3__ {int* blocks; int length; } ;
typedef TYPE_1__ BigInt ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static inline void
FUNC_1(BigInt *VAR_1, npy_uint32 VAR_2)
{
    npy_uint32 VAR_3;
    npy_uint32 VAR_4 = VAR_2 / 32;
    npy_uint32 VAR_5;

    FUNC_0(VAR_4 < VAR_0);

    for (VAR_5 = 0; VAR_5 <= VAR_4; ++VAR_5) {
        VAR_1->blocks[VAR_5] = 0;
    }

    VAR_1->length = VAR_4 + 1;

    VAR_3 = (VAR_2 % 32);
    VAR_1->blocks[VAR_4] |= ((npy_uint32)1 << VAR_3);
}
