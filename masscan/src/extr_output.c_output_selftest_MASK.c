
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (char*,char*) ;

int
FUNC_4(void)
{
    char *VAR_1;

    VAR_1 = FUNC_2("foo.bar", 1);
    if (FUNC_3(VAR_1, "foo.01.bar") != 0) {
        FUNC_0(VAR_0, "output: failed selftest\n");
        return 1;
    }
    FUNC_1(VAR_1);

    VAR_1 = FUNC_2("foo.b/ar", 2);
    if (FUNC_3(VAR_1, "foo.b/ar.02") != 0) {
        FUNC_0(VAR_0, "output: failed selftest\n");
        return 1;
    }
    FUNC_1(VAR_1);

    VAR_1 = FUNC_2(".foobar", 3);
    if (FUNC_3(VAR_1, ".03.foobar") != 0) {
        FUNC_0(VAR_0, "output: failed selftest\n");
        return 1;
    }
    FUNC_1(VAR_1);

    return 0;
}
