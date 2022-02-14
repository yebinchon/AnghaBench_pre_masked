
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mbstate_t ;
typedef int dst ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,...) ;
 size_t FUNC_1 (char*,int,int*) ;
 int FUNC_2 (size_t*,char*,int,int,int*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void)
{
    mbstate_t VAR_2;
    unsigned char VAR_3[10];
    size_t VAR_4;
    int VAR_5;

    if(!&FUNC_1 || !FUNC_3(VAR_1, "Japanese_Japan.932")) {
        FUNC_4("wcrtomb tests\n");
        return;
    }

    VAR_4 = FUNC_1(((void*)0), 0x3042, ((void*)0));
    FUNC_0(VAR_4 == 2, "wcrtomb did not return 2\n");

    VAR_2 = 1;
    VAR_3[2] = 'a';
    VAR_4 = FUNC_1((char*)VAR_3, 0x3042, &VAR_2);
    FUNC_0(VAR_4 == 2, "wcrtomb did not return 2\n");
    FUNC_0(VAR_2 == 0, "state != 0\n");
    FUNC_0(VAR_3[0] == 0x82, "dst[0] = %x, expected 0x82\n", VAR_3[0]);
    FUNC_0(VAR_3[1] == 0xa0, "dst[1] = %x, expected 0xa0\n", VAR_3[1]);
    FUNC_0(VAR_3[2] == 'a', "dst[2] != 'a'\n");

    VAR_4 = FUNC_1((char*)VAR_3, 0x3043, ((void*)0));
    FUNC_0(VAR_4 == 2, "wcrtomb did not return 2\n");
    FUNC_0(VAR_3[0] == 0x82, "dst[0] = %x, expected 0x82\n", VAR_3[0]);
    FUNC_0(VAR_3[1] == 0xa1, "dst[1] = %x, expected 0xa1\n", VAR_3[1]);

    VAR_4 = FUNC_1((char*)VAR_3, 0x20, ((void*)0));
    FUNC_0(VAR_4 == 1, "wcrtomb did not return 1\n");
    FUNC_0(VAR_3[0] == 0x20, "dst[0] = %x, expected 0x20\n", VAR_3[0]);

    VAR_4 = FUNC_1((char*)VAR_3, 0xffff, ((void*)0));
    FUNC_0(VAR_4 == -1, "wcrtomb did not return -1\n");
    FUNC_0(VAR_3[0] == 0x3f, "dst[0] = %x, expected 0x3f\n", VAR_3[0]);

    if(!&FUNC_2) {
        FUNC_4("wcrtomb_s tests\n");
        FUNC_3(VAR_1, "C");
        return;
    }

    VAR_2 = 1;
    VAR_3[2] = 'a';
    VAR_5 = FUNC_2(&VAR_4, (char*)VAR_3, sizeof(VAR_3), 0x3042, &VAR_2);
    FUNC_0(!VAR_5, "err = %d\n", VAR_5);
    FUNC_0(VAR_4 == 2, "ret != 2\n");
    FUNC_0(!VAR_2, "state != 0\n");
    FUNC_0(VAR_3[0] == 0x82, "dst[0] = %x, expected 0x82\n", VAR_3[0]);
    FUNC_0(VAR_3[1] == 0xa0, "dst[1] = %x, expected 0xa0\n", VAR_3[1]);
    FUNC_0(VAR_3[2] == 'a', "dst[2] != 'a'\n");

    VAR_5 = FUNC_2(&VAR_4, (char*)VAR_3, sizeof(VAR_3), 0x3042, ((void*)0));
    FUNC_0(!VAR_5, "err = %d\n", VAR_5);
    FUNC_0(VAR_4 == 2, "ret != 2\n");
    FUNC_0(!VAR_2, "state != 0\n");
    FUNC_0(VAR_3[0] == 0x82, "dst[0] = %x, expected 0x82\n", VAR_3[0]);
    FUNC_0(VAR_3[1] == 0xa0, "dst[1] = %x, expected 0xa0\n", VAR_3[1]);

    VAR_5 = FUNC_2(&VAR_4, (char*)VAR_3, sizeof(VAR_3), 0x20, ((void*)0));
    FUNC_0(!VAR_5, "err = %d\n", VAR_5);
    FUNC_0(VAR_4 == 1, "ret != 1\n");
    FUNC_0(VAR_3[0] == 0x20, "dst[0] = %x, expected 0x20\n", VAR_3[0]);

    VAR_5 = FUNC_2(&VAR_4, ((void*)0), 0, 0x20, ((void*)0));
    FUNC_0(!VAR_5, "err = %d\n", VAR_5);
    FUNC_0(VAR_4 == 1, "ret != 1\n");

    VAR_5 = FUNC_2(&VAR_4, (char*)VAR_3, sizeof(VAR_3), 0xffff, ((void*)0));
    FUNC_0(VAR_5 == VAR_0, "err = %d\n", VAR_5);
    FUNC_0(VAR_4 == -1, "wcrtomb did not return -1\n");
    FUNC_0(VAR_3[0] == 0x3f, "dst[0] = %x, expected 0x3f\n", VAR_3[0]);

    FUNC_3(VAR_1, "C");
}
