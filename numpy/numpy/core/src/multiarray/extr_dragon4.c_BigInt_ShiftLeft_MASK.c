
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int npy_uint32 ;
typedef int npy_int32 ;
struct TYPE_3__ {int* blocks; int length; } ;
typedef TYPE_1__ BigInt ;


 int FUNC_0 (int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(BigInt *VAR_1, npy_uint32 VAR_2)
{
    npy_uint32 VAR_3 = VAR_2 / 32;
    npy_uint32 VAR_4 = VAR_2 % 32;


    const npy_uint32 *VAR_5 = VAR_1->blocks;
    npy_int32 VAR_6 = VAR_1->length;
    npy_uint32 *VAR_7, *VAR_8;

    FUNC_0(VAR_6 + VAR_3 < VAR_0);
    FUNC_0(VAR_2 != 0);


    if (VAR_4 == 0) {
        npy_uint32 VAR_9;


        for (VAR_7 = VAR_1->blocks + VAR_1->length,
                 VAR_8 = VAR_7 + VAR_3;
                 VAR_7 >= VAR_5;
                 --VAR_7, --VAR_8) {
            *VAR_8 = *VAR_7;
        }


        for (VAR_9 = 0; VAR_9 < VAR_3; ++VAR_9) {
            VAR_1->blocks[VAR_9] = 0;
        }

        VAR_1->length += VAR_3;
    }

    else {
        npy_uint32 VAR_10;
        npy_int32 VAR_11 = VAR_6 - 1;
        npy_uint32 VAR_12 = VAR_6 + VAR_3;


        const npy_uint32 VAR_13 = (32 - VAR_4);
        npy_uint32 VAR_14 = 0;
        npy_uint32 VAR_15 = VAR_1->blocks[VAR_11];
        npy_uint32 VAR_16 = VAR_15 >> VAR_13;


        FUNC_0(VAR_12 < VAR_0);
        VAR_1->length = VAR_12 + 1;

        while (VAR_11 > 0) {
            VAR_1->blocks[VAR_12] = VAR_14 | VAR_16;
            VAR_14 = VAR_15 << VAR_4;

            --VAR_11;
            --VAR_12;

            VAR_15 = VAR_1->blocks[VAR_11];
            VAR_16 = VAR_15 >> VAR_13;
        }


        FUNC_0(VAR_12 == VAR_3 + 1);
        VAR_1->blocks[VAR_12] = VAR_14 | VAR_16;
        VAR_1->blocks[VAR_12-1] = VAR_15 << VAR_4;


        for (VAR_10 = 0; VAR_10 < VAR_3; ++VAR_10) {
            VAR_1->blocks[VAR_10] = 0;
        }


        if (VAR_1->blocks[VAR_1->length - 1] == 0) {
            --VAR_1->length;
        }
    }
}
