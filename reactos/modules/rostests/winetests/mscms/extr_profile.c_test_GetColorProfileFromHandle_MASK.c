
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int expect ;
struct TYPE_3__ {char* pProfileData; int cbDataSize; int dwType; } ;
typedef TYPE_1__ PROFILE ;
typedef int * HPROFILE ;
typedef scalar_t__ DWORD ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 unsigned char* FUNC_2 (int ,int ,scalar_t__) ;
 int FUNC_3 (int ,int ,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (unsigned char*,unsigned char const*,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int *,unsigned char*,scalar_t__*) ;
 int * FUNC_8 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10( char *VAR_3 )
{
    if (VAR_3)
    {
        PROFILE VAR_4;
        HPROFILE VAR_5;
        DWORD VAR_6;
        BOOL VAR_7;
        static const unsigned char VAR_8[] =
            { 0x00, 0x00, 0x0c, 0x48, 0x4c, 0x69, 0x6e, 0x6f, 0x02, 0x10, 0x00,
              0x00, 0x6d, 0x6e, 0x74, 0x72, 0x52, 0x47, 0x42, 0x20, 0x58, 0x59,
              0x5a, 0x20, 0x07, 0xce, 0x00, 0x02, 0x00, 0x09, 0x00, 0x06, 0x00,
              0x31, 0x00, 0x00, 0x61, 0x63, 0x73, 0x70, 0x4d, 0x53, 0x46, 0x54,
              0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x43, 0x20, 0x73, 0x52, 0x47,
              0x42, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
              0x00, 0x00, 0x00, 0x00, 0xf6, 0xd6, 0x00, 0x01, 0x00, 0x00, 0x00,
              0x00, 0xd3, 0x2d, 0x48, 0x50, 0x20, 0x20 };

        unsigned char *VAR_9;

        VAR_4.dwType = VAR_1;
        VAR_4.pProfileData = VAR_3;
        VAR_4.cbDataSize = FUNC_9(VAR_3);

        VAR_5 = FUNC_8( &VAR_4, VAR_2, 0, VAR_0 );
        FUNC_5( VAR_5 != ((void*)0), "OpenColorProfileA() failed (%d)\n", FUNC_0() );



        VAR_6 = 0;

        VAR_7 = FUNC_7( VAR_5, ((void*)0), &VAR_6 );
        FUNC_5( !VAR_7 && VAR_6 > 0, "GetColorProfileFromHandle() failed (%d)\n", FUNC_0() );

        VAR_9 = FUNC_2( FUNC_1(), 0, VAR_6 );

        if (VAR_9)
        {
            VAR_7 = FUNC_7( ((void*)0), VAR_9, &VAR_6 );
            FUNC_5( !VAR_7, "GetColorProfileFromHandle() succeeded (%d)\n", FUNC_0() );

            VAR_7 = FUNC_7( VAR_5, VAR_9, ((void*)0) );
            FUNC_5( !VAR_7, "GetColorProfileFromHandle() succeeded (%d)\n", FUNC_0() );



            VAR_7 = FUNC_7( VAR_5, VAR_9, &VAR_6 );
            FUNC_5( VAR_7 && VAR_6 > 0, "GetColorProfileFromHandle() failed (%d)\n", FUNC_0() );

            FUNC_5( !FUNC_4( VAR_9, VAR_8, sizeof(VAR_8) ), "Unexpected header data\n" );

            FUNC_3( FUNC_1(), 0, VAR_9 );
        }

        FUNC_6( VAR_5 );
    }
}
