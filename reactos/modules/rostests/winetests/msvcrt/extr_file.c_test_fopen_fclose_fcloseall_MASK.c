
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,...) ;

__attribute__((used)) static void FUNC_5( void )
{
    char VAR_4[] = "empty1";
    char VAR_5[] = "empty2";
    char VAR_6[] = "empty3";
    FILE *VAR_7, *VAR_8, *VAR_9, *VAR_10;
    int VAR_11, VAR_12;


    VAR_7 = FUNC_3(VAR_4, "w+");
    FUNC_4(VAR_7 != ((void*)0), "The file '%s' was not opened\n", VAR_4);
    VAR_8 = FUNC_3(VAR_5, "w ");
    FUNC_4(VAR_8 != ((void*)0), "The file '%s' was not opened\n", VAR_5 );
    FUNC_1(VAR_6);
    VAR_9 = FUNC_3(VAR_6, "r");
    FUNC_4(VAR_9 == ((void*)0), "The file '%s' shouldn't exist before\n", VAR_6 );
    VAR_9 = FUNC_3(VAR_6, "w+");
    FUNC_4(VAR_9 != ((void*)0), "The file '%s' should be opened now\n", VAR_6 );
    VAR_3 = 0xfaceabad;
    VAR_10 = FUNC_3("", "w+");
    FUNC_4(VAR_10 == ((void*)0) && (VAR_3 == VAR_0 || VAR_3 == VAR_1),
       "filename is empty, errno = %d (expected 2 or 22)\n", VAR_3);
    VAR_3 = 0xfaceabad;
    VAR_10 = FUNC_3(((void*)0), "w+");
    FUNC_4(VAR_10 == ((void*)0) && (VAR_3 == VAR_0 || VAR_3 == VAR_1),
       "filename is NULL, errno = %d (expected 2 or 22)\n", VAR_3);


    VAR_11 = FUNC_2(VAR_8);
    FUNC_4(VAR_11 == 0, "The file '%s' was not closed\n", VAR_5);
    VAR_11 = FUNC_2(VAR_9);
    FUNC_4(VAR_11 == 0, "The file '%s' was not closed\n", VAR_6);
    VAR_3 = 0xdeadbeef;
    VAR_11 = FUNC_2(VAR_8);
    FUNC_4(VAR_11 == VAR_2, "Closing file '%s' returned %d\n", VAR_5, VAR_11);
    FUNC_4(VAR_3 == 0xdeadbeef, "errno = %d\n", VAR_3);
    VAR_11 = FUNC_2(VAR_9);
    FUNC_4(VAR_11 == VAR_2, "Closing file '%s' returned %d\n", VAR_6, VAR_11);
    FUNC_4(VAR_3 == 0xdeadbeef, "errno = %d\n", VAR_3);


    VAR_12 = FUNC_0();

    FUNC_4(VAR_12 == 1, "Number of files closed by fcloseall(): %u\n", VAR_12);
    VAR_12 = FUNC_0();
    FUNC_4(VAR_12 == 0, "Number of files closed by fcloseall(): %u\n", VAR_12);

    FUNC_4(FUNC_1(VAR_4) == 0, "Couldn't unlink file named '%s'\n", VAR_4);
    FUNC_4(FUNC_1(VAR_5) == 0, "Couldn't unlink file named '%s'\n", VAR_5);
    FUNC_4(FUNC_1(VAR_6) == 0, "Couldn't unlink file named '%s'\n", VAR_6);
}
