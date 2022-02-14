
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char const*,unsigned char const*) ;
 int FUNC_1 (int,char*,int) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    static const unsigned char VAR_2[] = {'a',0}, VAR_3[] = {'b',0};
    int VAR_4;

    if (!VAR_1)
    {
        FUNC_2("_mbscmp tests\n");
        return;
    }

    VAR_4 = FUNC_0(((void*)0), ((void*)0));
    FUNC_1(VAR_4 == VAR_0, "got %d\n", VAR_4);

    VAR_4 = FUNC_0(VAR_2, ((void*)0));
    FUNC_1(VAR_4 == VAR_0, "got %d\n", VAR_4);

    VAR_4 = FUNC_0(((void*)0), VAR_2);
    FUNC_1(VAR_4 == VAR_0, "got %d\n", VAR_4);

    VAR_4 = FUNC_0(VAR_2, VAR_2);
    FUNC_1(!VAR_4, "got %d\n", VAR_4);

    VAR_4 = FUNC_0(VAR_2, VAR_3);
    FUNC_1(VAR_4 == -1, "got %d\n", VAR_4);

    VAR_4 = FUNC_0(VAR_3, VAR_2);
    FUNC_1(VAR_4 == 1, "got %d\n", VAR_4);
}
