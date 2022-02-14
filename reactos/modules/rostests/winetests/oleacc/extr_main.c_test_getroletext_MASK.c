
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buff2W ;
typedef int buff2 ;
typedef char WCHAR ;
typedef int INT ;
typedef char CHAR ;


 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,char*,int) ;
 int FUNC_3 (int,char*,int) ;
 char* FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (int,char*,...) ;

__attribute__((used)) static void FUNC_11(void)
{
    INT VAR_2, VAR_3;
    CHAR VAR_4[2], *VAR_5;
    WCHAR VAR_6[2], *VAR_7;


    VAR_2 = FUNC_2(-1, ((void*)0), 0);
    FUNC_10(VAR_2 == 0, "GetRoleTextA doesn't return zero on wrong role number, got %d\n", VAR_2);
    VAR_4[0] = '*';
    VAR_2 = FUNC_2(-1, VAR_4, 2);
    FUNC_10(VAR_2 == 0, "GetRoleTextA doesn't return zero on wrong role number, got %d\n", VAR_2);
    FUNC_10(VAR_4[0] == 0, "GetRoleTextA doesn't return NULL char on wrong role number\n");
    VAR_4[0] = '*';
    VAR_2 = FUNC_2(-1, VAR_4, 0);
    FUNC_10(VAR_2 == 0, "GetRoleTextA doesn't return zero on wrong role number, got %d\n", VAR_2);
    FUNC_10(VAR_4[0] == '*', "GetRoleTextA modified buffer on wrong role number\n");

    VAR_2 = FUNC_3(-1, ((void*)0), 0);
    FUNC_10(VAR_2 == 0, "GetRoleTextW doesn't return zero on wrong role number, got %d\n", VAR_2);
    VAR_6[0] = '*';
    VAR_2 = FUNC_3(-1, VAR_6, 2);
    FUNC_10(VAR_2 == 0, "GetRoleTextW doesn't return zero on wrong role number, got %d\n", VAR_2);
    FUNC_10(VAR_6[0] == '\0', "GetRoleTextW doesn't return NULL char on wrong role number\n");
    VAR_6[0] = '*';
    VAR_2 = FUNC_3(-1, VAR_6, 0);
    FUNC_10(VAR_2 == 0, "GetRoleTextW doesn't return zero on wrong role number, got %d\n", VAR_2);


    VAR_2 = FUNC_2(0, ((void*)0), 0);
    FUNC_10(VAR_2 > 0, "GetRoleTextA doesn't return (>0) for zero role number, got %d\n", VAR_2);
    VAR_2 = FUNC_3(0, ((void*)0), 0);
    FUNC_10(VAR_2 > 0, "GetRoleTextW doesn't return (>0) for zero role number, got %d\n", VAR_2);


    VAR_2 = FUNC_2(VAR_1, ((void*)0), 0);
    FUNC_10(VAR_2 > 0, "GetRoleTextA doesn't return length on NULL buffer, got %d\n", VAR_2);
    VAR_2 = FUNC_2(VAR_1, ((void*)0), 1);
    FUNC_10(VAR_2 > 0, "GetRoleTextA doesn't return length on NULL buffer, got %d\n", VAR_2);
    VAR_2 = FUNC_3(VAR_1, ((void*)0), 0);
    FUNC_10(VAR_2 > 0, "GetRoleTextW doesn't return length on NULL buffer, got %d\n", VAR_2);
    VAR_2 = FUNC_3(VAR_1, ((void*)0), 1);
    FUNC_10(VAR_2 > 0, "GetRoleTextW doesn't return length on NULL buffer, got %d\n", VAR_2);


    VAR_6[0] = '*';
    VAR_2 = FUNC_2(VAR_1, VAR_4, 0);
    FUNC_10(!VAR_2, "GetRoleTextA doesn't return 0, got %d\n", VAR_2);
    FUNC_10(VAR_4[0] == '*', "GetRoleTextA modified buffer\n");
    VAR_7 = ((void*)0);
    VAR_2 = FUNC_3(VAR_1, (WCHAR*)&VAR_7, 0);
    FUNC_10(VAR_2, "GetRoleTextW doesn't return length\n");
    FUNC_10(VAR_7 != ((void*)0), "GetRoleTextW doesn't modify buffer\n");
    VAR_4[0] = '*';
    VAR_2 = FUNC_2(VAR_1, VAR_4, 1);
    FUNC_10(VAR_2 == 0, "GetRoleTextA returned wrong length\n");
    FUNC_10(VAR_4[0] == '\0', "GetRoleTextA returned not zero-length buffer\n");
    VAR_4[0] = '*';
    VAR_2 = FUNC_2(VAR_1, VAR_4, 2);
    FUNC_10(!VAR_2, "GetRoleTextA returned wrong length, got %d, expected 0\n", VAR_2);
    FUNC_10(!VAR_4[0] || FUNC_6(VAR_4[0]!='*') ,
            "GetRoleTextA returned not zero-length buffer : (%c)\n", VAR_4[0]);

    VAR_6[0] = '*';
    VAR_2 = FUNC_3(VAR_1, VAR_6, 1);
    FUNC_10(VAR_2 == 0, "GetRoleTextW returned wrong length, got %d, expected 1\n", VAR_2);
    FUNC_10(VAR_6[0] == '\0', "GetRoleTextW returned not zero-length buffer\n");
    VAR_6[1] = '*';
    VAR_2 = FUNC_3(VAR_1, VAR_6, 2);
    FUNC_10(VAR_2 == 1, "GetRoleTextW returned wrong length, got %d, expected 1\n", VAR_2);
    FUNC_10(VAR_6[1] == '\0', "GetRoleTextW returned not zero-length buffer\n");


    VAR_2 = FUNC_2(VAR_1, ((void*)0), 0);
    VAR_5 = FUNC_4(FUNC_1(), 0, 2*VAR_2);
    VAR_5[2*VAR_2-1] = '*';
    VAR_2 = FUNC_2(VAR_1, VAR_5, 2*VAR_2);
    FUNC_10(VAR_5[2*VAR_2-1] == '*', "GetRoleTextA shouldn't modify this part of buffer\n");
    FUNC_5(FUNC_1(), 0, VAR_5);

    VAR_2 = FUNC_3(VAR_1, ((void*)0), 0);
    VAR_7 = FUNC_4(FUNC_1(), 0, 2*VAR_2*sizeof(WCHAR));
    VAR_7[2*VAR_2-1] = '*';
    VAR_2 = FUNC_3(VAR_1, VAR_7, 2*VAR_2);
    FUNC_10(VAR_7[2*VAR_2-1] == '*', "GetRoleTextW shouldn't modify this part of buffer\n");
    FUNC_5(FUNC_1(), 0, VAR_7);


    for(VAR_3 = 0; VAR_3 <= VAR_0; VAR_3++){
        CHAR VAR_8[100];
        WCHAR VAR_9[100];


        FUNC_9(VAR_8, 0, sizeof(VAR_8));

        VAR_2 = FUNC_2(VAR_3, ((void*)0), 0);
        FUNC_10(VAR_2 > 0, "Expected the role to be present\n");

        FUNC_2(VAR_3, VAR_8, sizeof(VAR_8));
        FUNC_10(VAR_2 == FUNC_7(VAR_8),
           "GetRoleTextA: returned length doesn't match returned buffer for role %d\n", VAR_3);


        FUNC_9(VAR_9, 0, sizeof(VAR_9));

        VAR_2 = FUNC_3(VAR_3, ((void*)0), 0);
        FUNC_3(VAR_3, VAR_9, FUNC_0(VAR_9));
        FUNC_10(VAR_2 == FUNC_8(VAR_9),
           "GetRoleTextW: returned length doesn't match returned buffer for role %d\n", VAR_3);
    }
}
