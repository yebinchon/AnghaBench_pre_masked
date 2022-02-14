
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct smvt_control {int power; int addend; } ;
typedef int int32_t ;
typedef TYPE_1__* curve448_scalar_t ;
struct TYPE_3__ {int* limb; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(struct smvt_control *VAR_1,

                       const curve448_scalar_t VAR_2,
                       unsigned int VAR_3)
{
    unsigned int VAR_4 = VAR_0 / (VAR_3 + 1) + 3;
    int VAR_5 = VAR_4 - 1;
    uint64_t VAR_6 = VAR_2->limb[0] & 0xFFFF;
    uint32_t VAR_7 = (1 << (VAR_3 + 1)) - 1;
    unsigned int VAR_8;
    const unsigned int VAR_9 = sizeof(VAR_2->limb[0]) / 2;
    unsigned int VAR_10, VAR_11;


    VAR_1[VAR_5].power = -1;
    VAR_1[VAR_5].addend = 0;
    VAR_5--;







    for (VAR_8 = 1; VAR_8 < (VAR_0 - 1) / 16 + 3; VAR_8++) {
        if (VAR_8 < (VAR_0 - 1) / 16 + 1) {

            VAR_6 += (uint32_t)((VAR_2->limb[VAR_8 / VAR_9]
                       >> (16 * (VAR_8 % VAR_9))) << 16);
        }

        while (VAR_6 & 0xFFFF) {
            uint32_t VAR_12 = FUNC_0((uint32_t)VAR_6);
            uint32_t VAR_13 = (uint32_t)VAR_6 >> VAR_12;
            int32_t VAR_14 = VAR_13 & VAR_7;

            FUNC_1(VAR_5 >= 0);
            if (VAR_13 & (1 << (VAR_3 + 1)))
                VAR_14 -= (1 << (VAR_3 + 1));
            VAR_6 -= VAR_14 * (1 << VAR_12);
            VAR_1[VAR_5].power = VAR_12 + 16 * (VAR_8 - 1);
            VAR_1[VAR_5].addend = VAR_14;
            VAR_5--;
        }
        VAR_6 >>= 16;
    }
    FUNC_1(VAR_6 == 0);

    VAR_5++;
    VAR_10 = VAR_4 - VAR_5;
    for (VAR_11 = 0; VAR_11 < VAR_10; VAR_11++)
        VAR_1[VAR_11] = VAR_1[VAR_11 + VAR_5];

    return VAR_10 - 1;
}
