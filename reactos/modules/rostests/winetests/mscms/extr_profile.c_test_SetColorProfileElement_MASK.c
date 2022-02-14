
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int data ;
typedef int buffer ;
struct TYPE_3__ {char* pProfileData; int cbDataSize; int dwType; } ;
typedef int TAGTYPE ;
typedef TYPE_1__ PROFILE ;
typedef int * HPROFILE ;
typedef int DWORD ;
typedef int BOOL ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int*,char*,int *) ;
 int * FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_6 (int *,int,int ,int*,char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8( char *VAR_4 )
{
    if (VAR_4)
    {
        PROFILE VAR_5;
        HPROFILE VAR_6;
        DWORD VAR_7;
        BOOL VAR_8, VAR_9;

        TAGTYPE VAR_10 = 0x63707274;
        static char VAR_11[] = "(c) The Wine Project";
        static char VAR_12[51];

        VAR_5.dwType = VAR_1;
        VAR_5.pProfileData = VAR_4;
        VAR_5.cbDataSize = FUNC_7(VAR_4);



        VAR_6 = FUNC_5( &VAR_5, VAR_2, 0, VAR_0 );
        FUNC_2( VAR_6 != ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

        VAR_8 = FUNC_6( VAR_6, VAR_10, 0, &VAR_7, VAR_11 );
        FUNC_2( !VAR_8, "SetColorProfileElement() succeeded (%d)\n", FUNC_0() );

        FUNC_3( VAR_6 );

        VAR_6 = FUNC_5( &VAR_5, VAR_3, 0, VAR_0 );
        FUNC_2( VAR_6 != ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );

        VAR_8 = FUNC_6( ((void*)0), 0, 0, ((void*)0), ((void*)0) );
        FUNC_2( !VAR_8, "SetColorProfileElement() succeeded (%d)\n", FUNC_0() );

        VAR_8 = FUNC_6( VAR_6, 0, 0, ((void*)0), ((void*)0) );
        FUNC_2( !VAR_8, "SetColorProfileElement() succeeded (%d)\n", FUNC_0() );

        VAR_8 = FUNC_6( VAR_6, VAR_10, 0, ((void*)0), ((void*)0) );
        FUNC_2( !VAR_8, "SetColorProfileElement() succeeded (%d)\n", FUNC_0() );

        VAR_8 = FUNC_6( VAR_6, VAR_10, 0, &VAR_7, ((void*)0) );
        FUNC_2( !VAR_8, "SetColorProfileElement() succeeded (%d)\n", FUNC_0() );



        VAR_7 = sizeof(VAR_11);
        VAR_8 = FUNC_6( VAR_6, VAR_10, 0, &VAR_7, VAR_11 );
        FUNC_2( VAR_8, "SetColorProfileElement() failed %u\n", FUNC_0() );

        VAR_7 = sizeof(VAR_12);
        VAR_8 = FUNC_4( VAR_6, VAR_10, 0, &VAR_7, VAR_12, &VAR_9 );
        FUNC_2( VAR_8, "GetColorProfileElement() failed %u\n", FUNC_0() );
        FUNC_2( VAR_7 > 0, "wrong size\n" );

        FUNC_2( !FUNC_1( VAR_11, VAR_12, sizeof(VAR_11) ),
            "Unexpected tag data, expected %s, got %s (%u)\n", VAR_11, VAR_12, FUNC_0() );

        FUNC_3( VAR_6 );
    }
}
