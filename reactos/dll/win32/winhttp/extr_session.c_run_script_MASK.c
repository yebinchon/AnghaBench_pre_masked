
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uc ;
struct AUTO_PROXY_SCRIPT_BUFFER {int dwStructSize; char* lpszScriptBuffer; int dwScriptBufferSize; } ;
typedef int buffer ;
typedef int WINHTTP_PROXY_INFO ;
typedef int WCHAR ;
struct TYPE_4__ {int dwStructSize; int dwHostNameLength; int lpszHostName; } ;
typedef TYPE_1__ URL_COMPONENTSW ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,int ,char*,int ,char**,int *) ;
 int FUNC_2 (int ,int *,int *,int *,struct AUTO_PROXY_SCRIPT_BUFFER*) ;
 scalar_t__ FUNC_3 (int const*,int ,int ,TYPE_1__*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,int ,int) ;
 int FUNC_6 (char*,int *) ;
 char* FUNC_7 (int const*) ;
 char* FUNC_8 (int ,int) ;
 int FUNC_9 (char*) ;

__attribute__((used)) static BOOL FUNC_10( char *VAR_1, DWORD VAR_2, const WCHAR *VAR_3, WINHTTP_PROXY_INFO *VAR_4 )
{
    BOOL VAR_5;
    char *VAR_6, *VAR_7;
    DWORD VAR_8;
    struct AUTO_PROXY_SCRIPT_BUFFER VAR_9;
    URL_COMPONENTSW VAR_10;

    VAR_9.dwStructSize = sizeof(VAR_9);
    VAR_9.lpszScriptBuffer = VAR_1;
    VAR_9.dwScriptBufferSize = VAR_2;

    if (!(VAR_7 = FUNC_7( VAR_3 ))) return VAR_0;
    if (!(VAR_5 = FUNC_2( 0, ((void*)0), ((void*)0), ((void*)0), &VAR_9 )))
    {
        FUNC_4( VAR_7 );
        return VAR_0;
    }

    FUNC_5( &VAR_10, 0, sizeof(VAR_10) );
    VAR_10.dwStructSize = sizeof(VAR_10);
    VAR_10.dwHostNameLength = -1;

    if (FUNC_3( VAR_3, 0, 0, &VAR_10 ))
    {
        char *VAR_11 = FUNC_8( VAR_10.lpszHostName, VAR_10.dwHostNameLength );

        if ((VAR_5 = FUNC_1( VAR_7, FUNC_9(VAR_7),
                        VAR_11, FUNC_9(VAR_11), &VAR_6, &VAR_8 )))
        {
            VAR_5 = FUNC_6( VAR_6, VAR_4 );
            FUNC_4( VAR_6 );
        }

        FUNC_4( VAR_11 );
    }
    FUNC_4( VAR_7 );
    return FUNC_0( ((void*)0), 0 );
}
