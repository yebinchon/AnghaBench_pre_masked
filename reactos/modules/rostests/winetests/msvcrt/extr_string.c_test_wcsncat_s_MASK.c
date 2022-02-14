
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char wchar_t ;
typedef int abcW ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 (int,char*,int) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    static wchar_t VAR_4[] = {'a','b','c',0};
    int VAR_5;
    wchar_t VAR_6[4];
    wchar_t VAR_7[4];

    if (!&FUNC_2)
    {
        FUNC_3("skipping wcsncat_s tests\n");
        return;
    }

    FUNC_0(VAR_7, VAR_4, sizeof(VAR_4));
    VAR_6[0] = 0;
    VAR_5 = FUNC_2(((void*)0), 4, VAR_7, 4);
    FUNC_1(VAR_5 == VAR_0, "err = %d\n", VAR_5);
    VAR_5 = FUNC_2(VAR_6, 0, VAR_7, 4);
    FUNC_1(VAR_5 == VAR_0, "err = %d\n", VAR_5);
    VAR_5 = FUNC_2(VAR_6, 0, VAR_7, VAR_3);
    FUNC_1(VAR_5 == VAR_0, "err = %d\n", VAR_5);
    VAR_5 = FUNC_2(VAR_6, 4, ((void*)0), 0);
    FUNC_1(VAR_5 == 0, "err = %d\n", VAR_5);

    VAR_6[0] = 0;
    VAR_5 = FUNC_2(VAR_6, 2, VAR_7, 4);
    FUNC_1(VAR_5 == VAR_1, "err = %d\n", VAR_5);

    VAR_6[0] = 0;
    VAR_5 = FUNC_2(VAR_6, 2, VAR_7, VAR_3);
    FUNC_1(VAR_5 == VAR_2, "err = %d\n", VAR_5);
    FUNC_1(VAR_6[0] == 'a' && VAR_6[1] == 0, "dst is %s\n", FUNC_4(VAR_6));

    FUNC_0(VAR_6, VAR_4, sizeof(VAR_4));
    VAR_6[3] = 'd';
    VAR_5 = FUNC_2(VAR_6, 4, VAR_7, 4);
    FUNC_1(VAR_5 == VAR_0, "err = %d\n", VAR_5);
}
