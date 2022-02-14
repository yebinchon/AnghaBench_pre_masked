
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int DWORD ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7(char* VAR_1)
{
    DWORD VAR_2, VAR_3, VAR_4;
    char VAR_5[VAR_0];

    VAR_4 = FUNC_6(VAR_1) + 1;

    FUNC_3(VAR_5, "foo");
    VAR_2 = FUNC_0(VAR_0, VAR_5);
    FUNC_5(VAR_2 <= VAR_0, "should fit into MAX_PATH\n");
    FUNC_5(FUNC_2(VAR_5, VAR_1) == 0, "expected [%s], got [%s]\n",VAR_1,VAR_5);
    FUNC_5(VAR_2 == FUNC_6(VAR_5), "returned length should be equal to the length of string\n");
    VAR_2 = FUNC_0(1, VAR_5);
    FUNC_5(VAR_2 >= VAR_4, "Expected >= %u, got %u\n", VAR_4, VAR_2);

    VAR_2 = FUNC_0(0, ((void*)0));
    FUNC_5(VAR_2 >= VAR_4, "Expected >= %u, got %u\n", VAR_4, VAR_2);




    FUNC_3(VAR_5, "foo");
    VAR_2 = FUNC_0(VAR_2, VAR_5);
    FUNC_5(FUNC_2(VAR_5, VAR_1) == 0, "expected [%s], got [%s]\n",VAR_1,VAR_5);
    FUNC_5(VAR_2 == FUNC_6(VAR_5), "returned length should be equal to the length of string\n");

    FUNC_4(VAR_5, 'a', sizeof(VAR_5));
    VAR_2 = FUNC_0(sizeof(VAR_5), VAR_5);
    FUNC_5(FUNC_2(VAR_5, VAR_1) == 0, "expected [%s], got [%s]\n",VAR_1,VAR_5);
    FUNC_5(VAR_2 == FUNC_6(VAR_5), "returned length should be equal to the length of string\n");

    VAR_3 = VAR_2 + 1;
    for(VAR_2++; VAR_2 < sizeof(VAR_5); VAR_2++)
        FUNC_5(VAR_5[VAR_2] == 'a', "expected 'a' at [%d], got 0x%x\n", VAR_2, VAR_5[VAR_2]);


    FUNC_4(VAR_5, 'a', sizeof(VAR_5));
    VAR_2 = FUNC_0(VAR_3 / 2, VAR_5);
    FUNC_5(VAR_2 == VAR_3 || FUNC_1(VAR_2 == VAR_3 + 1) ,
       "expected %d, got %d\n", VAR_3, VAR_2);
    for(VAR_2 = 0; VAR_2 < sizeof(VAR_5) / sizeof(VAR_5[0]); VAR_2++)
        FUNC_5(VAR_5[VAR_2] == 'a', "expected 'a' at [%d], got 0x%x\n", VAR_2, VAR_5[VAR_2]);
}
