
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char WCHAR ;


 int FUNC_0 (char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (char*,char const*) ;
 int FUNC_4 (char*,char const*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    static const WCHAR VAR_3[] = {'M', 'i', 'X', 'e', 'D', 'l', 'o', 'w',
                                        'e', 'r', 'U', 'P', 'P', 'E', 'R', 0};
    static const WCHAR VAR_4[] = {'M', 'I', 'X', 'E', 'D', 'L', 'O',
                                           'W', 'E', 'R', 'U', 'P', 'P', 'E',
                                           'R', 0};
    WCHAR VAR_5[2*FUNC_0(VAR_3)];
    int VAR_6;

    if (!&FUNC_2)
    {
        FUNC_5("_wcsupr_s not found\n");
        return;
    }


    VAR_2 = VAR_0;
    VAR_6 = FUNC_2(((void*)0), 0);
    FUNC_1(VAR_6 == VAR_1, "Expected _wcsupr_s to fail with EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);


    VAR_2 = VAR_0;
    VAR_6 = FUNC_2(((void*)0), FUNC_0(VAR_5));
    FUNC_1(VAR_6 == VAR_1, "Expected _wcsupr_s to fail with EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);


    VAR_2 = VAR_0;
    VAR_5[0] = '\0';
    VAR_6 = FUNC_2(VAR_5, 0);
    FUNC_1(VAR_6 == VAR_1, "Expected _wcsupr_s to fail with EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_1(VAR_5[0] == '\0', "Expected the buffer to be unchanged\n");


    VAR_5[0] = '\0';
    VAR_6 = FUNC_2(VAR_5, 1);
    FUNC_1(VAR_6 == 0, "Expected _wcsupr_s to succeed, got %d\n", VAR_6);
    FUNC_1(VAR_5[0] == '\0', "Expected the buffer to be unchanged\n");


    VAR_2 = VAR_0;
    VAR_5[0] = 'x';
    VAR_6 = FUNC_2(VAR_5, 0);
    FUNC_1(VAR_6 == VAR_1, "Expected _wcsupr_s to fail with EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_1(VAR_5[0] == '\0', "Expected the first buffer character to be null\n");


    VAR_2 = VAR_0;
    VAR_5[0] = 'x';
    VAR_6 = FUNC_2(VAR_5, 1);
    FUNC_1(VAR_6 == VAR_1, "Expected _wcsupr_s to fail with EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_1(VAR_5[0] == '\0', "Expected the first buffer character to be null\n");


    FUNC_4(VAR_5, VAR_3);
    VAR_2 = VAR_0;
    VAR_6 = FUNC_2(VAR_5, 0);
    FUNC_1(VAR_6 == VAR_1, "Expected _wcsupr_s to fail with EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_1(VAR_5[0] == '\0', "Expected the first buffer character to be null\n");


    FUNC_4(VAR_5, VAR_3);
    VAR_6 = FUNC_2(VAR_5, FUNC_0(VAR_3));
    FUNC_1(VAR_6 == 0, "Expected _wcsupr_s to succeed, got %d\n", VAR_6);
    FUNC_1(!FUNC_3(VAR_5, VAR_4), "Expected the string to be fully upper-case\n");


    FUNC_4(VAR_5, VAR_3);
    VAR_2 = VAR_0;
    VAR_6 = FUNC_2(VAR_5, FUNC_0(VAR_3) - 1);
    FUNC_1(VAR_6 == VAR_1, "Expected _wcsupr_s to fail with EINVAL, got %d\n", VAR_6);
    FUNC_1(VAR_2 == VAR_1, "Expected errno to be EINVAL, got %d\n", VAR_2);
    FUNC_1(VAR_5[0] == '\0', "Expected the first buffer character to be null\n");


    FUNC_4(VAR_5, VAR_3);
    VAR_6 = FUNC_2(VAR_5, FUNC_0(VAR_5));
    FUNC_1(VAR_6 == 0, "Expected _wcsupr_s to succeed, got %d\n", VAR_6);
    FUNC_1(!FUNC_3(VAR_5, VAR_4), "Expected the string to be fully upper-case\n");
}
