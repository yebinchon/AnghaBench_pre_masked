
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int,char*,int,long long) ;

ssize_t FUNC_1(int VAR_0, char *VAR_1, ssize_t VAR_2, long long VAR_3) {
    ssize_t VAR_4 = 0;

    VAR_2--;
    while(VAR_2) {
        char VAR_5;

        if (FUNC_0(VAR_0,&VAR_5,1,VAR_3) == -1) return -1;
        if (VAR_5 == '\n') {
            *VAR_1 = '\0';
            if (VAR_4 && *(VAR_1-1) == '\r') *(VAR_1-1) = '\0';
            return VAR_4;
        } else {
            *VAR_1++ = VAR_5;
            *VAR_1 = '\0';
            VAR_4++;
        }
        VAR_2--;
    }
    return VAR_4;
}
