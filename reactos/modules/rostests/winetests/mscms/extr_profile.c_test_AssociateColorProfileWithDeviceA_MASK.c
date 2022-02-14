
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int profile ;
struct TYPE_3__ {int cb; int * DeviceID; int * DeviceName; } ;
typedef scalar_t__ DWORD ;
typedef TYPE_1__ DISPLAY_DEVICEA ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (int,char*,...) ;
 int FUNC_5 (char*,char*,int *) ;
 int FUNC_6 (char*,char*,int *) ;
 int FUNC_7 (int *,int ,TYPE_1__*,int ) ;
 int FUNC_8 (int *,char*,scalar_t__*) ;
 int FUNC_9 (int *,char*) ;
 int FUNC_10 (int *,char*,int ) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void FUNC_12( char *VAR_4 )
{
    BOOL VAR_5;
    char VAR_6[VAR_2], VAR_7[VAR_2];
    DWORD VAR_8, VAR_9 = sizeof(VAR_6);
    DISPLAY_DEVICEA VAR_10, VAR_11;
    BOOL VAR_12;

    if (VAR_4 && &FUNC_7)
    {
        VAR_10.cb = sizeof( DISPLAY_DEVICEA );
        VAR_12 = FUNC_7( ((void*)0), 0, &VAR_10, 0 );
        FUNC_4( VAR_12, "Can't get display info\n" );

        VAR_11.cb = sizeof( DISPLAY_DEVICEA );
        VAR_12 = FUNC_7( VAR_10.DeviceName, 0, &VAR_11, 0 );
        if (VAR_12)
        {
            FUNC_2(0xdeadbeef);
            VAR_5 = FUNC_5( "machine", VAR_4, ((void*)0) );
            VAR_8 = FUNC_0();
            FUNC_4( !VAR_5, "AssociateColorProfileWithDevice() succeeded\n" );
            FUNC_4( VAR_8 == VAR_0, "expected ERROR_INVALID_PARAMETER, got %u\n", VAR_8 );

            FUNC_2(0xdeadbeef);
            VAR_5 = FUNC_5( "machine", ((void*)0), VAR_11.DeviceID );
            VAR_8 = FUNC_0();
            FUNC_4( !VAR_5, "AssociateColorProfileWithDevice() succeeded\n" );
            FUNC_4( VAR_8 == VAR_0, "expected ERROR_INVALID_PARAMETER, got %u\n", VAR_8 );

            FUNC_2(0xdeadbeef);
            VAR_5 = FUNC_5( "machine", VAR_4, VAR_11.DeviceID );
            VAR_8 = FUNC_0();
            FUNC_4( !VAR_5, "AssociateColorProfileWithDevice() succeeded\n" );
            FUNC_4( VAR_8 == VAR_1, "expected ERROR_NOT_SUPPORTED, got %u\n", VAR_8 );

            VAR_5 = FUNC_9( ((void*)0), VAR_4 );
            FUNC_4( VAR_5, "InstallColorProfileA() failed (%u)\n", FUNC_0() );

            VAR_5 = FUNC_8( ((void*)0), VAR_6, &VAR_9 );
            FUNC_4( VAR_5, "GetColorDirectoryA() failed (%d)\n", FUNC_0() );

            FUNC_1( VAR_4, VAR_7 );
            FUNC_3( VAR_6, "\\" );
            FUNC_3( VAR_6, VAR_7 );

            VAR_5 = FUNC_5( ((void*)0), VAR_6, VAR_11.DeviceID );
            FUNC_4( VAR_5, "AssociateColorProfileWithDevice() failed (%u)\n", FUNC_0() );

            FUNC_2(0xdeadbeef);
            VAR_5 = FUNC_6( "machine", VAR_6, ((void*)0) );
            VAR_8 = FUNC_0();
            FUNC_4( !VAR_5, "DisassociateColorProfileFromDeviceA() succeeded\n" );
            FUNC_4( VAR_8 == VAR_0, "expected ERROR_INVALID_PARAMETER, got %u\n", VAR_8 );

            FUNC_2(0xdeadbeef);
            VAR_5 = FUNC_6( "machine", ((void*)0), VAR_11.DeviceID );
            VAR_8 = FUNC_0();
            FUNC_4( !VAR_5, "DisassociateColorProfileFromDeviceA() succeeded\n" );
            FUNC_4( VAR_8 == VAR_0, "expected ERROR_INVALID_PARAMETER, got %u\n", VAR_8 );

            FUNC_2(0xdeadbeef);
            VAR_5 = FUNC_6( "machine", VAR_6, VAR_11.DeviceID );
            VAR_8 = FUNC_0();
            FUNC_4( !VAR_5, "DisassociateColorProfileFromDeviceA() succeeded\n" );
            FUNC_4( VAR_8 == VAR_1, "expected ERROR_NOT_SUPPORTED, got %u\n", VAR_8 );

            VAR_5 = FUNC_6( ((void*)0), VAR_6, VAR_11.DeviceID );
            FUNC_4( VAR_5, "DisassociateColorProfileFromDeviceA() failed (%u)\n", FUNC_0() );

            VAR_5 = FUNC_10( ((void*)0), VAR_6, VAR_3 );
            FUNC_4( VAR_5, "UninstallColorProfileA() failed (%d)\n", FUNC_0() );
        }
        else
            FUNC_11("Unable to obtain monitor name\n");
    }
}
