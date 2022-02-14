
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, int *VAR_1)
{
    if (FUNC_1(VAR_0, "Yes") == 0) {
        *VAR_1 = 1;
        return 1;
    }
    else if (FUNC_1(VAR_0, "No") == 0) {
        *VAR_1 = 0;
        return 1;
    }
    FUNC_0("parse_boolean given: '%s'", VAR_0);
    return 0;
}
