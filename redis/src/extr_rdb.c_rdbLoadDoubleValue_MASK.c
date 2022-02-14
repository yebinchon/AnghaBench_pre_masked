
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rio ;


 double VAR_0 ;
 double VAR_1 ;
 double VAR_2 ;
 scalar_t__ FUNC_0 (int *,...) ;
 int FUNC_1 (char*,char*,double*) ;

int FUNC_2(rio *VAR_3, double *VAR_4) {
    char VAR_5[256];
    unsigned char VAR_6;

    if (FUNC_0(VAR_3,&VAR_6,1) == 0) return -1;
    switch(VAR_6) {
    case 255: *VAR_4 = VAR_1; return 0;
    case 254: *VAR_4 = VAR_2; return 0;
    case 253: *VAR_4 = VAR_0; return 0;
    default:
        if (FUNC_0(VAR_3,VAR_5,VAR_6) == 0) return -1;
        VAR_5[VAR_6] = '\0';
        FUNC_1(VAR_5, "%lg", VAR_4);
        return 0;
    }
}
