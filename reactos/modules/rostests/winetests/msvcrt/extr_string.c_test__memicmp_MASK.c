
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char const*,char const*,int) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void)
{
    static const char *VAR_4 = "abc";
    static const char *VAR_5 = "aBd";
    int VAR_6;

    VAR_6 = FUNC_1(((void*)0), ((void*)0), 0);
    FUNC_0(!VAR_6, "got %d\n", VAR_6);

    VAR_6 = FUNC_1(VAR_4, VAR_5, 2);
    FUNC_0(!VAR_6, "got %d\n", VAR_6);

    VAR_6 = FUNC_1(VAR_4, VAR_5, 3);
    FUNC_0(VAR_6 == -1, "got %d\n", VAR_6);

    if (!VAR_3)
        return;


    VAR_2 = 0xdeadbeef;
    VAR_6 = FUNC_1(((void*)0), ((void*)0), 1);
    FUNC_0(VAR_6 == VAR_1, "got %d\n", VAR_6);
    FUNC_0(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);

    VAR_2 = 0xdeadbeef;
    VAR_6 = FUNC_1(VAR_4, ((void*)0), 1);
    FUNC_0(VAR_6 == VAR_1, "got %d\n", VAR_6);
    FUNC_0(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);

    VAR_2 = 0xdeadbeef;
    VAR_6 = FUNC_1(((void*)0), VAR_5, 1);
    FUNC_0(VAR_6 == VAR_1, "got %d\n", VAR_6);
    FUNC_0(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);
}
