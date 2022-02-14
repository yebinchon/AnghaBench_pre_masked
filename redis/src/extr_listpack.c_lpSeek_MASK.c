
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long uint32_t ;


 long VAR_0 ;
 unsigned char* FUNC_0 (unsigned char*) ;
 long FUNC_1 (unsigned char*) ;
 unsigned char* FUNC_2 (unsigned char*) ;
 unsigned char* FUNC_3 (unsigned char*,unsigned char*) ;
 unsigned char* FUNC_4 (unsigned char*,unsigned char*) ;

unsigned char *FUNC_5(unsigned char *VAR_1, long VAR_2) {
    int VAR_3 = 1;





    uint32_t VAR_4 = FUNC_1(VAR_1);
    if (VAR_4 != VAR_0) {
        if (VAR_2 < 0) VAR_2 = (long)VAR_4+VAR_2;
        if (VAR_2 < 0) return ((void*)0);
        if (VAR_2 >= VAR_4) return ((void*)0);


        if (VAR_2 > VAR_4/2) {
            VAR_3 = 0;


            VAR_2 -= VAR_4;
        }
    } else {


        if (VAR_2 < 0) VAR_3 = 0;
    }


    if (VAR_3) {
        unsigned char *VAR_5 = FUNC_0(VAR_1);
        while (VAR_2 > 0 && VAR_5) {
            VAR_5 = FUNC_3(VAR_1,VAR_5);
            VAR_2--;
        }
        return VAR_5;
    } else {
        unsigned char *VAR_6 = FUNC_2(VAR_1);
        while (VAR_2 < -1 && VAR_6) {
            VAR_6 = FUNC_4(VAR_1,VAR_6);
            VAR_2++;
        }
        return VAR_6;
    }
}
