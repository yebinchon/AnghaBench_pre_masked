
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int content ;
typedef int cache_headers ;
typedef int WCHAR ;
struct TYPE_7__ {int LowPart; int HighPart; } ;
struct TYPE_8__ {int QuadPart; TYPE_1__ u; } ;
typedef TYPE_2__ ULARGE_INTEGER ;
struct TYPE_9__ {int dwLowDateTime; int dwHighDateTime; } ;
typedef int LONGLONG ;
typedef scalar_t__ HANDLE ;
typedef TYPE_3__ FILETIME ;
typedef int DWORD ;
typedef char BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char const*,char*,TYPE_3__,TYPE_3__,int ,char*,int,char*,int ) ;
 scalar_t__ FUNC_2 (char*,int ,int ,int *,int ,int ,int *) ;
 int FUNC_3 (char const*,int,char*,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_3__*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (scalar_t__,char*,int,int *,int *) ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (int const*) ;

__attribute__((used)) static void FUNC_10(const WCHAR *VAR_6)
{
    FILETIME VAR_7, VAR_8, VAR_9;
    char VAR_10[VAR_4];
    BYTE VAR_11[1000];
    ULARGE_INTEGER VAR_12;
    const char *VAR_13;
    HANDLE VAR_14;
    DWORD VAR_15;
    unsigned VAR_16;
    BOOL VAR_17;

    BYTE VAR_18[] = "HTTP/1.1 200 OK\r\n\r\n";

    FUNC_8("Testing cache read...\n");

    VAR_13 = FUNC_9(VAR_6);

    for(VAR_16 = 0; VAR_16 < sizeof(VAR_11); VAR_16++)
        VAR_11[VAR_16] = '0' + (VAR_16%10);

    FUNC_5(&VAR_7);
    VAR_12.u.HighPart = VAR_7.dwHighDateTime;
    VAR_12.u.LowPart = VAR_7.dwLowDateTime;
    VAR_12.QuadPart += (LONGLONG)10000000 * 3600 * 24;
    VAR_8.dwHighDateTime = VAR_12.u.HighPart;
    VAR_8.dwLowDateTime = VAR_12.u.LowPart;
    VAR_12.QuadPart -= (LONGLONG)10000000 * 3600 * 24 * 2;
    VAR_9.dwHighDateTime = VAR_12.u.HighPart;
    VAR_9.dwLowDateTime = VAR_12.u.LowPart;

    VAR_17 = FUNC_3(VAR_13, sizeof(VAR_11), "", VAR_10, 0);
    FUNC_7(VAR_17, "CreateUrlCacheEntryA failed: %u\n", FUNC_4());

    VAR_14 = FUNC_2(VAR_10, VAR_2, 0, ((void*)0), VAR_0, VAR_1, ((void*)0));
    FUNC_7(VAR_14 != VAR_3, "CreateFile failed\n");

    FUNC_6(VAR_14, VAR_11, sizeof(VAR_11), &VAR_15, ((void*)0));
    FUNC_0(VAR_14);

    VAR_17 = FUNC_1(VAR_13, VAR_10, VAR_8, VAR_9, VAR_5,
                               VAR_18, sizeof(VAR_18)-1, "", 0);
    FUNC_7(VAR_17, "CommitUrlCacheEntryA failed: %u\n", FUNC_4());
}
