
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (char const*,char const*,int,int *) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    static const char *VAR_3 = "abc";
    static const char *VAR_4 = "aBd";
    int VAR_5;

    if (!&FUNC_1)
    {
        FUNC_2("_memicmp_l not found.\n");
        return;
    }

    VAR_2 = 0xdeadbeef;
    VAR_5 = FUNC_1(((void*)0), ((void*)0), 0, ((void*)0));
    FUNC_0(!VAR_5, "got %d\n", VAR_5);
    FUNC_0(VAR_2 == 0xdeadbeef, "errno is %d, expected 0xdeadbeef\n", VAR_2);

    VAR_2 = 0xdeadbeef;
    VAR_5 = FUNC_1(((void*)0), ((void*)0), 1, ((void*)0));
    FUNC_0(VAR_5 == VAR_1, "got %d\n", VAR_5);
    FUNC_0(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);

    VAR_2 = 0xdeadbeef;
    VAR_5 = FUNC_1(VAR_3, ((void*)0), 1, ((void*)0));
    FUNC_0(VAR_5 == VAR_1, "got %d\n", VAR_5);
    FUNC_0(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);

    VAR_2 = 0xdeadbeef;
    VAR_5 = FUNC_1(((void*)0), VAR_4, 1, ((void*)0));
    FUNC_0(VAR_5 == VAR_1, "got %d\n", VAR_5);
    FUNC_0(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);

    VAR_2 = 0xdeadbeef;
    VAR_5 = FUNC_1(VAR_3, VAR_4, 2, ((void*)0));
    FUNC_0(!VAR_5, "got %d\n", VAR_5);
    FUNC_0(VAR_2 == 0xdeadbeef, "errno is %d, expected 0xdeadbeef\n", VAR_2);

    VAR_2 = 0xdeadbeef;
    VAR_5 = FUNC_1(VAR_3, VAR_4, 3, ((void*)0));
    FUNC_0(VAR_5 == -1, "got %d\n", VAR_5);
    FUNC_0(VAR_2 == 0xdeadbeef, "errno is %d, expected 0xdeadbeef\n", VAR_2);
}
