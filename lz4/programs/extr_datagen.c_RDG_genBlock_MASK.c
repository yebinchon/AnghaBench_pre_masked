
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int litDistribTable ;
typedef scalar_t__ U32 ;
typedef int BYTE ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*,int ) ;
 size_t FUNC_1 (scalar_t__*) ;
 int FUNC_2 (int *,int ,size_t) ;

void FUNC_3(void* VAR_2, size_t VAR_3, size_t VAR_4, double VAR_5, litDistribTable VAR_6, unsigned* VAR_7)
{
    BYTE* VAR_8 = (BYTE*)VAR_2;
    const U32 VAR_9 = (U32)(32768 * VAR_5);
    size_t VAR_10 = VAR_4;
    U32* VAR_11 = VAR_7;


    while (VAR_5 >= 1.0) {
        size_t VAR_12 = FUNC_1(VAR_11) & 3;
        VAR_12 = (size_t)1 << (16 + VAR_12 * 2);
        VAR_12 += FUNC_1(VAR_11) & (VAR_12-1);
        if (VAR_3 < VAR_10 + VAR_12) {
            FUNC_2(VAR_8+VAR_10, 0, VAR_3-VAR_10);
            return;
        }
        FUNC_2(VAR_8+VAR_10, 0, VAR_12);
        VAR_10 += VAR_12;
        VAR_8[VAR_10-1] = FUNC_0(VAR_11, VAR_6);
    }


    if (VAR_10==0) {
        VAR_8[0] = FUNC_0(VAR_11, VAR_6);
        VAR_10=1;
    }


    while (VAR_10 < VAR_3) {

        if (VAR_0 < VAR_9) {

            size_t VAR_13;
            size_t VAR_14;
            int VAR_15 = VAR_1 + 4;
            U32 VAR_16 = VAR_0 + 1;
            if (VAR_16 > VAR_10) VAR_16 = (U32)VAR_10;
            VAR_13 = VAR_10 - VAR_16;
            VAR_14 = VAR_10 + VAR_15;
            if (VAR_14 > VAR_3) VAR_14 = VAR_3;
            while (VAR_10 < VAR_14) VAR_8[VAR_10++] = VAR_8[VAR_13++];
        } else {

            size_t VAR_17;
            size_t VAR_18 = VAR_1;
            VAR_17 = VAR_10 + VAR_18;
            if (VAR_17 > VAR_3) VAR_17 = VAR_3;
            while (VAR_10 < VAR_17) VAR_8[VAR_10++] = FUNC_0(VAR_11, VAR_6);
        }
    }
}
