
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int dst ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char*,char*,int) ;
 int FUNC_3 (unsigned char*,char,int) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (unsigned char*,int,unsigned char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(void)
{
    unsigned char VAR_3[8], VAR_4[4];
    int VAR_5;
    int VAR_6 = FUNC_0();

    if(!&FUNC_5)
    {
        FUNC_6("_mbscat_s not found\n");
        return;
    }


    VAR_4[0] = VAR_3[0] = 0;
    VAR_5 = FUNC_5(((void*)0), sizeof(VAR_3), VAR_4);
    FUNC_4(VAR_5 == VAR_1, "_mbscat_s returned %d\n", VAR_5);

    VAR_5 = FUNC_5(VAR_3, sizeof(VAR_3), ((void*)0));
    FUNC_4(VAR_5 == VAR_1, "_mbscat_s returned %d\n", VAR_5);

    VAR_3[0] = 'a';
    VAR_5 = FUNC_5(VAR_3, 1, VAR_4);
    FUNC_4(VAR_5 == VAR_1, "_mbscat_s returned %d\n", VAR_5);

    FUNC_3(VAR_3, 'a', sizeof(VAR_3));
    VAR_3[6] = 0;
    VAR_4[0] = 'b';
    VAR_4[1] = 0;

    VAR_5 = FUNC_5(VAR_3, sizeof(VAR_3), VAR_4);
    FUNC_4(VAR_5 == 0, "_mbscat_s returned %d\n", VAR_5);
    FUNC_4(!FUNC_2(VAR_3, "aaaaaab", 8), "dst = %s\n", VAR_3);

    VAR_5 = FUNC_5(VAR_3, sizeof(VAR_3), VAR_4);
    FUNC_4(VAR_5 == VAR_2, "_mbscat_s returned %d\n", VAR_5);
    FUNC_4(!VAR_3[0], "dst[0] = %c\n", VAR_3[0]);
    FUNC_4(VAR_3[1] == 'a', "dst[1] = %c\n", VAR_3[1]);

    FUNC_1(932);

    VAR_3[0] = 0x81;
    VAR_3[1] = 0x81;
    VAR_3[2] = 0x52;
    VAR_3[3] = 0;
    VAR_4[0] = 'a';
    VAR_4[1] = 0;
    VAR_5 = FUNC_5(VAR_3, sizeof(VAR_3), VAR_4);
    FUNC_4(VAR_5 == 0, "_mbscat_s returned %d\n", VAR_5);


    VAR_3[0] = 0;
    VAR_4[0] = 0x81;
    VAR_4[1] = 0x81;
    VAR_4[2] = 0x52;
    VAR_4[3] = 0;
    VAR_5 = FUNC_5(VAR_3, sizeof(VAR_3), VAR_4);
    FUNC_4(VAR_5 == 0, "_mbscat_s returned %d\n", VAR_5);


    VAR_3[0] = 'a';
    VAR_3[1] = 0x81;
    VAR_3[2] = 0;
    VAR_4[0] = 'R';
    VAR_4[1] = 0;
    VAR_5 = FUNC_5(VAR_3, sizeof(VAR_3), VAR_4);
    FUNC_4(VAR_5 == VAR_0, "_mbscat_s returned %d\n", VAR_5);
    FUNC_4(!FUNC_2(VAR_3, "aR", 3), "dst = %s\n", VAR_3);


    VAR_3[0] = 'a';
    VAR_3[1] = 0;
    VAR_4[0] = 'b';
    VAR_4[1] = 0x81;
    VAR_4[2] = 0;
    VAR_5 = FUNC_5(VAR_3, sizeof(VAR_3), VAR_4);
    FUNC_4(VAR_5 == VAR_0, "_mbscat_s returned %d\n", VAR_5);
    FUNC_4(!FUNC_2(VAR_3, "ab", 3), "dst = %s\n", VAR_3);
    FUNC_1(VAR_6);
}
