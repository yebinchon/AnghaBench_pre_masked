
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint ;


 int FUNC_0 (char*,char*) ;
 size_t FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2 (char *VAR_0) {
    uint VAR_1 = FUNC_1(VAR_0);
    while (VAR_1 && (VAR_0[VAR_1] != '/')) {
        VAR_1--;
    }
    if (VAR_1 == 0) {
        FUNC_0 (VAR_0, "/");
    } else {
        VAR_0[VAR_1] = '\0';
    }
}
