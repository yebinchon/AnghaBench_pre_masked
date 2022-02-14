
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dwFileVersionLS; scalar_t__ dwFileVersionMS; } ;
typedef TYPE_1__ VS_FIXEDFILEINFO ;
typedef int UINT ;
typedef scalar_t__ PVOID ;
typedef int LPVOID ;
typedef int DWORDLONG ;
typedef long DWORD ;
typedef int BOOL ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (char*,int ,long,scalar_t__) ;
 long FUNC_1 (char*,long*) ;
 long FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_2 ;
 scalar_t__ FUNC_4 (int ,int ,long) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int VAR_3 ;
 long VAR_4 ;
 long VAR_5 ;
 int FUNC_6 (long) ;
 int FUNC_7 (scalar_t__,char const*,int *,int *) ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 (int,char*,...) ;
 int FUNC_10 (char*,char*) ;

__attribute__((used)) static void FUNC_11(void)
{
    DWORD VAR_6, VAR_7;
    PVOID VAR_8 = ((void*)0);
    BOOL VAR_9;
    VS_FIXEDFILEINFO *VAR_10;
    UINT VAR_11;
    char VAR_12[VAR_3];
    static const char VAR_13[] = "\\";
    DWORDLONG VAR_14;

    VAR_6 = 0x55555555;
    FUNC_6(VAR_4);
    VAR_7 = FUNC_1( "kernel32.dll", &VAR_6);
    FUNC_9( VAR_7,
 "GetFileVersionInfoSizeA result wrong! <> 0L expected, got 0x%08x\n",
 VAR_7);
    FUNC_9((VAR_5 == FUNC_2()) || (VAR_4 == FUNC_2()),
 "Last error wrong! NO_ERROR/0x%08x (NT4)  expected, got %u\n",
 VAR_4, FUNC_2());
    FUNC_9( VAR_6 == 0L,
 "Handle wrong! 0L expected, got 0x%08x\n", VAR_6);

    if ( VAR_7 == 0 || VAR_6 != 0)
        return;

    VAR_8 = FUNC_4( FUNC_3(), VAR_2, VAR_7 );
    FUNC_9(VAR_8 != 0, "HeapAlloc failed\n" );
    if (VAR_8 == 0)
        return;

    if (0)
    {


    VAR_9 = FUNC_0( "kernel32.dll", 0, VAR_7, 0);
    FUNC_9 (!VAR_9, "GetFileVersionInfoA should have failed: GetLastError = %u\n", FUNC_2());
    FUNC_9 ((FUNC_2() == VAR_1) || (FUNC_2() == VAR_0) ||
 (FUNC_2() == VAR_5),
        "Last error wrong! ERROR_INVALID_DATA/ERROR_BAD_PATHNAME (ME)/"
 "NO_ERROR (95) expected, got %u\n",
        FUNC_2());
    }

    VAR_9 = FUNC_0( "kernel32.dll", 0, VAR_7, VAR_8 );
    FUNC_9 (VAR_9, "GetFileVersionInfoA failed: GetLastError = %u\n", FUNC_2());
    if (!VAR_9)
        goto cleanup;

    VAR_9 = FUNC_7( VAR_8, ((void*)0), (LPVOID *)&VAR_10, &VAR_11 );
    FUNC_9 (VAR_9 || FUNC_2() == VAR_5 ,
       "VerQueryValueA failed: GetLastError = %u\n", FUNC_2());

    VAR_9 = FUNC_7( VAR_8, "", (LPVOID *)&VAR_10, &VAR_11 );
    FUNC_9 (VAR_9, "VerQueryValueA failed: GetLastError = %u\n", FUNC_2());

    VAR_9 = FUNC_7( VAR_8, VAR_13, (LPVOID *)&VAR_10, &VAR_11 );
    FUNC_9 (VAR_9, "VerQueryValueA failed: GetLastError = %u\n", FUNC_2());
    if (!VAR_9)
        goto cleanup;

    VAR_14 = (((DWORDLONG)VAR_10->dwFileVersionMS) << 32) +
        VAR_10->dwFileVersionLS;

    FUNC_8(VAR_14, VAR_12);

    FUNC_10("kernel32.dll version: %s\n", VAR_12);

    if (0)
    {


    VAR_9 = FUNC_7( VAR_8, VAR_13, (LPVOID *)&VAR_10, 0);
    FUNC_9 (VAR_9, "VerQueryValue failed: GetLastError = %u\n", FUNC_2());
    }

cleanup:
    FUNC_5( FUNC_3(), 0, VAR_8);
}
