
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int type_t ;
typedef int statement_list_t ;
typedef int FILE ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,int,scalar_t__,int *) ;
 int VAR_2 ;
 int FUNC_7 () ;
 int FUNC_8 (int const*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_9 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (int ,char*) ;
 int FUNC_11 (int const*,int *) ;
 int FUNC_12 (int const*,int const*) ;
 int FUNC_13 (int const*) ;

void FUNC_14( const statement_list_t *VAR_7 )
{
    const type_t *VAR_8;

    if (!VAR_1) return;
    if (VAR_0 && !FUNC_8( VAR_7 )) return;

    FUNC_7();

    FUNC_9( VAR_2, "HKCR\n" );
    FUNC_9( VAR_2++, "{\n" );

    FUNC_9( VAR_2, "NoRemove Interface\n" );
    FUNC_9( VAR_2++, "{\n" );
    VAR_8 = FUNC_3( VAR_7 );
    if (VAR_8) FUNC_12( VAR_7, VAR_8 );
    FUNC_9( --VAR_2, "}\n" );

    FUNC_9( VAR_2, "NoRemove CLSID\n" );
    FUNC_9( VAR_2++, "{\n" );
    FUNC_11( VAR_7, ((void*)0) );
    FUNC_9( --VAR_2, "}\n" );

    FUNC_13( VAR_7 );
    FUNC_9( --VAR_2, "}\n" );

    if (FUNC_10( VAR_5, ".res" ))
    {
        FUNC_0( "WINE_REGISTRY", VAR_6 );
        FUNC_4( VAR_5 );
    }
    else
    {
        FILE *VAR_9 = FUNC_5( VAR_5, "w" );
        if (!VAR_9) FUNC_1( "Could not open %s for output\n", VAR_5 );
        if (FUNC_6( VAR_3, 1, VAR_4, VAR_9 ) != VAR_4)
            FUNC_1( "Failed to write to %s\n", VAR_5 );
        if (FUNC_2( VAR_9 ))
            FUNC_1( "Failed to write to %s\n", VAR_5 );
    }
}
