
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (unsigned char) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned char VAR_2 ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned char) ;

unsigned int FUNC_2(unsigned char *VAR_3, unsigned char VAR_4, unsigned int VAR_5) {
    unsigned char VAR_6 = 1, VAR_7[5];

    if (FUNC_0(VAR_4)) {


        if (VAR_5 <= 0x3f) {
            if (!VAR_3) return VAR_6;
            VAR_7[0] = VAR_0 | VAR_5;
        } else if (VAR_5 <= 0x3fff) {
            VAR_6 += 1;
            if (!VAR_3) return VAR_6;
            VAR_7[0] = VAR_1 | ((VAR_5 >> 8) & 0x3f);
            VAR_7[1] = VAR_5 & 0xff;
        } else {
            VAR_6 += 4;
            if (!VAR_3) return VAR_6;
            VAR_7[0] = VAR_2;
            VAR_7[1] = (VAR_5 >> 24) & 0xff;
            VAR_7[2] = (VAR_5 >> 16) & 0xff;
            VAR_7[3] = (VAR_5 >> 8) & 0xff;
            VAR_7[4] = VAR_5 & 0xff;
        }
    } else {

        if (!VAR_3) return VAR_6;
        VAR_7[0] = VAR_4;
    }


    FUNC_1(VAR_3,VAR_7,VAR_6);
    return VAR_6;
}
