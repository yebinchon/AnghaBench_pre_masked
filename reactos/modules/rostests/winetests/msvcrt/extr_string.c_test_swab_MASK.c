
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int to ;
typedef int from ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (int,char*,int,int,int,char*) ;

__attribute__((used)) static void FUNC_5( void ) {
    char VAR_0[] = "BADCFEHGJILKNMPORQTSVUXWZY@#";
    char VAR_1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ@#";
    char VAR_2[] = "ABCDEFGHIJKLMNOPQRSTUVWX$";
    char VAR_3[] = "$";

    char VAR_4[30];
    char VAR_5[30];

    int VAR_6;


    FUNC_3(VAR_5,'$', sizeof(VAR_5));
    FUNC_3(VAR_4,'@', sizeof(VAR_4));
    VAR_6 = 26;
    FUNC_2(VAR_4, VAR_0, VAR_6);
    FUNC_0( VAR_4, VAR_5, VAR_6 );
    FUNC_4(FUNC_1(VAR_5,VAR_1,VAR_6) == 0, "Testing even size %d returned '%*.*s'\n", VAR_6, VAR_6, VAR_6, VAR_5);


    FUNC_3(VAR_5,'$', sizeof(VAR_5));
    FUNC_3(VAR_4,'@', sizeof(VAR_4));
    VAR_6 = 25;
    FUNC_2(VAR_4, VAR_0, VAR_6);
    FUNC_0( VAR_4, VAR_5, VAR_6 );
    FUNC_4(FUNC_1(VAR_5,VAR_2,VAR_6) == 0, "Testing odd size %d returned '%*.*s'\n", VAR_6, VAR_6, VAR_6, VAR_5);


    FUNC_3(VAR_5,'$', sizeof(VAR_5));
    FUNC_3(VAR_4,'@', sizeof(VAR_4));
    VAR_6 = 26;
    FUNC_2(VAR_5, VAR_0, VAR_6);
    FUNC_0( VAR_5, VAR_5, VAR_6 );
    FUNC_4(FUNC_1(VAR_5,VAR_1,VAR_6) == 0, "Testing overlapped size %d returned '%*.*s'\n", VAR_6, VAR_6, VAR_6, VAR_5);


    FUNC_3(VAR_5,'$', sizeof(VAR_5));
    FUNC_3(VAR_4,'@', sizeof(VAR_4));
    VAR_6 = 1;
    FUNC_2(VAR_4, VAR_0, VAR_6);
    FUNC_0( VAR_4, VAR_5, VAR_6 );
    FUNC_4(FUNC_1(VAR_5,VAR_3,VAR_6) == 0, "Testing small size %d returned '%*.*s'\n", VAR_6, VAR_6, VAR_6, VAR_5);
}
