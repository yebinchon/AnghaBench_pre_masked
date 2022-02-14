
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int member_0; unsigned int dwMinorVersion; unsigned int dwMajorVersion; int dwBuildNumber; unsigned int dwPlatformId; } ;
typedef TYPE_1__ OSVERSIONINFOA ;
typedef int HMODULE ;


 scalar_t__ FUNC_0 (int ,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int,char*,unsigned int,int) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void FUNC_4( HMODULE VAR_0 )
{
    OSVERSIONINFOA VAR_1 = { sizeof(OSVERSIONINFOA) };
    int *VAR_2 = (int*)FUNC_0(VAR_0, "_winver");
    int *VAR_3 = (int*)FUNC_0(VAR_0, "_winmajor");
    int *VAR_4 = (int*)FUNC_0(VAR_0, "_winminor");
    int *VAR_5 = (int*)FUNC_0(VAR_0, "_osver");
    int *VAR_6 = (int*)FUNC_0(VAR_0, "_osplatform");
    unsigned int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;

    if( !( VAR_3 && VAR_4 && VAR_2)) {
        FUNC_3("_winver variables are not available\n");
        return;
    }
    VAR_7 = *VAR_2;
    VAR_9 = *VAR_4;
    VAR_8 = *VAR_3;
    FUNC_1( &VAR_1);
    FUNC_2( VAR_9 == VAR_1.dwMinorVersion, "Wrong value for _winminor %02x expected %02x\n",
            VAR_9, VAR_1.dwMinorVersion);
    FUNC_2( VAR_8 == VAR_1.dwMajorVersion, "Wrong value for _winmajor %02x expected %02x\n",
            VAR_8, VAR_1.dwMajorVersion);
    FUNC_2( VAR_7 == ((VAR_1.dwMajorVersion << 8) | VAR_1.dwMinorVersion),
            "Wrong value for _winver %02x expected %02x\n",
            VAR_7, ((VAR_1.dwMajorVersion << 8) | VAR_1.dwMinorVersion));
    if( !VAR_5 || !VAR_6 ) {
        FUNC_3("_osver variables are not available\n");
        return;
    }
    VAR_10 = *VAR_5;
    VAR_11 = *VAR_6;
    FUNC_2( VAR_10 == (VAR_1.dwBuildNumber & 0xffff) ||
            ((VAR_1.dwBuildNumber >> 24) == VAR_1.dwMajorVersion &&
                 ((VAR_1.dwBuildNumber >> 16) & 0xff) == VAR_1.dwMinorVersion),
            "Wrong value for _osver %04x expected %04x\n",
            VAR_10, VAR_1.dwBuildNumber);
    FUNC_2(VAR_11 == VAR_1.dwPlatformId,
            "Wrong value for _osplatform %x expected %x\n",
            VAR_11, VAR_1.dwPlatformId);
}
