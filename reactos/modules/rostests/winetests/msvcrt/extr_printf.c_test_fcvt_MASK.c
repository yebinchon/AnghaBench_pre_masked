
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (double,int,int*,int*) ;
 int FUNC_1 (int,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static void FUNC_3(void)
{
    char *VAR_0;
    int VAR_1=100, VAR_2=100;


    VAR_0 = FUNC_0(0.0001, 1, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,""), "bad return '%s'\n", VAR_0);
    FUNC_1( -3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(0.0001, -10, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,""), "bad return '%s'\n", VAR_0);
    FUNC_1( -3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(0.0001, 10, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"1000000"), "bad return '%s'\n", VAR_0);
    FUNC_1( -3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");


    VAR_0 = FUNC_0(-111.0001, 5, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"11100010"), "bad return '%s'\n", VAR_0);
    FUNC_1( 3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 1 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(111.0001, 5, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"11100010"), "bad return '%s'\n", VAR_0);
    FUNC_1( 3 == VAR_1, "dec wrong\n");
    FUNC_1( 0 == VAR_2, "sign wrong\n");


    VAR_0 = FUNC_0(0.0, 5, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"00000"), "bad return '%s'\n", VAR_0);
    FUNC_1( 0 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(0.0, 0, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,""), "bad return '%s'\n", VAR_0);
    FUNC_1( 0 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(0.0, -1, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,""), "bad return '%s'\n", VAR_0);
    FUNC_1( 0 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");


    VAR_0 = FUNC_0(-123.0001, 0, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"123"), "bad return '%s'\n", VAR_0);
    FUNC_1( 3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 1 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(-123.0001, -1, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"12"), "bad return '%s'\n", VAR_0);
    FUNC_1( 3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 1 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(-123.0001, -2, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"1"), "bad return '%s'\n", VAR_0);
    FUNC_1( 3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 1 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(-123.0001, -3, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,""), "bad return '%s'\n", VAR_0);
    FUNC_1( 3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 1 == VAR_2, "sign wrong\n");


    VAR_0 = FUNC_0(99.99, 1, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"1000"), "bad return '%s'\n", VAR_0);
    FUNC_1( 3 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");


    VAR_0 = FUNC_0(0.00636, 2, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"1"), "bad return '%s'\n", VAR_0);
    FUNC_1( -1 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(0.00636, 3, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"6"), "bad return '%s'\n", VAR_0);
    FUNC_1( -2 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(0.09999999996, 2, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"10"), "bad return '%s'\n", VAR_0);
    FUNC_1( 0 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");

    VAR_0 = FUNC_0(0.6, 0, &VAR_1, &VAR_2 );
    FUNC_1( 0 == FUNC_2(VAR_0,"1"), "bad return '%s'\n", VAR_0);
    FUNC_1( 1 == VAR_1, "dec wrong %d\n", VAR_1);
    FUNC_1( 0 == VAR_2, "sign wrong\n");
}
