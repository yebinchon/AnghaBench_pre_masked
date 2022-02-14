
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int ,int *,int,int ,int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 () ;
 int VAR_4 ;
 int * FUNC_3 (int ,int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,char*,...) ;

__attribute__((used)) static void FUNC_6(void)
{
    HANDLE VAR_7, VAR_8;



    FUNC_4(0xdeadbeef);
    VAR_7 = FUNC_1( VAR_4, ((void*)0), VAR_6 | VAR_5, 0, 0x1000,
                                 "Wine Test Mapping");
    FUNC_5( VAR_7 != ((void*)0), "CreateFileMapping failed with error %u\n", FUNC_2());
    FUNC_5( FUNC_2() == 0, "wrong error %u\n", FUNC_2());

    FUNC_4(0xdeadbeef);
    VAR_8 = FUNC_1( VAR_4, ((void*)0), VAR_6 | VAR_5, 0, 0x1000,
                                  "Wine Test Mapping");
    FUNC_5( VAR_8 != ((void*)0), "CreateFileMapping failed with error %d\n", FUNC_2());
    FUNC_5( FUNC_2() == VAR_0, "wrong error %u\n", FUNC_2());
    FUNC_0( VAR_8 );

    FUNC_4(0xdeadbeef);
    VAR_8 = FUNC_1( VAR_4, ((void*)0), VAR_6 | VAR_5, 0, 0x1000,
                                 "WINE TEST MAPPING");
    FUNC_5( VAR_8 != ((void*)0), "CreateFileMapping failed with error %d\n", FUNC_2());
    FUNC_5( FUNC_2() == 0, "wrong error %u\n", FUNC_2());
    FUNC_0( VAR_8 );

    FUNC_4(0xdeadbeef);
    VAR_8 = FUNC_3( VAR_3, VAR_2, "Wine Test Mapping");
    FUNC_5( VAR_8 != ((void*)0), "OpenFileMapping failed with error %d\n", FUNC_2());
    FUNC_0( VAR_8 );

    FUNC_4(0xdeadbeef);
    VAR_8 = FUNC_3( VAR_3, VAR_2, "WINE TEST MAPPING");
    FUNC_5( !VAR_8, "OpenFileMapping succeeded\n");
    FUNC_5( FUNC_2() == VAR_1, "wrong error %u\n", FUNC_2());

    FUNC_0( VAR_7 );
}
