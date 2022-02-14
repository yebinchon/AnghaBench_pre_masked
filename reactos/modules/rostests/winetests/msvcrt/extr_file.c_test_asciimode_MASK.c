
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (int *,int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12(void)
{
    FILE *VAR_2;
    char VAR_3[64];
    int VAR_4, VAR_5, VAR_6;


    VAR_2 = FUNC_3("ascii.tst", "wb");
    FUNC_4("\r\r\n", VAR_2);
    FUNC_0(VAR_2);
    VAR_2 = FUNC_3("ascii.tst", "rt");
    FUNC_8(FUNC_2(VAR_3, sizeof(VAR_3), VAR_2) != ((void*)0), "fgets\n");
    FUNC_8(0 == FUNC_10(VAR_3, "\r\n"), "CR CR LF not read as CR LF\n");
    FUNC_9(VAR_2);
    FUNC_8((FUNC_5(VAR_3, 1, sizeof(VAR_3), VAR_2) == 2) && (0 == FUNC_10(VAR_3, "\r\n")), "CR CR LF not read as CR LF\n");
    FUNC_0(VAR_2);
    FUNC_11("ascii.tst");


    VAR_2 = FUNC_3("ascii.tst", "wb");
    FUNC_4("foo\032", VAR_2);
    FUNC_6(VAR_2, 65536L, VAR_1);
    FUNC_4("bar", VAR_2);
    FUNC_0(VAR_2);
    VAR_2 = FUNC_3("ascii.tst", "rt");
    FUNC_8(FUNC_2(VAR_3, sizeof(VAR_3), VAR_2) != ((void*)0), "fgets foo\n");
    FUNC_8(0 == FUNC_10(VAR_3, "foo"), "foo ^Z not read as foo by fgets\n");
    FUNC_8(FUNC_2(VAR_3, sizeof(VAR_3), VAR_2) == ((void*)0), "fgets after logical EOF\n");
    FUNC_9(VAR_2);
    FUNC_8((FUNC_5(VAR_3, 1, sizeof(VAR_3), VAR_2) == 3) && (0 == FUNC_10(VAR_3, "foo")), "foo ^Z not read as foo by fread\n");
    FUNC_8((FUNC_5(VAR_3, 1, sizeof(VAR_3), VAR_2) == 0), "fread after logical EOF\n");
    FUNC_0(VAR_2);


    VAR_2= FUNC_3("ascii.tst","wb");
    FUNC_4("0\r\n1\r\n2\r\n3\r\n4\r\n5\r\n6\r\n7\r\n8\r\n9\r\n", VAR_2);
    FUNC_0(VAR_2);

    VAR_2 = FUNC_3("ascii.tst", "r");
    VAR_4= FUNC_1(VAR_2);
    FUNC_8(VAR_4 == '0', "fgetc failed, expected '0', got '%c'\n", VAR_4);
    VAR_4= FUNC_1(VAR_2);
    FUNC_8(VAR_4 == '\n', "fgetc failed, expected '\\n', got '%c'\n", VAR_4);
    FUNC_6(VAR_2,0,VAR_0);
    for(VAR_5=1; VAR_5<10; VAR_5++) {
 FUNC_8((VAR_6 = FUNC_7(VAR_2)) == VAR_5*3, "ftell fails in TEXT mode\n");
 FUNC_6(VAR_2,0,VAR_0);
 FUNC_8((VAR_4 = FUNC_1(VAR_2)) == '0'+ VAR_5, "fgetc after fseek failed in line %d\n", VAR_5);
 VAR_4= FUNC_1(VAR_2);
        FUNC_8(VAR_4 == '\n', "fgetc failed, expected '\\n', got '%c'\n", VAR_4);
    }

    FUNC_9(VAR_2);
    VAR_4= FUNC_1(VAR_2);
    FUNC_8(VAR_4 == '0', "fgetc failed, expected '0', got '%c'\n", VAR_4);
    FUNC_6(VAR_2, 2 ,VAR_0);
    for(VAR_5=1; VAR_5<10; VAR_5++) {
 FUNC_8((VAR_4 = FUNC_1(VAR_2)) == '0'+ VAR_5, "fgetc after fseek with pos Offset failed in line %d\n", VAR_5);
 FUNC_6(VAR_2, 2 ,VAR_0);
    }
    FUNC_6(VAR_2, 9*3 ,VAR_1);
    VAR_4 = FUNC_1(VAR_2);
    FUNC_8(VAR_4 == '9', "fgetc failed, expected '9', got '%c'\n", VAR_4);
    FUNC_6(VAR_2, -4 ,VAR_0);
    for(VAR_5= 8; VAR_5>=0; VAR_5--) {
 FUNC_8((VAR_4 = FUNC_1(VAR_2)) == '0'+ VAR_5, "fgetc after fseek with neg Offset failed in line %d\n", VAR_5);
 FUNC_6(VAR_2, -4 ,VAR_0);
    }

    FUNC_0(VAR_2);
    VAR_2 = FUNC_3("ascii.tst", "r");
    FUNC_6(VAR_2, 3 ,VAR_1);
    FUNC_8((VAR_4 = FUNC_1(VAR_2)) == '1', "fgetc fails to read next char when positioned on \\r\n");
    FUNC_0(VAR_2);

    FUNC_11("ascii.tst");
}
