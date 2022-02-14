
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int test ;
struct Range {int begin; int end; } ;


 int FUNC_0 (struct Range) ;
 scalar_t__ FUNC_1 (char*,int,char**) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int) ;

int
FUNC_4()
{
    char VAR_0[] = " test 1 ";

    FUNC_3(VAR_0, sizeof(VAR_0));
    if (FUNC_2(VAR_0, "test 1") != 0)
        return 1;

    {
        struct Range VAR_1;

        VAR_1.begin = 16;
        VAR_1.end = 32-1;
        if (FUNC_0(VAR_1) != 28)
            return 1;

        VAR_1.begin = 1;
        VAR_1.end = 13;
        if (FUNC_0(VAR_1) != 0)
            return 1;


    }


    {
        int VAR_2 = 6;
        char *VAR_3[] = { "foo", "bar", "-ddd", "--readscan", "xxx", "--something" };

        if (FUNC_1("--nothing", VAR_2, VAR_3))
            return 1;

        if (!FUNC_1("--readscan", VAR_2, VAR_3))
            return 1;
    }

    return 0;
}
