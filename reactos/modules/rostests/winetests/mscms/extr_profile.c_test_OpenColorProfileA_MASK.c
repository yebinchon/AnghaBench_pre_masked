
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* pProfileData; int cbDataSize; void* dwType; } ;
typedef TYPE_1__ PROFILE ;
typedef int * HPROFILE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (TYPE_1__*,int,int ,int ) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5( char *VAR_5 )
{
    PROFILE VAR_6;
    HPROFILE VAR_7;
    BOOL VAR_8;

    VAR_6.dwType = VAR_2;
    VAR_6.pProfileData = ((void*)0);
    VAR_6.cbDataSize = 0;



    VAR_7 = FUNC_3( ((void*)0), 0, 0, 0 );
    FUNC_1( VAR_7 == ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

    VAR_7 = FUNC_3( &VAR_6, 0, 0, 0 );
    FUNC_1( VAR_7 == ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

    VAR_7 = FUNC_3( &VAR_6, VAR_3, 0, 0 );
    FUNC_1( VAR_7 == ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

    VAR_7 = FUNC_3( &VAR_6, VAR_4, 0, 0 );
    FUNC_1( VAR_7 == ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

    FUNC_1 ( !FUNC_2( ((void*)0) ), "CloseColorProfile() succeeded\n" );

    if (VAR_5)
    {
        VAR_6.pProfileData = VAR_5;
        VAR_6.cbDataSize = FUNC_4(VAR_5);

        VAR_7 = FUNC_3( &VAR_6, 0, 0, 0 );
        FUNC_1( VAR_7 == ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

        VAR_7 = FUNC_3( &VAR_6, VAR_3, 0, 0 );
        FUNC_1( VAR_7 == ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

        VAR_7 = FUNC_3( &VAR_6, VAR_3|VAR_4, 0, 0 );
        FUNC_1( VAR_7 == ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );



        VAR_7 = FUNC_3( &VAR_6, VAR_3, 0, VAR_1 );
        FUNC_1( VAR_7 != ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

        VAR_8 = FUNC_2( VAR_7 );
        FUNC_1( VAR_8, "CloseColorProfile() failed (%d)\n", FUNC_0() );

        VAR_6.dwType = VAR_2;
        VAR_6.pProfileData = (void *)"sRGB Color Space Profile.icm";
        VAR_6.cbDataSize = sizeof("sRGB Color Space Profile.icm");

        VAR_7 = FUNC_3( &VAR_6, VAR_3, VAR_0, VAR_1 );
        FUNC_1( VAR_7 != ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

        VAR_8 = FUNC_2( VAR_7 );
        FUNC_1( VAR_8, "CloseColorProfile() failed (%d)\n", FUNC_0() );
    }
}
