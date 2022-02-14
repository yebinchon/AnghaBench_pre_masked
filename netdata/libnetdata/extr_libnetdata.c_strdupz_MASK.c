
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (int) ;

char *FUNC_3(const char *VAR_0) {
    char *VAR_1 = FUNC_1(VAR_0);
    if (FUNC_2(!VAR_1)) FUNC_0("Cannot strdup() string '%s'", VAR_0);
    return VAR_1;
}
