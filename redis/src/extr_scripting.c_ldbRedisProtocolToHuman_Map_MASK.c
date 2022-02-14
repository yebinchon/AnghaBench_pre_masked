
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sds ;


 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,char*,int) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,int,long long*) ;

char *FUNC_4(sds *VAR_0, char *VAR_1) {
    char *VAR_2 = FUNC_2(VAR_1+1,'\r');
    long long VAR_3;
    int VAR_4 = 0;

    FUNC_3(VAR_1+1,VAR_2-VAR_1-1,&VAR_3);
    VAR_2 += 2;
    *VAR_0 = FUNC_1(*VAR_0,"{",1);
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_2 = FUNC_0(VAR_0,VAR_2);
        *VAR_0 = FUNC_1(*VAR_0," => ",4);
        VAR_2 = FUNC_0(VAR_0,VAR_2);
        if (VAR_4 != VAR_3-1) *VAR_0 = FUNC_1(*VAR_0,",",1);
    }
    *VAR_0 = FUNC_1(*VAR_0,"}",1);
    return VAR_2;
}
