
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef scalar_t__ BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int*) ;
 size_t FUNC_1 (size_t const,size_t) ;

__attribute__((used)) static void FUNC_2(void* VAR_2, size_t VAR_3, double VAR_4, U32* VAR_5)
{
    BYTE* VAR_6 = (BYTE*)VAR_2;
    size_t VAR_7 = 0;
    U32 VAR_8 = (U32)(32768 * VAR_4);


    VAR_6[VAR_7++] = (BYTE)(FUNC_0(VAR_5));

    while (VAR_7 < VAR_3) {

        if (VAR_0 < VAR_8) {

            size_t const VAR_9 = VAR_1 + 4;
            size_t const VAR_10 = FUNC_1(VAR_9, VAR_3 - VAR_7);
            size_t const VAR_11 = VAR_7 + VAR_10;
            size_t const VAR_12 = VAR_0 + 1;
            size_t const VAR_13 = FUNC_1(VAR_12, VAR_7);
            size_t VAR_14 = VAR_7 - VAR_13;
            while (VAR_7 < VAR_11) VAR_6[VAR_7++] = VAR_6[VAR_14++];
        } else {

            size_t const VAR_15 = VAR_1 + 4;
            size_t const VAR_16 = FUNC_1(VAR_15, VAR_3 - VAR_7);
            size_t const VAR_17 = VAR_7 + VAR_16;
            while (VAR_7 < VAR_17) VAR_6[VAR_7++] = (BYTE)(FUNC_0(VAR_5) >> 5);
    } }
}
