
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int rio ;


 int FUNC_0 (char*,int,long long) ;
 int FUNC_1 (long long,unsigned char*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,unsigned char*,int) ;
 int FUNC_4 (int) ;

ssize_t FUNC_5(rio *VAR_0, long long VAR_1) {
    unsigned char VAR_2[32];
    ssize_t VAR_3, VAR_4 = 0;
    int VAR_5 = FUNC_1(VAR_1,VAR_2);
    if (VAR_5 > 0) {
        return FUNC_3(VAR_0,VAR_2,VAR_5);
    } else {

        VAR_5 = FUNC_0((char*)VAR_2,32,VAR_1);
        FUNC_4(VAR_5 < 32);
        if ((VAR_3 = FUNC_2(VAR_0,VAR_5)) == -1) return -1;
        VAR_4 += VAR_3;
        if ((VAR_3 = FUNC_3(VAR_0,VAR_2,VAR_5)) == -1) return -1;
        VAR_4 += VAR_3;
    }
    return VAR_4;
}
