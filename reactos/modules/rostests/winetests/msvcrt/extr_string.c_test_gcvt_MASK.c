
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ errno_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_0 (double,int,char*) ;
 scalar_t__ VAR_2 ;
 char* FUNC_1 (double,int,char*) ;
 int FUNC_2 (int,char*,...) ;
 scalar_t__ FUNC_3 (char*,int,int,int) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    char VAR_3[1024], *VAR_4;
    errno_t VAR_5;

    if(!&FUNC_3) {
        FUNC_5("Skipping _gcvt tests\n");
        return;
    }

    VAR_2 = 0;
    VAR_4 = FUNC_0(1.2, -1, VAR_3);
    FUNC_2(VAR_4 == ((void*)0), "res != NULL\n");
    FUNC_2(VAR_2 == VAR_1, "errno = %d\n", VAR_2);

    VAR_2 = 0;
    VAR_4 = FUNC_0(1.2, 5, ((void*)0));
    FUNC_2(VAR_4 == ((void*)0), "res != NULL\n");
    FUNC_2(VAR_2 == VAR_0, "errno = %d\n", VAR_2);

    VAR_4 = FUNC_1(1.2, 5, VAR_3);
    FUNC_2(VAR_4 == VAR_3, "res != buf\n");
    FUNC_2(!FUNC_4(VAR_3, "1.2"), "buf = %s\n", VAR_3);

    VAR_3[0] = 'x';
    VAR_5 = FUNC_3(VAR_3, 5, 1.2, 10);
    FUNC_2(VAR_5 == VAR_1, "err = %d\n", VAR_5);
    FUNC_2(VAR_3[0] == '\0', "buf[0] = %c\n", VAR_3[0]);

    VAR_3[0] = 'x';
    VAR_5 = FUNC_3(VAR_3, 4, 123456, 2);
    FUNC_2(VAR_5 == VAR_1, "err = %d\n", VAR_5);
    FUNC_2(VAR_3[0] == '\0', "buf[0] = %c\n", VAR_3[0]);
}
