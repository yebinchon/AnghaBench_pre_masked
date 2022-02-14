
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2 (char *VAR_0, char *VAR_1) {
    uint VAR_2 = FUNC_1(VAR_0) - FUNC_1(VAR_1);
    if ((VAR_2 > 2) && (VAR_0[VAR_2 - 1] == '/')) {
        VAR_0[VAR_2 - 1] = '\0';
    }
    else {
        if (VAR_2 == 0) {
            FUNC_0 (VAR_0, "/");
        } else {
            VAR_0[VAR_2] = '\0';
        }
    }
}
