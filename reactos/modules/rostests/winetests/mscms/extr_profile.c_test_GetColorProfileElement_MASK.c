
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int expect ;
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
 int FUNC_1 (char*,char const*,int) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int,int ,int*,char*,int *) ;
 int * FUNC_5 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static void FUNC_7( char *VAR_3 )
{
    if (VAR_3)
    {
        PROFILE VAR_4;
        HPROFILE VAR_5;
        BOOL VAR_6, VAR_7;
        DWORD VAR_8;
        TAGTYPE VAR_9 = 0x63707274;
        static char VAR_10[51];
        static const char VAR_11[] =
            { 0x74, 0x65, 0x78, 0x74, 0x00, 0x00, 0x00, 0x00, 0x43, 0x6f, 0x70,
              0x79, 0x72, 0x69, 0x67, 0x68, 0x74, 0x20, 0x28, 0x63, 0x29, 0x20,
              0x31, 0x39, 0x39, 0x38, 0x20, 0x48, 0x65, 0x77, 0x6c, 0x65, 0x74,
              0x74, 0x2d, 0x50, 0x61, 0x63, 0x6b, 0x61, 0x72, 0x64, 0x20, 0x43,
              0x6f, 0x6d, 0x70, 0x61, 0x6e, 0x79, 0x00 };

        VAR_4.dwType = VAR_1;
        VAR_4.pProfileData = VAR_3;
        VAR_4.cbDataSize = FUNC_6(VAR_3);

        VAR_5 = FUNC_5( &VAR_4, VAR_2, 0, VAR_0 );
        FUNC_2( VAR_5 != ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );



        VAR_6 = FUNC_4( VAR_5, VAR_9, 0, ((void*)0), ((void*)0), &VAR_7 );
        FUNC_2( !VAR_6, "GetColorProfileElement() succeeded (%d)\n", FUNC_0() );

        VAR_6 = FUNC_4( VAR_5, VAR_9, 0, &VAR_8, ((void*)0), ((void*)0) );
        FUNC_2( !VAR_6, "GetColorProfileElement() succeeded (%d)\n", FUNC_0() );

        VAR_8 = 0;
        VAR_6 = FUNC_4( VAR_5, VAR_9, 0, &VAR_8, ((void*)0), &VAR_7 );
        FUNC_2( !VAR_6, "GetColorProfileElement() succeeded\n" );
        FUNC_2( VAR_8 > 0, "wrong size\n" );



        VAR_8 = sizeof(VAR_10);
        VAR_6 = FUNC_4( VAR_5, VAR_9, 0, &VAR_8, VAR_10, &VAR_7 );
        FUNC_2( VAR_6, "GetColorProfileElement() failed %u\n", FUNC_0() );
        FUNC_2( VAR_8 > 0, "wrong size\n" );
        FUNC_2( !FUNC_1( VAR_10, VAR_11, sizeof(VAR_11) ), "Unexpected tag data\n" );

        FUNC_3( VAR_5 );
    }
}
