
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int *,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 () ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int,char*) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7( void )
{
    HANDLE VAR_9, VAR_10, VAR_11;
    BOOL VAR_12;

    VAR_9 = FUNC_2(VAR_8, VAR_4, 0, ((void*)0), VAR_0, 0, 0);
    FUNC_5 (VAR_9 != VAR_5, "failed to create file\n");

    FUNC_1( VAR_9 );

    VAR_10 = FUNC_0( VAR_8, VAR_7 );
    if ( VAR_10 != ((void*)0) || FUNC_4() != VAR_1 )
    {
        FUNC_5( VAR_10 != ((void*)0), "BeginUpdateResource failed\n");


        VAR_11 = FUNC_2(VAR_8, VAR_3, 0, ((void*)0), VAR_6, 0, 0);
        FUNC_5 (VAR_11 != VAR_5, "failed to create file\n");

        FUNC_1( VAR_11 );

        VAR_12 = FUNC_3( VAR_10, VAR_2 );
        FUNC_5( VAR_12 == VAR_2, "EndUpdateResource failed\n");
    }
    else
        FUNC_6( "Can't update resource in empty file\n" );

    VAR_10 = FUNC_0( VAR_8, VAR_2 );
    FUNC_5( VAR_10 == ((void*)0), "BeginUpdateResource failed\n");
}
