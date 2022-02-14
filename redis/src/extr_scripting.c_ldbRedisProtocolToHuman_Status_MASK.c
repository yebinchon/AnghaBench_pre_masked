
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 int FUNC_0 (int ,char*,int) ;
 char* FUNC_1 (char*,char) ;

char *FUNC_2(sds *VAR_0, char *VAR_1) {
    char *VAR_2 = FUNC_1(VAR_1+1,'\r');

    *VAR_0 = FUNC_0(*VAR_0,VAR_1,VAR_2-VAR_1);
    return VAR_2+2;
}
