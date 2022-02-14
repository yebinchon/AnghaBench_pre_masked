
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rio ;
typedef int buf ;


 int FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 int FUNC_2 (char*,int,long long) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (char*,int,char*,double) ;
 unsigned char FUNC_5 (char*) ;

int FUNC_6(rio *VAR_0, double VAR_1) {
    unsigned char VAR_2[128];
    int VAR_3;

    if (FUNC_1(VAR_1)) {
        VAR_2[0] = 253;
        VAR_3 = 1;
    } else if (!FUNC_0(VAR_1)) {
        VAR_3 = 1;
        VAR_2[0] = (VAR_1 < 0) ? 255 : 254;
    } else {
            FUNC_4((char*)VAR_2+1,sizeof(VAR_2)-1,"%.17g",VAR_1);
        VAR_2[0] = FUNC_5((char*)VAR_2+1);
        VAR_3 = VAR_2[0]+1;
    }
    return FUNC_3(VAR_0,VAR_2,VAR_3);
}
