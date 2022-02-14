
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int WCHAR ;
struct TYPE_3__ {int cbDataSize; int * pProfileData; int dwType; } ;
typedef TYPE_1__ PROFILE ;
typedef int * HPROFILE ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (TYPE_1__*,int,int ,int ) ;

__attribute__((used)) static void FUNC_5( WCHAR *VAR_4 )
{
    PROFILE VAR_5;
    HPROFILE VAR_6;
    BOOL VAR_7;

    VAR_5.dwType = VAR_1;
    VAR_5.pProfileData = ((void*)0);
    VAR_5.cbDataSize = 0;



    VAR_6 = FUNC_4( ((void*)0), 0, 0, 0 );
    FUNC_2( VAR_6 == ((void*)0), "OpenColorProfileW() failed (%d)\n", FUNC_0() );

    VAR_6 = FUNC_4( &VAR_5, 0, 0, 0 );
    FUNC_2( VAR_6 == ((void*)0), "OpenColorProfileW() failed (%d)\n", FUNC_0() );

    VAR_6 = FUNC_4( &VAR_5, VAR_2, 0, 0 );
    FUNC_2( VAR_6 == ((void*)0), "OpenColorProfileW() failed (%d)\n", FUNC_0() );

    VAR_6 = FUNC_4( &VAR_5, VAR_3, 0, 0 );
    FUNC_2( VAR_6 == ((void*)0), "OpenColorProfileW() failed (%d)\n", FUNC_0() );

    FUNC_2 ( !FUNC_3( ((void*)0) ), "CloseColorProfile() succeeded\n" );

    if (VAR_4)
    {
        VAR_5.pProfileData = VAR_4;
        VAR_5.cbDataSize = FUNC_1(VAR_4) * sizeof(WCHAR);

        VAR_6 = FUNC_4( &VAR_5, 0, 0, 0 );
        FUNC_2( VAR_6 == ((void*)0), "OpenColorProfileW() failed (%d)\n", FUNC_0() );

        VAR_6 = FUNC_4( &VAR_5, VAR_2, 0, 0 );
        FUNC_2( VAR_6 == ((void*)0), "OpenColorProfileW() failed (%d)\n", FUNC_0() );

        VAR_6 = FUNC_4( &VAR_5, VAR_2|VAR_3, 0, 0 );
        FUNC_2( VAR_6 == ((void*)0), "OpenColorProfileW() failed (%d)\n", FUNC_0() );



        VAR_6 = FUNC_4( &VAR_5, VAR_2, 0, VAR_0 );
        FUNC_2( VAR_6 != ((void*)0), "OpenColorProfileW() failed (%d)\n", FUNC_0() );

        VAR_7 = FUNC_3( VAR_6 );
        FUNC_2( VAR_7, "CloseColorProfile() failed (%d)\n", FUNC_0() );
    }
}
