
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int RC2_KEY ;


 int FUNC_0 (unsigned long*,int *) ;
 int FUNC_1 (unsigned char*,unsigned long) ;
 int FUNC_2 (unsigned long,unsigned char*) ;

void FUNC_3(const unsigned char *VAR_0, unsigned char *VAR_1,
                       long VAR_2, RC2_KEY *VAR_3, unsigned char *VAR_4,
                       int *VAR_5, int VAR_6)
{
    register unsigned long VAR_7, VAR_8, VAR_9;
    register int VAR_10 = *VAR_5;
    register long VAR_11 = VAR_2;
    unsigned long VAR_12[2];
    unsigned char *VAR_13, VAR_14, VAR_15;

    VAR_13 = (unsigned char *)VAR_4;
    if (VAR_6) {
        while (VAR_11--) {
            if (VAR_10 == 0) {
                FUNC_1(VAR_13, VAR_7);
                VAR_12[0] = VAR_7;
                FUNC_1(VAR_13, VAR_8);
                VAR_12[1] = VAR_8;
                FUNC_0((unsigned long *)VAR_12, VAR_3);
                VAR_13 = (unsigned char *)VAR_4;
                VAR_9 = VAR_12[0];
                FUNC_2(VAR_9, VAR_13);
                VAR_9 = VAR_12[1];
                FUNC_2(VAR_9, VAR_13);
                VAR_13 = (unsigned char *)VAR_4;
            }
            VAR_14 = *(VAR_0++) ^ VAR_13[VAR_10];
            *(VAR_1++) = VAR_14;
            VAR_13[VAR_10] = VAR_14;
            VAR_10 = (VAR_10 + 1) & 0x07;
        }
    } else {
        while (VAR_11--) {
            if (VAR_10 == 0) {
                FUNC_1(VAR_13, VAR_7);
                VAR_12[0] = VAR_7;
                FUNC_1(VAR_13, VAR_8);
                VAR_12[1] = VAR_8;
                FUNC_0((unsigned long *)VAR_12, VAR_3);
                VAR_13 = (unsigned char *)VAR_4;
                VAR_9 = VAR_12[0];
                FUNC_2(VAR_9, VAR_13);
                VAR_9 = VAR_12[1];
                FUNC_2(VAR_9, VAR_13);
                VAR_13 = (unsigned char *)VAR_4;
            }
            VAR_15 = *(VAR_0++);
            VAR_14 = VAR_13[VAR_10];
            VAR_13[VAR_10] = VAR_15;
            *(VAR_1++) = VAR_14 ^ VAR_15;
            VAR_10 = (VAR_10 + 1) & 0x07;
        }
    }
    VAR_7 = VAR_8 = VAR_12[0] = VAR_12[1] = VAR_9 = VAR_14 = VAR_15 = 0;
    *VAR_5 = VAR_10;
}
