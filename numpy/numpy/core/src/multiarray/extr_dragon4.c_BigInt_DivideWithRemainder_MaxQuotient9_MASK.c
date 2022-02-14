
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int npy_uint64 ;
typedef int npy_uint32 ;
struct TYPE_6__ {int length; int* blocks; } ;
typedef TYPE_1__ BigInt ;


 scalar_t__ FUNC_0 (TYPE_1__*,TYPE_1__ const*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

__attribute__((used)) static npy_uint32
FUNC_3(BigInt *VAR_0, const BigInt *VAR_1)
{
    npy_uint32 VAR_2, VAR_3;
    const npy_uint32 *VAR_4;
    npy_uint32 *VAR_5;





    FUNC_1(!(VAR_1->length == 0) &&
                VAR_1->blocks[VAR_1->length-1] >= 8 &&
                VAR_1->blocks[VAR_1->length-1] < FUNC_2(32) &&
                VAR_0->length <= VAR_1->length);





    VAR_2 = VAR_1->length;
    if (VAR_0->length < VAR_1->length) {
        return 0;
    }

    VAR_4 = VAR_1->blocks + VAR_2 - 1;
    VAR_5 = VAR_0->blocks + VAR_2 - 1;





    VAR_3 = *VAR_5 / (*VAR_4 + 1);
    FUNC_1(VAR_3 <= 9);


    if (VAR_3 != 0) {

        const npy_uint32 *VAR_6 = VAR_1->blocks;
        npy_uint32 *VAR_7 = VAR_0->blocks;

        npy_uint64 VAR_8 = 0;
        npy_uint64 VAR_9 = 0;
        do {
            npy_uint64 VAR_10, VAR_11;

            VAR_11 = (npy_uint64)*VAR_6 * (npy_uint64)VAR_3 + VAR_9;
            VAR_9 = VAR_11 >> 32;

            VAR_10 = (npy_uint64)*VAR_7
                       - (VAR_11 & FUNC_2(32)) - VAR_8;
            VAR_8 = (VAR_10 >> 32) & 1;

            *VAR_7 = VAR_10 & FUNC_2(32);

            ++VAR_6;
            ++VAR_7;
        } while(VAR_6 <= VAR_4);


        while (VAR_2 > 0 && VAR_0->blocks[VAR_2 - 1] == 0) {
            --VAR_2;
        }

        VAR_0->length = VAR_2;
    }






    if (FUNC_0(VAR_0, VAR_1) >= 0) {

        const npy_uint32 *VAR_12 = VAR_1->blocks;
        npy_uint32 *VAR_13 = VAR_0->blocks;
        npy_uint64 VAR_14 = 0;

        ++VAR_3;

        do {
            npy_uint64 VAR_15 = (npy_uint64)*VAR_13
                                  - (npy_uint64)*VAR_12 - VAR_14;
            VAR_14 = (VAR_15 >> 32) & 1;

            *VAR_13 = VAR_15 & FUNC_2(32);

            ++VAR_12;
            ++VAR_13;
        } while(VAR_12 <= VAR_4);


        while (VAR_2 > 0 && VAR_0->blocks[VAR_2 - 1] == 0) {
            --VAR_2;
        }

        VAR_0->length = VAR_2;
    }

    return VAR_3;
}
