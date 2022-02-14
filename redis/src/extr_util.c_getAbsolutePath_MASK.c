
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* sds ;
typedef int cwd ;


 int * FUNC_0 (char*,int) ;
 char* FUNC_1 (char*,char*) ;
 char* FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*,int,int) ;
 char* FUNC_7 (char*,char*) ;

sds FUNC_8(char *VAR_0) {
    char VAR_1[1024];
    sds VAR_2;
    sds VAR_3 = FUNC_5(VAR_0);

    VAR_3 = FUNC_7(VAR_3," \r\n\t");
    if (VAR_3[0] == '/') return VAR_3;


    if (FUNC_0(VAR_1,sizeof(VAR_1)) == ((void*)0)) {
        FUNC_3(VAR_3);
        return ((void*)0);
    }
    VAR_2 = FUNC_5(VAR_1);
    if (FUNC_4(VAR_2) && VAR_2[FUNC_4(VAR_2)-1] != '/')
        VAR_2 = FUNC_1(VAR_2,"/");







    while (FUNC_4(VAR_3) >= 3 &&
           VAR_3[0] == '.' && VAR_3[1] == '.' && VAR_3[2] == '/')
    {
        FUNC_6(VAR_3,3,-1);
        if (FUNC_4(VAR_2) > 1) {
            char *VAR_4 = VAR_2 + FUNC_4(VAR_2)-2;
            int VAR_5 = 1;

            while(*VAR_4 != '/') {
                VAR_4--;
                VAR_5++;
            }
            FUNC_6(VAR_2,0,-(VAR_5+1));
        }
    }


    VAR_2 = FUNC_2(VAR_2,VAR_3);
    FUNC_3(VAR_3);
    return VAR_2;
}
