
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int FUNC_3(void)
{
    static char VAR_0[] = "abc";

    if (!FUNC_0(1, FUNC_1(((void*)0), ((void*)0)))
        | !FUNC_0(1, FUNC_1("abc", VAR_0))
        | !FUNC_0(0, FUNC_1("abc", ((void*)0)))
        | !FUNC_0(0, FUNC_1("abc", ""))
        | !FUNC_0(0, FUNC_1(((void*)0), VAR_0))
        | !FUNC_0(0, FUNC_2(((void*)0), ((void*)0)))
        | !FUNC_0(0, FUNC_1("", ((void*)0)))
        | !FUNC_0(0, FUNC_1(((void*)0), ""))
        | !FUNC_0(0, FUNC_2("", ""))
        | !FUNC_0(0, FUNC_1("\1\2\3\4\5", "\1x\3\6\5"))
        | !FUNC_0(0, FUNC_2("abc", VAR_0))
        | !FUNC_0(1, FUNC_2("abc", ((void*)0)))
        | !FUNC_0(1, FUNC_2(((void*)0), VAR_0))
        | !FUNC_0(0, FUNC_1("abcdef", "abcdefghijk")))
        goto err;
    return 1;

err:
    return 0;
}
