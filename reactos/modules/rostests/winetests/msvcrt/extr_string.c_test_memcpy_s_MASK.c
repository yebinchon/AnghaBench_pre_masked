
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dest ;
typedef int big ;


 scalar_t__ FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (char*,char,int) ;
 int FUNC_3 (int,char*,...) ;
 int FUNC_4 (char*,char const,char const,char const,char const,char const,char const,char,char) ;
 int FUNC_5 (char*,scalar_t__,char const*,scalar_t__) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    static char VAR_3[8], VAR_4[32];
    static const char VAR_5[] = {'T',0,'I','N','Y',0};
    static const char VAR_6[] = {'a','t','o','o','l','o','n','g','s','t','r','i','n','g',0};
    int VAR_7;
    if (!&FUNC_5) {
        FUNC_6("memcpy_s not found\n");
        return;
    }


    FUNC_2(VAR_3, 'X', sizeof(VAR_3));
    VAR_7 = FUNC_5(VAR_3, FUNC_0(VAR_3), VAR_5, FUNC_0(VAR_5));
    FUNC_3(VAR_7 == 0, "Copying a buffer into a big enough destination returned %d, expected 0\n", VAR_7);
    FUNC_4(VAR_3, VAR_5[0], VAR_5[1], VAR_5[2], VAR_5[3], VAR_5[4], VAR_5[5], 'X', 'X');


    VAR_2 = 0xdeadbeef;
    FUNC_2(VAR_3, 'X', sizeof(VAR_3));
    VAR_7 = FUNC_5(VAR_3, FUNC_0(VAR_3), VAR_6, FUNC_0(VAR_6));
    FUNC_3(VAR_7 == VAR_1, "Copying a big buffer to a small destination returned %d, expected ERANGE\n", VAR_7);
    FUNC_3(VAR_2 == VAR_1, "errno is %d, expected ERANGE\n", VAR_2);
    FUNC_4(VAR_3, 0, 0, 0, 0, 0, 0, 0, 0);


    VAR_2 = 0xdeadbeef;
    FUNC_2(VAR_3, 'X', sizeof(VAR_3));
    VAR_7 = FUNC_5(VAR_3, FUNC_0(VAR_3), ((void*)0), FUNC_0(VAR_5));
    FUNC_3(VAR_7 == VAR_0, "Copying a NULL source buffer returned %d, expected EINVAL\n", VAR_7);
    FUNC_3(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);
    FUNC_4(VAR_3, 0, 0, 0, 0, 0, 0, 0, 0);


    VAR_2 = 0xdeadbeef;
    FUNC_2(VAR_3, 'X', sizeof(VAR_3));
    VAR_7 = FUNC_5(VAR_3, 0, VAR_5, FUNC_0(VAR_5));
    FUNC_3(VAR_7 == VAR_1, "Copying into a destination of size 0 returned %d, expected ERANGE\n", VAR_7);
    FUNC_3(VAR_2 == VAR_1, "errno is %d, expected ERANGE\n", VAR_2);
    FUNC_4(VAR_3, 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X');


    VAR_2 = 0xdeadbeef;
    VAR_7 = FUNC_5(((void*)0), FUNC_0(VAR_3), VAR_5, FUNC_0(VAR_5));
    FUNC_3(VAR_7 == VAR_0, "Copying a tiny buffer to a big NULL destination returned %d, expected EINVAL\n", VAR_7);
    FUNC_3(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);


    VAR_2 = 0xdeadbeef;
    FUNC_2(VAR_3, 'X', sizeof(VAR_3));
    VAR_7 = FUNC_5(VAR_3, 0, ((void*)0), FUNC_0(VAR_5));
    FUNC_3(VAR_7 == VAR_0, "Copying a NULL buffer into a destination of size 0 returned %d, expected EINVAL\n", VAR_7);
    FUNC_3(VAR_2 == VAR_0, "errno is %d, expected EINVAL\n", VAR_2);
    FUNC_4(VAR_3, 'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X');

    VAR_7 = FUNC_5(VAR_4, FUNC_0(VAR_4), VAR_6, FUNC_0(VAR_6));
    FUNC_3(!VAR_7, "memcpy_s returned %d\n", VAR_7);
    FUNC_3(!FUNC_1(VAR_4, VAR_6, sizeof(VAR_6)), "unexpected buf\n");

    VAR_7 = FUNC_5(VAR_4 + 1, FUNC_0(VAR_4) - 1, VAR_4, FUNC_0(VAR_6));
    FUNC_3(!VAR_7, "memcpy_s returned %d\n", VAR_7);
    FUNC_3(!FUNC_1(VAR_4 + 1, VAR_6, sizeof(VAR_6)), "unexpected buf\n");

    VAR_7 = FUNC_5(VAR_4, FUNC_0(VAR_4), VAR_4 + 1, FUNC_0(VAR_6));
    FUNC_3(!VAR_7, "memcpy_s returned %d\n", VAR_7);
    FUNC_3(!FUNC_1(VAR_4, VAR_6, sizeof(VAR_6)), "unexpected buf\n");
}
