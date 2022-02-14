
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fpos_t ;
typedef int FILE ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int*) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,int,int,int *) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8( void )
{
    FILE *VAR_0;
    int VAR_1;
    fpos_t VAR_2;

    VAR_0 = FUNC_3("filbuf.tst", "wb");
    FUNC_5("\n\n\n\n", 1, 4, VAR_0);
    FUNC_1(VAR_0);

    VAR_0 = FUNC_3("filbuf.tst", "rt");
    VAR_1 = FUNC_0(VAR_0);
    FUNC_6(VAR_1 == '\n', "read wrong byte\n");
    FUNC_6(FUNC_4(VAR_0) == -2, "ascii crlf removal does not match native\n");
    FUNC_6(FUNC_2(VAR_0, &VAR_2) == 0, "fgetpos fail\n");
    FUNC_6(VAR_2 == -2, "ftell does not match fgetpos\n");
    FUNC_1(VAR_0);
    FUNC_7("filbuf.tst");
}
