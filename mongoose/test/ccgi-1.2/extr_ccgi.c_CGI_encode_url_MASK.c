
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 int FUNC_2 (char const*,char*,char const*) ;

char *
FUNC_3(const char *VAR_0, const char *VAR_1) {
    char *VAR_2;

    if (VAR_0 == 0) {
        return 0;
    }
    VAR_2 = FUNC_0(FUNC_1(VAR_0, VAR_1) + 1);
    FUNC_2(VAR_0, VAR_2, VAR_1);
    return VAR_2;
}
