
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,double) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (char*,char*,size_t) ;
 char* FUNC_5 (char*,char) ;
 double FUNC_6 (char*,int *) ;

char *FUNC_7(lua_State *VAR_1, char *VAR_2) {
    char *VAR_3 = FUNC_5(VAR_2+1,'\r');
    char VAR_4[VAR_0+1];
    size_t VAR_5 = VAR_3-VAR_2-1;
    double VAR_6;

    if (VAR_5 <= VAR_0) {
        FUNC_4(VAR_4,VAR_2+1,VAR_5);
        VAR_4[VAR_5] = '\0';
        VAR_6 = FUNC_6(VAR_4,((void*)0));
    } else {
        VAR_6 = 0;
    }

    FUNC_0(VAR_1);
    FUNC_2(VAR_1,"double");
    FUNC_1(VAR_1,VAR_6);
    FUNC_3(VAR_1,-3);
    return VAR_3+2;
}
