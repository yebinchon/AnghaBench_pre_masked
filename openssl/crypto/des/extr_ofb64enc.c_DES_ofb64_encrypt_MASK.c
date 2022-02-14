
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;
typedef scalar_t__ DES_LONG ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*,int *,int ) ;
 int FUNC_1 (unsigned char*,scalar_t__) ;
 int FUNC_2 (scalar_t__,unsigned char*) ;

void FUNC_3(register const unsigned char *VAR_1,
                       register unsigned char *VAR_2, long VAR_3,
                       DES_key_schedule *VAR_4, DES_cblock *VAR_5, int *VAR_6)
{
    register DES_LONG VAR_7, VAR_8, VAR_9;
    register int VAR_10 = *VAR_6;
    register long VAR_11 = VAR_3;
    DES_cblock VAR_12;
    register unsigned char *VAR_13;
    DES_LONG VAR_14[2];
    unsigned char *VAR_15;
    int VAR_16 = 0;

    VAR_15 = &(*VAR_5)[0];
    FUNC_1(VAR_15, VAR_7);
    FUNC_1(VAR_15, VAR_8);
    VAR_14[0] = VAR_7;
    VAR_14[1] = VAR_8;
    VAR_13 = VAR_12;
    FUNC_2(VAR_7, VAR_13);
    FUNC_2(VAR_8, VAR_13);
    while (VAR_11--) {
        if (VAR_10 == 0) {
            FUNC_0(VAR_14, VAR_4, VAR_0);
            VAR_13 = VAR_12;
            VAR_9 = VAR_14[0];
            FUNC_2(VAR_9, VAR_13);
            VAR_9 = VAR_14[1];
            FUNC_2(VAR_9, VAR_13);
            VAR_16++;
        }
        *(VAR_2++) = *(VAR_1++) ^ VAR_12[VAR_10];
        VAR_10 = (VAR_10 + 1) & 0x07;
    }
    if (VAR_16) {
        VAR_7 = VAR_14[0];
        VAR_8 = VAR_14[1];
        VAR_15 = &(*VAR_5)[0];
        FUNC_2(VAR_7, VAR_15);
        FUNC_2(VAR_8, VAR_15);
    }
    VAR_9 = VAR_7 = VAR_8 = VAR_14[0] = VAR_14[1] = 0;
    *VAR_6 = VAR_10;
}
