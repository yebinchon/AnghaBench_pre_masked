
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned char VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned int) ;
 int FUNC_2 (unsigned char*,unsigned int) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned char*,unsigned int,unsigned int*) ;
 unsigned int FUNC_4 (unsigned char*) ;
 unsigned int FUNC_5 (unsigned int,unsigned int) ;
 unsigned char* FUNC_6 (unsigned char*,unsigned int) ;

unsigned char *FUNC_7(unsigned char *VAR_2, unsigned char *VAR_3, unsigned int VAR_4, unsigned char *VAR_5, unsigned int VAR_6, int *VAR_7) {
    unsigned int VAR_8, VAR_9;
    unsigned int VAR_10, VAR_11 = FUNC_5(VAR_4,VAR_6);
    unsigned int VAR_12, VAR_13;
    unsigned char *VAR_14;

    VAR_10 = VAR_11;
    if (VAR_7) *VAR_7 = 0;
    VAR_14 = FUNC_3(VAR_2,VAR_3,VAR_4,&VAR_8);
    if (VAR_14 == ((void*)0)) {

        VAR_2 = FUNC_6(VAR_2, VAR_8+VAR_11);
        VAR_14 = VAR_2+VAR_8-1;
        VAR_8 = VAR_8+VAR_11;


        if (VAR_2[0] < VAR_0) VAR_2[0]++;
    } else {


        if (VAR_7) *VAR_7 = 1;
        VAR_10 = FUNC_4(VAR_14);
        if (VAR_10 < VAR_11) {



            VAR_9 = VAR_14-VAR_2;
            VAR_2 = FUNC_6(VAR_2, VAR_8-VAR_10+VAR_11);
            VAR_14 = VAR_2+VAR_9;



            FUNC_1(VAR_14+VAR_11, VAR_14+VAR_10, VAR_8-(VAR_9+VAR_10+1));
            VAR_8 = VAR_8-VAR_10+VAR_11;
            VAR_10 = VAR_11;
        }
    }





    VAR_12 = VAR_10-VAR_11;
    if (VAR_12 >= VAR_1) {


        VAR_9 = VAR_14-VAR_2;
        FUNC_1(VAR_14+VAR_11, VAR_14+VAR_10, VAR_8-(VAR_9+VAR_10+1));
        VAR_8 -= VAR_12;
        VAR_2 = FUNC_6(VAR_2, VAR_8);
        VAR_14 = VAR_2+VAR_9;
        VAR_13 = 0;
    } else {
        VAR_13 = VAR_12;
    }



    VAR_14 += FUNC_2(VAR_14,VAR_4);
    FUNC_0(VAR_14,VAR_3,VAR_4);
    VAR_14 += VAR_4;

    VAR_14 += FUNC_2(VAR_14,VAR_6);
    *VAR_14++ = VAR_13;
    FUNC_0(VAR_14,VAR_5,VAR_6);
    return VAR_2;
}
