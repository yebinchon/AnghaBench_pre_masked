
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

void FUNC_3(const char *VAR_2) {
    if (VAR_2[0] != '\0'
        && (FUNC_0(VAR_1)[0] == ((void*)0)
            || FUNC_2(FUNC_0(VAR_1)[0], VAR_2) != 0)) {


        char *VAR_3 = FUNC_1(VAR_2);
        if (VAR_3 != ((void*)0)) {
            for (int VAR_4 = VAR_0 - 1; VAR_4 > 0; VAR_4--) {
                FUNC_0(VAR_1)[VAR_4] = FUNC_0(VAR_1)[VAR_4 - 1];
            }
            FUNC_0(VAR_1)[0] = VAR_3;
        }
    }
}
