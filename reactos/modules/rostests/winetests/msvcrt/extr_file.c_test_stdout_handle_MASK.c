
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int sa ;
struct TYPE_10__ {int hProcess; } ;
struct TYPE_9__ {int nLength; int bInheritHandle; int * lpSecurityDescriptor; } ;
struct TYPE_8__ {void* hStdError; scalar_t__ hStdOutput; void* hStdInput; int dwFlags; } ;
typedef TYPE_1__ STARTUPINFOA ;
typedef TYPE_2__ SECURITY_ATTRIBUTES ;
typedef TYPE_3__ PROCESS_INFORMATION ;
typedef scalar_t__ HANDLE ;
typedef scalar_t__ BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (char*,int,int,TYPE_2__*,int ,int ,int *) ;
 int FUNC_2 (int *,char*,int *,int *,int ,int,int *,int *,TYPE_1__*,TYPE_3__*) ;
 int FUNC_3 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int,char*,char const*,...) ;
 char* FUNC_6 (scalar_t__) ;
 int FUNC_7 (char const*,char*) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static void FUNC_9( STARTUPINFOA *VAR_11, char *VAR_12, HANDLE VAR_13, BOOL VAR_14,
                                const char *VAR_15 )
{
    const char *VAR_16;
    HANDLE VAR_17;
    SECURITY_ATTRIBUTES VAR_18;
    PROCESS_INFORMATION VAR_19;


    VAR_18.nLength = sizeof(VAR_18);
    VAR_18.lpSecurityDescriptor = ((void*)0);
    VAR_18.bInheritHandle = VAR_10;

    VAR_17 = FUNC_1( "fdopen.err", VAR_4|VAR_5,
                              VAR_2 | VAR_3, &VAR_18, VAR_0, 0, ((void*)0) );
    VAR_11->dwFlags = VAR_7;
    VAR_11->hStdInput = FUNC_4( VAR_9 );
    VAR_11->hStdOutput = VAR_17;
    VAR_11->hStdError = FUNC_4( VAR_8 );

    FUNC_2( ((void*)0), VAR_12, ((void*)0), ((void*)0), VAR_10,
                    VAR_1 | VAR_6, ((void*)0), ((void*)0), VAR_11, &VAR_19 );
    FUNC_8( VAR_19.hProcess );

    VAR_16 = FUNC_6( VAR_17 );
    if (VAR_14)
        FUNC_5( FUNC_7( VAR_16, "Success" ), "%s: Error file shouldn't contain data\n", VAR_15 );
    else
        FUNC_5( !FUNC_7( VAR_16, "Success" ), "%s: Wrong error data (%s)\n", VAR_15, VAR_16 );

    if (VAR_13)
    {
        VAR_16 = FUNC_6( VAR_13 );
        if (VAR_14)
            FUNC_5( !FUNC_7( VAR_16, "Success" ), "%s: Wrong stdout data (%s)\n", VAR_15, VAR_16 );
        else
            FUNC_5( FUNC_7( VAR_16, "Success" ), "%s: Stdout file shouldn't contain data\n", VAR_15 );
    }

    FUNC_0( VAR_17 );
    FUNC_3( "fdopen.err" );
}
