
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RC2_KEY ;


 int FUNC_0 (unsigned long*,int *) ;
 int FUNC_1 (unsigned char*,unsigned long) ;
 int FUNC_2 (unsigned long,...) ;

void FUNC_3(const unsigned char *VAR_0, unsigned char *VAR_1,
                       long VAR_2, RC2_KEY *VAR_3, unsigned char *VAR_4,
                       int *VAR_5)
{
    register unsigned long VAR_6, VAR_7, VAR_8;
    register int VAR_9 = *VAR_5;
    register long VAR_10 = VAR_2;
    unsigned char VAR_11[8];
    register char *VAR_12;
    unsigned long VAR_13[2];
    unsigned char *VAR_14;
    int VAR_15 = 0;

    VAR_14 = (unsigned char *)VAR_4;
    FUNC_1(VAR_14, VAR_6);
    FUNC_1(VAR_14, VAR_7);
    VAR_13[0] = VAR_6;
    VAR_13[1] = VAR_7;
    VAR_12 = (char *)VAR_11;
    FUNC_2(VAR_6, VAR_12);
    FUNC_2(VAR_7, VAR_12);
    while (VAR_10--) {
        if (VAR_9 == 0) {
            FUNC_0((unsigned long *)VAR_13, VAR_3);
            VAR_12 = (char *)VAR_11;
            VAR_8 = VAR_13[0];
            FUNC_2(VAR_8, VAR_12);
            VAR_8 = VAR_13[1];
            FUNC_2(VAR_8, VAR_12);
            VAR_15++;
        }
        *(VAR_1++) = *(VAR_0++) ^ VAR_11[VAR_9];
        VAR_9 = (VAR_9 + 1) & 0x07;
    }
    if (VAR_15) {
        VAR_6 = VAR_13[0];
        VAR_7 = VAR_13[1];
        VAR_14 = (unsigned char *)VAR_4;
        FUNC_2(VAR_6, VAR_14);
        FUNC_2(VAR_7, VAR_14);
    }
    VAR_8 = VAR_6 = VAR_7 = VAR_13[0] = VAR_13[1] = 0;
    *VAR_5 = VAR_9;
}
