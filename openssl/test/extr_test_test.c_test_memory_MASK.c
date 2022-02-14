
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,int,char*,int) ;
 int FUNC_2 (char*,int ,char*,int ) ;

__attribute__((used)) static int FUNC_3(void)
{
    static char VAR_0[] = "xyz";

    if (!FUNC_0(1, FUNC_1(((void*)0), 0, ((void*)0), 0))
        | !FUNC_0(1, FUNC_1(((void*)0), 1, ((void*)0), 2))
        | !FUNC_0(0, FUNC_1(((void*)0), 0, "xyz", 3))
        | !FUNC_0(0, FUNC_1(((void*)0), 7, "abc", 3))
        | !FUNC_0(0, FUNC_2(((void*)0), 0, ((void*)0), 0))
        | !FUNC_0(0, FUNC_1(((void*)0), 0, "", 0))
        | !FUNC_0(0, FUNC_1("", 0, ((void*)0), 0))
        | !FUNC_0(0, FUNC_2("", 0, "", 0))
        | !FUNC_0(0, FUNC_1("xyz", 3, ((void*)0), 0))
        | !FUNC_0(0, FUNC_1("xyz", 3, VAR_0, sizeof(VAR_0)))
        | !FUNC_0(1, FUNC_1("xyz", 4, VAR_0, sizeof(VAR_0))))
        goto err;
    return 1;

err:
    return 0;
}
