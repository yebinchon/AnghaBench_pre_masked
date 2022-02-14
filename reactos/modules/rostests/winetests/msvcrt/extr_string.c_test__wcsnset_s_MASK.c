
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char) ;
 int FUNC_1 (char*,int,char,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    wchar_t VAR_1[] = { 't','e','x','t',0 };
    int VAR_2;

    if(!&FUNC_1) {
        FUNC_2("_wcsnset_s not available\n");
        return;
    }

    VAR_2 = FUNC_1(((void*)0), 0, 'a', 0);
    FUNC_0(VAR_2 == 0, "r = %d\n", VAR_2);

    VAR_2 = FUNC_1(VAR_1, 0, 'a', 1);
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);
    FUNC_0(VAR_1[0] == 't', "text[0] = %d\n", VAR_1[0]);

    VAR_2 = FUNC_1(((void*)0), 2, 'a', 1);
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);

    VAR_2 = FUNC_1(VAR_1, 2, 'a', 3);
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);
    FUNC_0(VAR_1[0] == 0, "text[0] = %d\n", VAR_1[0]);
    FUNC_0(VAR_1[1] == 'e', "text[1] = %d\n", VAR_1[1]);

    VAR_1[0] = 't';
    VAR_2 = FUNC_1(VAR_1, 5, 'a', 1);
    FUNC_0(VAR_2 == 0, "r = %d\n", VAR_2);
    FUNC_0(VAR_1[0] == 'a', "text[0] = %d\n", VAR_1[0]);
    FUNC_0(VAR_1[1] == 'e', "text[1] = %d\n", VAR_1[1]);

    VAR_1[1] = 0;
    VAR_2 = FUNC_1(VAR_1, 5, 'b', 3);
    FUNC_0(VAR_2 == 0, "r = %d\n", VAR_2);
    FUNC_0(VAR_1[0] == 'b', "text[0] = %d\n", VAR_1[0]);
    FUNC_0(VAR_1[1] == 0, "text[1] = %d\n", VAR_1[1]);
    FUNC_0(VAR_1[2] == 'x', "text[2] = %d\n", VAR_1[2]);
}
