
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int * FUNC_1 (char*,int,int ) ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 char* FUNC_4 () ;
 int FUNC_5 (char*,int,char const*) ;
 int FUNC_6 (char*,char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_7 (char*) ;
 size_t FUNC_8 (char*) ;

char *FUNC_9(const char *VAR_4) {
    char VAR_5[VAR_0];
    int VAR_6;

    if (!FUNC_3(VAR_1)) {


        return FUNC_4();
    } else if (FUNC_2()) {
        size_t VAR_7;

        FUNC_6("%s",VAR_4);
        FUNC_0(VAR_3);
        if (FUNC_1(VAR_5,VAR_0,VAR_2) == ((void*)0)) return ((void*)0);
        VAR_7 = FUNC_8(VAR_5);
        while(VAR_7 && (VAR_5[VAR_7-1] == '\n' || VAR_5[VAR_7-1] == '\r')) {
            VAR_7--;
            VAR_5[VAR_7] = '\0';
        }
        return FUNC_7(VAR_5);
    } else {
        VAR_6 = FUNC_5(VAR_5,VAR_0,VAR_4);
        if (VAR_6 == -1) return ((void*)0);
        return FUNC_7(VAR_5);
    }
}
