
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int startup ;
typedef int flags ;
struct TYPE_7__ {int hProcess; int hThread; } ;
struct TYPE_6__ {int cb; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ PROCESS_INFORMATION ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,char*,int *,int *,int ,int ,int *,int *,TYPE_1__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,char*,int *) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,char*,int ,int ,int *,int) ;
 int FUNC_8 (TYPE_1__*,int ,int) ;
 int FUNC_9 (int,char*,char*,...) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (char*,char*,char const*,...) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 char* FUNC_14 (char const*,char) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void FUNC_16( const char *VAR_5, DWORD VAR_6 )
{
    char VAR_7[VAR_3];
    char VAR_8[VAR_3];
    PROCESS_INFORMATION VAR_9;
    STARTUPINFOA VAR_10;
    BOOL VAR_11;
    DWORD VAR_12;
    HKEY VAR_13;
    const char *VAR_14;

    if ((VAR_14 = FUNC_14( VAR_5, '\\' ))) VAR_14++;
    else VAR_14 = VAR_5;

    FUNC_11( VAR_7, "SOFTWARE\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\%s",
             VAR_14 );
    if (!FUNC_12( VAR_7 + FUNC_13(VAR_7) - 3, ".so" )) VAR_7[FUNC_13(VAR_7) - 3] = 0;

    VAR_12 = FUNC_4( VAR_2, VAR_7, &VAR_13 );
    if (VAR_12 == VAR_0)
    {
        FUNC_10("Not authorized to change the image file execution options\n");
        return;
    }
    FUNC_9( !VAR_12, "failed to create '%s' error %u\n", VAR_7, VAR_12 );
    if (VAR_12) return;

    if (VAR_6 == 0xdeadbeef)
        FUNC_6( VAR_13, "GlobalFlag" );
    else
        FUNC_7( VAR_13, "GlobalFlag", 0, VAR_4, (BYTE *)&VAR_6, sizeof(VAR_6) );

    FUNC_8( &VAR_10, 0, sizeof(VAR_10) );
    VAR_10.cb = sizeof(VAR_10);

    FUNC_11( VAR_8, "%s heap.c 0x%x", VAR_5, VAR_6 );
    VAR_11 = FUNC_1( ((void*)0), VAR_8, ((void*)0), ((void*)0), VAR_1, 0, ((void*)0), ((void*)0), &VAR_10, &VAR_9 );
    FUNC_9( VAR_11, "failed to create child process error %u\n", FUNC_2() );
    if (VAR_11)
    {
        FUNC_15( VAR_9.hProcess );
        FUNC_0( VAR_9.hThread );
        FUNC_0( VAR_9.hProcess );
    }
    FUNC_6( VAR_13, "GlobalFlag" );
    FUNC_3( VAR_13 );
    FUNC_5( VAR_2, VAR_7 );
}
