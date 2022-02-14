
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;


 int FUNC_0 (int,char*,int) ;

int FUNC_1(int VAR_0, char *VAR_1, int VAR_2)
{
    ssize_t VAR_3, VAR_4 = 0;
    while(VAR_4 != VAR_2) {
        VAR_3 = FUNC_0(VAR_0,VAR_1,VAR_2-VAR_4);
        if (VAR_3 == 0) return VAR_4;
        if (VAR_3 == -1) return -1;
        VAR_4 += VAR_3;
        VAR_1 += VAR_3;
    }
    return VAR_4;
}
