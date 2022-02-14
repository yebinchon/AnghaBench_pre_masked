
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ U32 ;
typedef scalar_t__ BYTE ;


 scalar_t__ const VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 size_t FUNC_1 (size_t,size_t) ;

__attribute__((used)) static void FUNC_2(void* VAR_2, size_t VAR_3, double VAR_4, U32* VAR_5)
{
    BYTE* const VAR_6 = (BYTE*)VAR_2;
    size_t VAR_7 = 0;
    U32 const VAR_8 = (U32)(32768 * VAR_4);


    while (VAR_7 < 20)
        VAR_6[VAR_7++] = (BYTE)(FUNC_0(VAR_5));

    while (VAR_7 < VAR_3) {

        if (VAR_0 < VAR_8) {

            size_t const VAR_9 = (size_t)VAR_1 + 4;
            size_t const VAR_10 = FUNC_1(VAR_7+VAR_9, VAR_3);
            size_t VAR_11;
            size_t VAR_12 = (size_t)VAR_0 + 1;
            while (VAR_12 > VAR_7) VAR_12 >>= 1;
            VAR_11 = VAR_7 - VAR_12;
            while (VAR_7 < VAR_10) VAR_6[VAR_7++] = VAR_6[VAR_11++];
        } else {

            size_t const VAR_13 = VAR_1;
            size_t const VAR_14 = FUNC_1(VAR_7+VAR_13, VAR_3);
            while (VAR_7 < VAR_14) VAR_6[VAR_7++] = (BYTE)(FUNC_0(VAR_5) >> 5);
        }
    }
}
