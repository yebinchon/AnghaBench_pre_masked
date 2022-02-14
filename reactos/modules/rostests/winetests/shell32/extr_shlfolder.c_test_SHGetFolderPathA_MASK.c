
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int path_x86 ;
typedef int HRESULT ;
typedef int HKEY ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int *) ;
 int FUNC_3 (int ,char*,int *,int*,int *,int*) ;
 int VAR_8 ;
 int FUNC_4 (int ,int ,int ,int ,char*) ;
 int VAR_9 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int ,int*) ;
 int * FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static void FUNC_10(void)
{
    static const BOOL VAR_10 = sizeof(void *) > sizeof(int);
    BOOL VAR_11;
    char VAR_12[VAR_7];
    char VAR_13[VAR_7];
    char VAR_14[VAR_7];
    HRESULT VAR_15;
    HKEY VAR_16;

    if (!&FUNC_7 || !FUNC_7( FUNC_0(), &VAR_11 )) VAR_11 = VAR_5;

    VAR_15 = FUNC_4( 0, VAR_0, 0, VAR_8, VAR_12 );
    FUNC_6( VAR_15 == VAR_9, "SHGetFolderPathA failed %x\n", VAR_15 );
    VAR_15 = FUNC_4( 0, VAR_1, 0, VAR_8, VAR_13 );
    if (VAR_15 == VAR_4)
    {
        FUNC_9( "Program Files (x86) not supported\n" );
        return;
    }
    FUNC_6( VAR_15 == VAR_9, "SHGetFolderPathA failed %x\n", VAR_15 );
    if (VAR_10)
    {
        FUNC_6( FUNC_5( VAR_12, VAR_13 ), "paths are identical '%s'\n", VAR_12 );
        FUNC_6( FUNC_8( VAR_12, "x86" ) == ((void*)0), "64-bit path '%s' contains x86\n", VAR_12 );
        FUNC_6( FUNC_8( VAR_13, "x86" ) != ((void*)0), "32-bit path '%s' doesn't contain x86\n", VAR_13 );
    }
    else
    {
        FUNC_6( !FUNC_5( VAR_12, VAR_13 ), "paths differ '%s' != '%s'\n", VAR_12, VAR_13 );
        if (VAR_11)
            FUNC_6( FUNC_8( VAR_12, "x86" ) != ((void*)0), "32-bit path '%s' doesn't contain x86\n", VAR_12 );
        else
            FUNC_6( FUNC_8( VAR_12, "x86" ) == ((void*)0), "32-bit path '%s' contains x86\n", VAR_12 );
    }
    if (!FUNC_2( VAR_6, "Software\\Microsoft\\Windows\\CurrentVersion", &VAR_16 ))
    {
        DWORD VAR_17, VAR_18 = sizeof(VAR_13);
        if (!FUNC_3( VAR_16, "ProgramFilesDir (x86)", ((void*)0), &VAR_17, (BYTE *)VAR_14, &VAR_18 ))
        {
            FUNC_6( VAR_10 || VAR_11, "ProgramFilesDir (x86) exists on 32-bit setup\n" );
            FUNC_6( !FUNC_5( VAR_14, VAR_13 ), "paths differ '%s' != '%s'\n", VAR_14, VAR_13 );
        }
        else FUNC_6( !VAR_10 && !VAR_11, "ProgramFilesDir (x86) should exist on 64-bit setup\n" );
        FUNC_1( VAR_16 );
    }

    VAR_15 = FUNC_4( 0, VAR_2, 0, VAR_8, VAR_12 );
    FUNC_6( VAR_15 == VAR_9, "SHGetFolderPathA failed %x\n", VAR_15 );
    VAR_15 = FUNC_4( 0, VAR_3, 0, VAR_8, VAR_13 );
    if (VAR_15 == VAR_4)
    {
        FUNC_9( "Common Files (x86) not supported\n" );
        return;
    }
    FUNC_6( VAR_15 == VAR_9, "SHGetFolderPathA failed %x\n", VAR_15 );
    if (VAR_10)
    {
        FUNC_6( FUNC_5( VAR_12, VAR_13 ), "paths are identical '%s'\n", VAR_12 );
        FUNC_6( FUNC_8( VAR_12, "x86" ) == ((void*)0), "64-bit path '%s' contains x86\n", VAR_12 );
        FUNC_6( FUNC_8( VAR_13, "x86" ) != ((void*)0), "32-bit path '%s' doesn't contain x86\n", VAR_13 );
    }
    else
    {
        FUNC_6( !FUNC_5( VAR_12, VAR_13 ), "paths differ '%s' != '%s'\n", VAR_12, VAR_13 );
        if (VAR_11)
            FUNC_6( FUNC_8( VAR_12, "x86" ) != ((void*)0), "32-bit path '%s' doesn't contain x86\n", VAR_12 );
        else
            FUNC_6( FUNC_8( VAR_12, "x86" ) == ((void*)0), "32-bit path '%s' contains x86\n", VAR_12 );
    }
    if (!FUNC_2( VAR_6, "Software\\Microsoft\\Windows\\CurrentVersion", &VAR_16 ))
    {
        DWORD VAR_19, VAR_20 = sizeof(VAR_13);
        if (!FUNC_3( VAR_16, "CommonFilesDir (x86)", ((void*)0), &VAR_19, (BYTE *)VAR_14, &VAR_20 ))
        {
            FUNC_6( VAR_10 || VAR_11, "CommonFilesDir (x86) exists on 32-bit setup\n" );
            FUNC_6( !FUNC_5( VAR_14, VAR_13 ), "paths differ '%s' != '%s'\n", VAR_14, VAR_13 );
        }
        else FUNC_6( !VAR_10 && !VAR_11, "CommonFilesDir (x86) should exist on 64-bit setup\n" );
    }
}
