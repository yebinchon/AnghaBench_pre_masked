
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long,int*,int) ;
 int VAR_1 ;

void FUNC_1(uint8_t *VAR_2, int* VAR_3) {
    int VAR_4;




    if (VAR_1 == 16384 && VAR_0 == 6) {
        uint8_t *VAR_5 = VAR_2;
        unsigned long VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15,
                      VAR_16, VAR_17, VAR_18, VAR_19, VAR_20, VAR_21;
        for (VAR_4 = 0; VAR_4 < 1024; VAR_4++) {

            VAR_6 = VAR_5[0] & 63;
            VAR_7 = (VAR_5[0] >> 6 | VAR_5[1] << 2) & 63;
            VAR_8 = (VAR_5[1] >> 4 | VAR_5[2] << 4) & 63;
            VAR_9 = (VAR_5[2] >> 2) & 63;
            VAR_10 = VAR_5[3] & 63;
            VAR_11 = (VAR_5[3] >> 6 | VAR_5[4] << 2) & 63;
            VAR_12 = (VAR_5[4] >> 4 | VAR_5[5] << 4) & 63;
            VAR_13 = (VAR_5[5] >> 2) & 63;
            VAR_14 = VAR_5[6] & 63;
            VAR_15 = (VAR_5[6] >> 6 | VAR_5[7] << 2) & 63;
            VAR_16 = (VAR_5[7] >> 4 | VAR_5[8] << 4) & 63;
            VAR_17 = (VAR_5[8] >> 2) & 63;
            VAR_18 = VAR_5[9] & 63;
            VAR_19 = (VAR_5[9] >> 6 | VAR_5[10] << 2) & 63;
            VAR_20 = (VAR_5[10] >> 4 | VAR_5[11] << 4) & 63;
            VAR_21 = (VAR_5[11] >> 2) & 63;

            VAR_3[VAR_6]++;
            VAR_3[VAR_7]++;
            VAR_3[VAR_8]++;
            VAR_3[VAR_9]++;
            VAR_3[VAR_10]++;
            VAR_3[VAR_11]++;
            VAR_3[VAR_12]++;
            VAR_3[VAR_13]++;
            VAR_3[VAR_14]++;
            VAR_3[VAR_15]++;
            VAR_3[VAR_16]++;
            VAR_3[VAR_17]++;
            VAR_3[VAR_18]++;
            VAR_3[VAR_19]++;
            VAR_3[VAR_20]++;
            VAR_3[VAR_21]++;

            VAR_5 += 12;
        }
    } else {
        for(VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
            unsigned long VAR_22;
            FUNC_0(VAR_22,VAR_2,VAR_4);
            VAR_3[VAR_22]++;
        }
    }
}
