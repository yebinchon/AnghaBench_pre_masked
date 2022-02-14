
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong32 ;


 short VAR_0 ;
 int* VAR_1 ;
 unsigned char const* VAR_2 ;
 int FUNC_0 (int*,int*) ;
 scalar_t__* VAR_3 ;
 scalar_t__* VAR_4 ;
 scalar_t__* VAR_5 ;

__attribute__((used)) static void FUNC_1(const unsigned char *VAR_6, short VAR_7, ulong32 *VAR_8)
{
    ulong32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14[32];
    unsigned char VAR_15[56], VAR_16[56];

    for (VAR_10=0; VAR_10 < 56; VAR_10++) {
        VAR_11 = (ulong32)VAR_3[VAR_10];
        VAR_12 = VAR_11 & 7;
        VAR_15[VAR_10] = (unsigned char)((VAR_6[VAR_11 >> 3U] & VAR_2[VAR_12]) == VAR_2[VAR_12] ? 1 : 0);
    }

    for (VAR_9=0; VAR_9 < 16; VAR_9++) {
        if (VAR_7 == VAR_0) {
           VAR_12 = (15 - VAR_9) << 1;
        } else {
           VAR_12 = VAR_9 << 1;
        }
        VAR_13 = VAR_12 + 1;
        VAR_14[VAR_12] = VAR_14[VAR_13] = 0L;
        for (VAR_10=0; VAR_10 < 28; VAR_10++) {
            VAR_11 = VAR_10 + (ulong32)VAR_5[VAR_9];
            if (VAR_11 < 28) {
               VAR_16[VAR_10] = VAR_15[VAR_11];
            } else {
               VAR_16[VAR_10] = VAR_15[VAR_11 - 28];
            }
        }
        for ( ; VAR_10 < 56; VAR_10++) {
            VAR_11 = VAR_10 + (ulong32)VAR_5[VAR_9];
            if (VAR_11 < 56) {
               VAR_16[VAR_10] = VAR_15[VAR_11];
            } else {
               VAR_16[VAR_10] = VAR_15[VAR_11 - 28];
            }
        }
        for (VAR_10=0; VAR_10 < 24; VAR_10++) {
            if ((int)VAR_16[(int)VAR_4[VAR_10]] != 0) {
               VAR_14[VAR_12] |= VAR_1[VAR_10];
            }
            if ((int)VAR_16[(int)VAR_4[VAR_10+24]] != 0) {
               VAR_14[VAR_13] |= VAR_1[VAR_10];
            }
        }
    }

    FUNC_0(VAR_14, VAR_8);
}
