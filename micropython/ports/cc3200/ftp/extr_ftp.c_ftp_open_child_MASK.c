
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3 (char *VAR_0, char *VAR_1) {
    if (VAR_1[0] == '/') {
        FUNC_1 (VAR_0, VAR_1);
    } else {
        if (FUNC_2(VAR_0) > 1) {
            FUNC_0 (VAR_0, "/");
        }
        FUNC_0 (VAR_0, VAR_1);
    }

    uint VAR_2 = FUNC_2(VAR_0);
    if ((VAR_2 > 1) && (VAR_0[VAR_2 - 1] == '/')) {
        VAR_0[VAR_2 - 1] = '\0';
    }
}
