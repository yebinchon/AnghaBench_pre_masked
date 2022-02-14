
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * HANDLE ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,int *,int ,int,int,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 () ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (int **) ;

__attribute__((used)) static void FUNC_7(void)
{
    HANDLE VAR_3;
    HANDLE VAR_4;

    FUNC_5(FUNC_6(&VAR_3), "Couldn't create test file.\n");

    VAR_4 = FUNC_1( VAR_3, ((void*)0), VAR_1, 0, 0x1000, "named_file_map" );
    FUNC_5( VAR_4 != ((void*)0), "mapping should work, I named it!\n" );

    FUNC_5( FUNC_0( VAR_4 ), "can't close mapping handle\n");



    VAR_4 = FUNC_1( VAR_3, ((void*)0), VAR_1, 0, 0, ((void*)0) );
    FUNC_5( VAR_4 != ((void*)0), "We should still be able to map!\n" );
    FUNC_5( FUNC_0( VAR_4 ), "can't close mapping handle\n");
    FUNC_5( FUNC_0( VAR_3 ), "can't close file handle\n");
    VAR_3 = ((void*)0);

    FUNC_5(FUNC_6(&VAR_3), "Couldn't create test file.\n");

    VAR_4 = FUNC_1( VAR_3, ((void*)0), VAR_1, 0, 0, ((void*)0) );
    FUNC_5( VAR_4 == ((void*)0), "mapped zero size file\n");
    FUNC_5( FUNC_3() == VAR_0, "not ERROR_FILE_INVALID\n");

    VAR_4 = FUNC_1( VAR_3, ((void*)0), VAR_1, 0x80000000, 0, ((void*)0) );
    FUNC_5( VAR_4 == ((void*)0) || FUNC_4(VAR_4 != ((void*)0)) , "mapping should fail\n");

    if ( VAR_4 )
        FUNC_0( VAR_4 );

    VAR_4 = FUNC_1( VAR_3, ((void*)0), VAR_1, 0x80000000, 0x10000, ((void*)0) );
    FUNC_5( VAR_4 == ((void*)0) || FUNC_4(VAR_4 != ((void*)0)) , "mapping should fail\n");

    if ( VAR_4 )
        FUNC_0( VAR_4 );



    FUNC_5( FUNC_0( VAR_3 ), "can't close file handle\n");
    FUNC_5( FUNC_2( VAR_2 ), "DeleteFile failed after map\n" );
}
