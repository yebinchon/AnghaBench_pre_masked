
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned char VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (unsigned char*) ;
 unsigned long FUNC_1 (unsigned char*,int) ;
 int FUNC_2 (unsigned char*,int,unsigned char*,int*) ;
 int FUNC_3 (unsigned char*,unsigned char*,int) ;
 int FUNC_4 (unsigned char*) ;
 int FUNC_5 (unsigned char*) ;
 int FUNC_6 (unsigned char*,int) ;
 int FUNC_7 (unsigned char*,int) ;
 unsigned char* FUNC_8 (unsigned char*) ;
 int FUNC_9 (unsigned char*) ;
 unsigned char* FUNC_10 (int) ;
 unsigned char* FUNC_11 (unsigned char*,int) ;
 int FUNC_12 (unsigned char*,unsigned char*,int) ;
 int FUNC_13 (unsigned char*,unsigned char*,int) ;
 int FUNC_14 (unsigned char*,char,int) ;

unsigned char *FUNC_15(unsigned char *VAR_9, unsigned char *VAR_10, uint32_t VAR_11, unsigned char *VAR_12, int VAR_13, unsigned char **VAR_14) {
    unsigned char VAR_15[VAR_6];
    unsigned char VAR_16[VAR_5];

    uint64_t VAR_17;




    if (VAR_10 == ((void*)0)) VAR_13 = VAR_7;





    if (VAR_13 == VAR_0) {
        VAR_12 = FUNC_8(VAR_12);
        VAR_13 = VAR_1;
    }



    unsigned long VAR_18 = VAR_12-VAR_9;
    int VAR_19;
    if (VAR_10) {
        VAR_19 = FUNC_2(VAR_10,VAR_11,VAR_15,&VAR_17);
    } else {
        VAR_19 = -1;
        VAR_17 = 0;
    }




    unsigned long VAR_20 = VAR_10 ? FUNC_1(VAR_16,VAR_17) : 0;
    uint64_t VAR_21 = FUNC_5(VAR_9);
    uint32_t VAR_22 = 0;
    if (VAR_13 == VAR_7) {
        VAR_22 = FUNC_0(VAR_12);
        VAR_22 += FUNC_1(((void*)0),VAR_22);
    }

    uint64_t VAR_23 = VAR_21 + VAR_17 + VAR_20
                                  - VAR_22;
    if (VAR_23 > VAR_8) return ((void*)0);







    unsigned char *VAR_24 = VAR_9 + VAR_18;


    if (VAR_23 > VAR_21) {
        if ((VAR_9 = FUNC_11(VAR_9,VAR_23)) == ((void*)0)) return ((void*)0);
        VAR_24 = VAR_9 + VAR_18;
    }



    if (VAR_13 == VAR_1) {
        FUNC_13(VAR_24+VAR_17+VAR_20,VAR_24,VAR_21-VAR_18);
    } else {
        long VAR_25 = (VAR_17+VAR_20)-VAR_22;
        FUNC_13(VAR_24+VAR_22+VAR_25,
                VAR_24+VAR_22,
                VAR_21-VAR_18-VAR_22);
    }


    if (VAR_23 < VAR_21) {
        if ((VAR_9 = FUNC_11(VAR_9,VAR_23)) == ((void*)0)) return ((void*)0);
        VAR_24 = VAR_9 + VAR_18;
    }


    if (VAR_14) {
        *VAR_14 = VAR_24;


        if (!VAR_10 && VAR_24[0] == VAR_3) *VAR_14 = ((void*)0);
    }
    if (VAR_10) {
        if (VAR_19 == VAR_2) {
            FUNC_12(VAR_24,VAR_15,VAR_17);
        } else {
            FUNC_3(VAR_24,VAR_10,VAR_11);
        }
        VAR_24 += VAR_17;
        FUNC_12(VAR_24,VAR_16,VAR_20);
        VAR_24 += VAR_20;
    }


    if (VAR_13 != VAR_7 || VAR_10 == ((void*)0)) {
        uint32_t VAR_26 = FUNC_4(VAR_9);
        if (VAR_26 != VAR_4) {
            if (VAR_10)
                FUNC_6(VAR_9,VAR_26+1);
            else
                FUNC_6(VAR_9,VAR_26-1);
        }
    }
    FUNC_7(VAR_9,VAR_23);
    return VAR_9;
}
