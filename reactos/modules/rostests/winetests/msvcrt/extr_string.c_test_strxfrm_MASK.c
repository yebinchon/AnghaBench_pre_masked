
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dest ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*,char*) ;
 size_t FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static void FUNC_6(void)
{
    char VAR_5[256];
    size_t VAR_6;


    if(VAR_4) {
        VAR_3 = 0xdeadbeef;
        VAR_6 = FUNC_4(((void*)0), "src", 1);
        FUNC_1(VAR_6 == VAR_1, "ret = %d\n", (int)VAR_6);
        FUNC_1(VAR_3 == VAR_0, "errno = %d\n", VAR_3);

        VAR_3 = 0xdeadbeef;
        VAR_6 = FUNC_4(VAR_5, ((void*)0), 100);
        FUNC_1(VAR_6 == VAR_1, "ret = %d\n", (int)VAR_6);
        FUNC_1(VAR_3 == VAR_0, "errno = %d\n", VAR_3);
    }

    VAR_6 = FUNC_4(((void*)0), "src", 0);
    FUNC_1(VAR_6 == 3, "ret = %d\n", (int)VAR_6);
    VAR_5[0] = 'a';
    VAR_6 = FUNC_4(VAR_5, "src", 0);
    FUNC_1(VAR_6 == 3, "ret = %d\n", (int)VAR_6);
    FUNC_1(VAR_5[0] == 'a', "dest[0] = %d\n", VAR_5[0]);

    VAR_5[3] = 'a';
    VAR_6 = FUNC_4(VAR_5, "src", 5);
    FUNC_1(VAR_6 == 3, "ret = %d\n", (int)VAR_6);
    FUNC_1(!FUNC_3(VAR_5, "src"), "dest = %s\n", VAR_5);

    VAR_3 = 0xdeadbeef;
    VAR_5[1] = 'a';
    VAR_6 = FUNC_4(VAR_5, "src", 1);
    FUNC_1(VAR_6 == 3, "ret = %d\n", (int)VAR_6);
    FUNC_1(VAR_5[0] == 's', "dest[0] = %d\n", VAR_5[0]);
    FUNC_1(VAR_5[1] == 'a', "dest[1] = %d\n", VAR_5[1]);
    FUNC_1(VAR_3 == 0xdeadbeef, "errno = %d\n", VAR_3);

    VAR_6 = FUNC_4(VAR_5, "", 5);
    FUNC_1(VAR_6 == 0, "ret = %d\n", (int)VAR_6);
    FUNC_1(!VAR_5[0], "dest[0] = %d\n", VAR_5[0]);

    if(!FUNC_2(VAR_2, "polish")) {
        FUNC_5("stxfrm tests\n");
        return;
    }

    VAR_6 = FUNC_4(((void*)0), "src", 0);
    FUNC_1(VAR_6 < sizeof(VAR_5)-1, "ret = %d\n", (int)VAR_6);
    VAR_5[0] = 'a';
    VAR_6 = FUNC_4(VAR_5, "src", 0);
    FUNC_1(VAR_6 < sizeof(VAR_5)-1, "ret = %d\n", (int)VAR_6);
    FUNC_1(VAR_5[0] == 'a', "dest[0] = %d\n", VAR_5[0]);

    VAR_6 = FUNC_4(VAR_5, "src", VAR_6+1);
    FUNC_1(VAR_6 < sizeof(VAR_5)-1, "ret = %d\n", (int)VAR_6);
    FUNC_1(VAR_5[0], "dest[0] = 0\n");

    VAR_3 = 0xdeadbeef;
    VAR_5[0] = 'a';
    VAR_6 = FUNC_4(VAR_5, "src", 5);
    FUNC_1(VAR_6>5 && VAR_6<sizeof(VAR_5)-1, "ret = %d\n", (int)VAR_6);
    FUNC_1(!VAR_5[0] || FUNC_0(!VAR_4 && VAR_5[0]=='a'), "dest[0] = %d\n", VAR_5[0]);

    FUNC_2(VAR_2, "C");
}
