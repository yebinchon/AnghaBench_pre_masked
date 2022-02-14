
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (char*) ;

long FUNC_1(void *VAR_2, unsigned long VAR_3, int VAR_4) {
    unsigned long *VAR_5;
    unsigned char *VAR_6;
    unsigned long VAR_7, VAR_8 = 0, VAR_9;
    long VAR_10 = 0;
    unsigned long VAR_11;
    int VAR_12;
    VAR_7 = VAR_4 ? 0 : VAR_0;
    VAR_6 = (unsigned char*) VAR_2;
    VAR_12 = 0;
    while((unsigned long)VAR_6 & (sizeof(*VAR_5)-1) && VAR_3) {
        if (*VAR_6 != VAR_7) {
            VAR_12 = 1;
            break;
        }
        VAR_6++;
        VAR_3--;
        VAR_10 += 8;
    }


    VAR_5 = (unsigned long*) VAR_6;
    if (!VAR_12) {
        VAR_7 = VAR_4 ? 0 : VAR_1;
        while (VAR_3 >= sizeof(*VAR_5)) {
            if (*VAR_5 != VAR_7) break;
            VAR_5++;
            VAR_3 -= sizeof(*VAR_5);
            VAR_10 += sizeof(*VAR_5)*8;
        }
    }
    VAR_6 = (unsigned char*)VAR_5;
    for (VAR_11 = 0; VAR_11 < sizeof(*VAR_5); VAR_11++) {
        VAR_8 <<= 8;
        if (VAR_3) {
            VAR_8 |= *VAR_6;
            VAR_6++;
            VAR_3--;
        }
    }






    if (VAR_4 == 1 && VAR_8 == 0) return -1;





    VAR_9 = VAR_1;
    VAR_9 >>= 1;
    VAR_9 = ~VAR_9;

    while(VAR_9) {
        if (((VAR_9 & VAR_8) != 0) == VAR_4) return VAR_10;
        VAR_10++;
        VAR_9 >>= 1;
    }



    FUNC_0("End of redisBitpos() reached.");
    return 0;
}
