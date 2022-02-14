
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;


 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,int,int) ;

uint32_t FUNC_2(uint8_t VAR_0, uint8_t VAR_1, uint8_t VAR_2) {
    uint8_t VAR_3 = FUNC_1(VAR_1, VAR_0, VAR_2);
    uint8_t VAR_4 = FUNC_0(VAR_1, VAR_0, VAR_2);
    uint8_t VAR_5 = VAR_4 - VAR_3;

    int VAR_6 = 0;
    int VAR_7 = 0;
    int VAR_8 = 0;

    if(VAR_5 == 0) {

        VAR_6 = -1;
        VAR_7 = 0;
    } else {
        int VAR_9;

        if(VAR_1 == VAR_4)
            VAR_9 = ((VAR_0-VAR_2)*60) / VAR_5;
        else if(VAR_0 == VAR_4)
            VAR_9 = ((VAR_2-VAR_1)*60) / VAR_5 + 120;
        else
            VAR_9 = ((VAR_1-VAR_0)*60) / VAR_5 + 240;

        if(VAR_9 < 0)
            VAR_9 += 360;

        VAR_6 = VAR_9;





        VAR_7 = (256*VAR_5-8) / VAR_4;
    }
    VAR_8 = VAR_4;

    uint32_t VAR_10 = (VAR_6 << 16) | (VAR_7 << 8) | VAR_8;
    return VAR_10;

}
