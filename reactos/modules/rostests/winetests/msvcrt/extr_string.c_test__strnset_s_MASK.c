
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (char*,int,char,int) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4(void)
{
    char VAR_1[5] = {0};
    int VAR_2;

    if(!&FUNC_1) {
        FUNC_3("_strnset_s not available\n");
        return;
    }

    VAR_2 = FUNC_1(((void*)0), 0, 'a', 0);
    FUNC_0(VAR_2 == 0, "r = %d\n", VAR_2);

    VAR_1[0] = VAR_1[1] = VAR_1[2] = 'b';
    VAR_2 = FUNC_1(VAR_1, sizeof(VAR_1), 'a', 2);
    FUNC_0(VAR_2 == 0, "r = %d\n", VAR_2);
    FUNC_0(!FUNC_2(VAR_1, "aab"), "buf = %s\n", VAR_1);

    VAR_2 = FUNC_1(VAR_1, 0, 'a', 0);
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);

    VAR_2 = FUNC_1(((void*)0), 0, 'a', 1);
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);

    VAR_1[3] = 'b';
    VAR_2 = FUNC_1(VAR_1, sizeof(VAR_1)-1, 'c', 2);
    FUNC_0(VAR_2 == VAR_0, "r = %d\n", VAR_2);
    FUNC_0(!VAR_1[0] && VAR_1[1]=='c' && VAR_1[2]=='b', "buf = %s\n", VAR_1);
}
