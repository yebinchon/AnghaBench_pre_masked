
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int U32 ;
typedef scalar_t__ BYTE ;


 size_t FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;

__attribute__((used)) static size_t
FUNC_2 (void* VAR_3, size_t VAR_4,
                   const short* VAR_5, unsigned VAR_6, unsigned VAR_7,
                         unsigned VAR_8)
{
    BYTE* const VAR_9 = (BYTE*) VAR_3;
    BYTE* VAR_10 = VAR_9;
    BYTE* const VAR_11 = VAR_9 + VAR_4;
    int VAR_12;
    const int VAR_13 = 1 << VAR_7;
    int VAR_14;
    int VAR_15;
    U32 VAR_16 = 0;
    int VAR_17 = 0;
    unsigned VAR_18 = 0;
    unsigned const VAR_19 = VAR_6 + 1;
    int VAR_20 = 0;


    VAR_16 += (VAR_7-VAR_0) << VAR_17;
    VAR_17 += 4;


    VAR_14 = VAR_13+1;
    VAR_15 = VAR_13;
    VAR_12 = VAR_7+1;

    while ((VAR_18 < VAR_19) && (VAR_14>1)) {
        if (VAR_20) {
            unsigned VAR_21 = VAR_18;
            while ((VAR_18 < VAR_19) && !VAR_5[VAR_18]) VAR_18++;
            if (VAR_18 == VAR_19) break;
            while (VAR_18 >= VAR_21+24) {
                VAR_21+=24;
                VAR_16 += 0xFFFFU << VAR_17;
                if ((!VAR_8) && (VAR_10 > VAR_11-2))
                    return FUNC_0(VAR_2);
                VAR_10[0] = (BYTE) VAR_16;
                VAR_10[1] = (BYTE)(VAR_16>>8);
                VAR_10+=2;
                VAR_16>>=16;
            }
            while (VAR_18 >= VAR_21+3) {
                VAR_21+=3;
                VAR_16 += 3 << VAR_17;
                VAR_17 += 2;
            }
            VAR_16 += (VAR_18-VAR_21) << VAR_17;
            VAR_17 += 2;
            if (VAR_17>16) {
                if ((!VAR_8) && (VAR_10 > VAR_11 - 2))
                    return FUNC_0(VAR_2);
                VAR_10[0] = (BYTE)VAR_16;
                VAR_10[1] = (BYTE)(VAR_16>>8);
                VAR_10 += 2;
                VAR_16 >>= 16;
                VAR_17 -= 16;
        } }
        { int VAR_22 = VAR_5[VAR_18++];
            int const VAR_23 = (2*VAR_15-1) - VAR_14;
            VAR_14 -= VAR_22 < 0 ? -VAR_22 : VAR_22;
            VAR_22++;
            if (VAR_22>=VAR_15)
                VAR_22 += VAR_23;
            VAR_16 += VAR_22 << VAR_17;
            VAR_17 += VAR_12;
            VAR_17 -= (VAR_22<VAR_23);
            VAR_20 = (VAR_22==1);
            if (VAR_14<1) return FUNC_0(VAR_1);
            while (VAR_14<VAR_15) { VAR_12--; VAR_15>>=1; }
        }
        if (VAR_17>16) {
            if ((!VAR_8) && (VAR_10 > VAR_11 - 2))
                return FUNC_0(VAR_2);
            VAR_10[0] = (BYTE)VAR_16;
            VAR_10[1] = (BYTE)(VAR_16>>8);
            VAR_10 += 2;
            VAR_16 >>= 16;
            VAR_17 -= 16;
    } }

    if (VAR_14 != 1)
        return FUNC_0(VAR_1);
    FUNC_1(VAR_18 <= VAR_19);


    if ((!VAR_8) && (VAR_10 > VAR_11 - 2))
        return FUNC_0(VAR_2);
    VAR_10[0] = (BYTE)VAR_16;
    VAR_10[1] = (BYTE)(VAR_16>>8);
    VAR_10+= (VAR_17+7) /8;

    return (VAR_10-VAR_9);
}
