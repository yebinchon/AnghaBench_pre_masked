
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*,char) ;
 int FUNC_1 (char*,int,char) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    wchar_t VAR_1[10];
    int VAR_2;

    if(!&FUNC_1) {
        FUNC_2("_wcsset_s not available\n");
        return;
    }

    VAR_2 = FUNC_1(((void*)0), 0, 'a');
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);

    VAR_1[0] = 'a';
    VAR_2 = FUNC_1(VAR_1, 0, 'a');
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);
    FUNC_0(VAR_1[0] == 'a', "str[0] = %d\n", VAR_1[0]);

    VAR_1[0] = 'a';
    VAR_1[1] = 'b';
    VAR_2 = FUNC_1(VAR_1, 2, 'c');
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);
    FUNC_0(!VAR_1[0], "str[0] = %d\n", VAR_1[0]);
    FUNC_0(VAR_1[1] == 'b', "str[1] = %d\n", VAR_1[1]);

    VAR_1[0] = 'a';
    VAR_1[1] = 0;
    VAR_1[2] = 'b';
    VAR_2 = FUNC_1(VAR_1, 3, 'c');
    FUNC_0(VAR_2 == 0, "r = %d\n", VAR_2);
    FUNC_0(VAR_1[0] == 'c', "str[0] = %d\n", VAR_1[0]);
    FUNC_0(VAR_1[1] == 0, "str[1] = %d\n", VAR_1[1]);
    FUNC_0(VAR_1[2] == 'b', "str[2] = %d\n", VAR_1[2]);
}
