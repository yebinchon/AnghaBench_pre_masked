
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lua_State ;


 char* FUNC_0 (int *,char*,char) ;
 char* FUNC_1 (int *,char*,char) ;
 char* FUNC_2 (int *,char*) ;
 char* FUNC_3 (int *,char*) ;
 char* FUNC_4 (int *,char*) ;
 char* FUNC_5 (int *,char*) ;
 char* FUNC_6 (int *,char*) ;
 char* FUNC_7 (int *,char*) ;

char *FUNC_8(lua_State *VAR_0, char* VAR_1) {
    char *VAR_2 = VAR_1;

    switch(*VAR_2) {
    case ':': VAR_2 = FUNC_5(VAR_0,VAR_1); break;
    case '$': VAR_2 = FUNC_2(VAR_0,VAR_1); break;
    case '+': VAR_2 = FUNC_7(VAR_0,VAR_1); break;
    case '-': VAR_2 = FUNC_4(VAR_0,VAR_1); break;
    case '*': VAR_2 = FUNC_0(VAR_0,VAR_1,*VAR_2); break;
    case '%': VAR_2 = FUNC_0(VAR_0,VAR_1,*VAR_2); break;
    case '~': VAR_2 = FUNC_0(VAR_0,VAR_1,*VAR_2); break;
    case '_': VAR_2 = FUNC_6(VAR_0,VAR_1); break;
    case '#': VAR_2 = FUNC_1(VAR_0,VAR_1,VAR_2[1]); break;
    case ',': VAR_2 = FUNC_3(VAR_0,VAR_1); break;
    }
    return VAR_2;
}
