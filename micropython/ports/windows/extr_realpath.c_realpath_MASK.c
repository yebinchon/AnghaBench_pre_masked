
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (char*,char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int VAR_5 ;
 char* FUNC_2 (int ) ;
 char* FUNC_3 (char*) ;

char *FUNC_4(const char *VAR_6, char *VAR_7) {
    char *VAR_8 = ((void*)0);
    if (VAR_6 == ((void*)0)) {
        VAR_5 = VAR_0;
    } else if (FUNC_1(VAR_6, VAR_3) == 0) {
        VAR_8 = VAR_7;
        if (VAR_8 == ((void*)0))
            VAR_8 = FUNC_2(VAR_4);
        if (VAR_8 == ((void*)0)) {
            VAR_5 = VAR_2;
        } else {
            VAR_8 = FUNC_0(VAR_8, VAR_6, VAR_4);
            if (VAR_8 == ((void*)0))
                VAR_5 = VAR_1;
        }
    }
    return FUNC_3(VAR_8);
}
