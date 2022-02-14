
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char** cvec; int len; } ;
typedef TYPE_1__ linenoiseCompletions ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,size_t) ;
 char** FUNC_3 (char**,int) ;
 size_t FUNC_4 (char const*) ;

void FUNC_5(linenoiseCompletions *VAR_0, const char *VAR_1) {
    size_t VAR_2 = FUNC_4(VAR_1);
    char *VAR_3, **VAR_4;

    VAR_3 = FUNC_1(VAR_2+1);
    if (VAR_3 == ((void*)0)) return;
    FUNC_2(VAR_3,VAR_1,VAR_2+1);
    VAR_4 = FUNC_3(VAR_0->cvec,sizeof(char*)*(VAR_0->len+1));
    if (VAR_4 == ((void*)0)) {
        FUNC_0(VAR_3);
        return;
    }
    VAR_0->cvec = VAR_4;
    VAR_0->cvec[VAR_0->len++] = VAR_3;
}
