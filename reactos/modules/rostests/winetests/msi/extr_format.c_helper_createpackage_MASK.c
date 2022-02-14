
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int WCHAR ;
typedef scalar_t__ UINT ;
typedef int MSIHANDLE ;


 int VAR_0 ;
 int FUNC_0 (char const*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 () ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int *,int,int *) ;
 scalar_t__ FUNC_7 (int *,int ,int *) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int,int ,int,int *,char*) ;
 int FUNC_10 (int ,int ,char const*,int,int *,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int,char*,...) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static UINT FUNC_13( const char *VAR_6, MSIHANDLE *VAR_7 )
{
    MSIHANDLE VAR_8, VAR_9, VAR_10 = 0;
    UINT VAR_11;
    WCHAR *VAR_12;
    int VAR_13;

    FUNC_0(VAR_6);

    VAR_13 = FUNC_10( VAR_0, 0, VAR_6, -1, ((void*)0), 0 );
    if (!(VAR_12 = FUNC_2( FUNC_1(), 0, VAR_13 * sizeof(WCHAR) )))
        return VAR_1;
    FUNC_10( VAR_0, 0, VAR_6, -1, VAR_12, VAR_13 );


    VAR_11 = FUNC_7( VAR_12, VAR_3, &VAR_10 );
    FUNC_3( FUNC_1(), 0, VAR_12 );
    FUNC_11( VAR_11 == VAR_2 , "Failed to create database %u\n", VAR_11 );
    if (VAR_11 != VAR_2)
        return VAR_11;

    VAR_11 = FUNC_5( VAR_10 );
    FUNC_11( VAR_11 == VAR_2 , "Failed to commit database %u\n", VAR_11 );


    VAR_11 = FUNC_6(VAR_10, ((void*)0), 7, &VAR_9);
    FUNC_11( VAR_11 == VAR_2 , "Failed to open summaryinfo\n" );

    VAR_11 = FUNC_9(VAR_9,2, VAR_5, 0,((void*)0),
                        "Installation Database");
    FUNC_11( VAR_11 == VAR_2 , "Failed to set summary info\n" );

    VAR_11 = FUNC_9(VAR_9,3, VAR_5, 0,((void*)0),
                        "Installation Database");
    FUNC_11( VAR_11 == VAR_2 , "Failed to set summary info\n" );

    VAR_11 = FUNC_9(VAR_9,4, VAR_5, 0,((void*)0),
                        "Wine Hackers");
    FUNC_11( VAR_11 == VAR_2 , "Failed to set summary info\n" );

    VAR_11 = FUNC_9(VAR_9,7, VAR_5, 0,((void*)0),
                    ";1033");
    FUNC_11( VAR_11 == VAR_2 , "Failed to set summary info\n" );

    VAR_11 = FUNC_9(VAR_9,9, VAR_5, 0,((void*)0),
                    "{913B8D18-FBB6-4CAC-A239-C74C11E3FA74}");
    FUNC_11( VAR_11 == VAR_2 , "Failed to set summary info\n" );

    VAR_11 = FUNC_9(VAR_9, 14, VAR_4, 100, ((void*)0), ((void*)0));
    FUNC_11( VAR_11 == VAR_2 , "Failed to set summary info\n" );

    VAR_11 = FUNC_9(VAR_9, 15, VAR_4, 0, ((void*)0), ((void*)0));
    FUNC_11( VAR_11 == VAR_2 , "Failed to set summary info\n" );

    VAR_11 = FUNC_8(VAR_9);
    FUNC_11( VAR_11 == VAR_2 , "Failed to make summary info persist\n" );

    VAR_11 = FUNC_4( VAR_9);
    FUNC_11( VAR_11 == VAR_2 , "Failed to close suminfo\n" );

    VAR_11 = FUNC_12( VAR_10, &VAR_8 );
    FUNC_4(VAR_10);

    if (VAR_11 != VAR_2)
        FUNC_0( VAR_6 );
    else
        *VAR_7 = VAR_8;

    return VAR_11;
}
