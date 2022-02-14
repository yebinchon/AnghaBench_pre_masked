
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U32 ;
typedef size_t BYTE ;


 size_t FUNC_0 (int ) ;
 int FUNC_1 (size_t const*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned int* const,int ,unsigned int) ;

__attribute__((used)) static size_t FUNC_3(
                                unsigned* VAR_1, unsigned* VAR_2,
                                const void* VAR_3, size_t VAR_4,
                                unsigned VAR_5,
                                unsigned* const VAR_6)
{
    const BYTE* VAR_7 = (const BYTE*)VAR_3;
    const BYTE* const VAR_8 = VAR_7+VAR_4;
    unsigned VAR_9 = *VAR_2;
    unsigned VAR_10=0;
    U32* const VAR_11 = VAR_6;
    U32* const VAR_12 = VAR_11 + 256;
    U32* const VAR_13 = VAR_12 + 256;
    U32* const VAR_14 = VAR_13 + 256;

    FUNC_2(VAR_6, 0, 4*256*sizeof(unsigned));


    if (!VAR_4) {
        FUNC_2(VAR_1, 0, VAR_9 + 1);
        *VAR_2 = 0;
        return 0;
    }
    if (!VAR_9) VAR_9 = 255;


    { U32 VAR_15 = FUNC_1(VAR_7); VAR_7 += 4;
        while (VAR_7 < VAR_8-15) {
            U32 VAR_16 = VAR_15; VAR_15 = FUNC_1(VAR_7); VAR_7 += 4;
            VAR_11[(BYTE) VAR_16 ]++;
            VAR_12[(BYTE)(VAR_16>>8) ]++;
            VAR_13[(BYTE)(VAR_16>>16)]++;
            VAR_14[ VAR_16>>24 ]++;
            VAR_16 = VAR_15; VAR_15 = FUNC_1(VAR_7); VAR_7 += 4;
            VAR_11[(BYTE) VAR_16 ]++;
            VAR_12[(BYTE)(VAR_16>>8) ]++;
            VAR_13[(BYTE)(VAR_16>>16)]++;
            VAR_14[ VAR_16>>24 ]++;
            VAR_16 = VAR_15; VAR_15 = FUNC_1(VAR_7); VAR_7 += 4;
            VAR_11[(BYTE) VAR_16 ]++;
            VAR_12[(BYTE)(VAR_16>>8) ]++;
            VAR_13[(BYTE)(VAR_16>>16)]++;
            VAR_14[ VAR_16>>24 ]++;
            VAR_16 = VAR_15; VAR_15 = FUNC_1(VAR_7); VAR_7 += 4;
            VAR_11[(BYTE) VAR_16 ]++;
            VAR_12[(BYTE)(VAR_16>>8) ]++;
            VAR_13[(BYTE)(VAR_16>>16)]++;
            VAR_14[ VAR_16>>24 ]++;
        }
        VAR_7-=4;
    }


    while (VAR_7<VAR_8) VAR_11[*VAR_7++]++;

    if (VAR_5) {
        U32 VAR_17; for (VAR_17=255; VAR_17>VAR_9; VAR_17--) {
            VAR_11[VAR_17] += VAR_12[VAR_17] + VAR_13[VAR_17] + VAR_14[VAR_17];
            if (VAR_11[VAR_17]) return FUNC_0(VAR_0);
    } }

    { U32 VAR_18;
        if (VAR_9 > 255) VAR_9 = 255;
        for (VAR_18=0; VAR_18<=VAR_9; VAR_18++) {
            VAR_1[VAR_18] = VAR_11[VAR_18] + VAR_12[VAR_18] + VAR_13[VAR_18] + VAR_14[VAR_18];
            if (VAR_1[VAR_18] > VAR_10) VAR_10 = VAR_1[VAR_18];
    } }

    while (!VAR_1[VAR_9]) VAR_9--;
    *VAR_2 = VAR_9;
    return (size_t)VAR_10;
}
