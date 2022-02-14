
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int proxyEnabled; char* proxy; char* proxyBypass; } ;
typedef TYPE_1__ proxyinfo_t ;
typedef char WCHAR ;
struct TYPE_8__ {int proxyEnabled; int proxyBypass; int proxy; } ;
typedef char* LPWSTR ;
typedef scalar_t__ LPCSTR ;
typedef int LONG ;
typedef int HKEY ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int,char*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int *) ;
 scalar_t__ FUNC_6 (int ,int ,int *,scalar_t__*,int *,scalar_t__*) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,int *,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int ) ;
 int VAR_6 ;
 int FUNC_10 (char*) ;
 scalar_t__ FUNC_11 (char*) ;
 TYPE_4__* VAR_7 ;
 void* FUNC_12 (scalar_t__) ;
 int FUNC_13 (char*) ;
 void* FUNC_14 (int ) ;
 int FUNC_15 (char*,char*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_18 (TYPE_1__*,char*) ;
 char* FUNC_19 (char*,char) ;
 char* FUNC_20 (char*,char const*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static LONG FUNC_21( proxyinfo_t *VAR_12 )
{
    HKEY VAR_13;
    DWORD VAR_14, VAR_15;
    LPCSTR VAR_16;
    LONG VAR_17;

    FUNC_17( VAR_12, 0, sizeof(*VAR_12) );

    FUNC_0( &VAR_6 );
    if (VAR_7)
    {
        VAR_12->proxyEnabled = VAR_7->proxyEnabled;
        VAR_12->proxy = FUNC_14( VAR_7->proxy );
        VAR_12->proxyBypass = FUNC_14( VAR_7->proxyBypass );
    }
    FUNC_2( &VAR_6 );

    if ((VAR_17 = FUNC_5( VAR_3, VAR_8, &VAR_13 )))
    {
        FUNC_1( VAR_12 );
        return VAR_17;
    }

    VAR_15 = sizeof(DWORD);
    if (FUNC_6( VAR_13, VAR_9, ((void*)0), &VAR_14, (BYTE *)&VAR_12->proxyEnabled, &VAR_15 ) || VAR_14 != VAR_4)
    {
        VAR_12->proxyEnabled = 0;
        if((VAR_17 = FUNC_7( VAR_13, VAR_9, 0, VAR_4, (BYTE *)&VAR_12->proxyEnabled, sizeof(DWORD) )))
        {
            FUNC_1( VAR_12 );
            FUNC_4( VAR_13 );
            return VAR_17;
        }
    }

    if (!(VAR_16 = FUNC_11( "http_proxy" )) || VAR_12->proxyEnabled)
    {

        if (!FUNC_6( VAR_13, VAR_11, ((void*)0), &VAR_14, ((void*)0), &VAR_15 ) && VAR_15 && (VAR_14 == VAR_5))
        {
            LPWSTR VAR_18, VAR_19;
            static const WCHAR VAR_20[] = {'h','t','t','p','=',0};

            if (!(VAR_18 = FUNC_12(VAR_15)))
            {
                FUNC_4( VAR_13 );
                FUNC_1( VAR_12 );
                return VAR_1;
            }
            FUNC_6( VAR_13, VAR_11, ((void*)0), &VAR_14, (BYTE*)VAR_18, &VAR_15 );


            VAR_19 = FUNC_20( VAR_18, VAR_20 );
            if (VAR_19)
            {
                VAR_19 += FUNC_16( VAR_20 );
                FUNC_15( VAR_18, VAR_19 );
            }
            VAR_19 = FUNC_19( VAR_18, ';' );
            if (VAR_19) *VAR_19 = 0;

            FUNC_1( VAR_12 );
            VAR_12->proxy = VAR_18;
            VAR_12->proxyBypass = ((void*)0);

            FUNC_8("http proxy (from registry) = %s\n", FUNC_10(VAR_12->proxy));
        }
        else
        {
            FUNC_8("No proxy server settings in registry.\n");
            FUNC_1( VAR_12 );
            VAR_12->proxy = ((void*)0);
            VAR_12->proxyBypass = ((void*)0);
        }
    }
    else if (VAR_16)
    {
        WCHAR *VAR_21;

        VAR_15 = FUNC_3( VAR_0, 0, VAR_16, -1, ((void*)0), 0 );
        if (!(VAR_21 = FUNC_12(VAR_15 * sizeof(WCHAR))))
        {
            FUNC_4( VAR_13 );
            return VAR_1;
        }
        FUNC_3( VAR_0, 0, VAR_16, -1, VAR_21, VAR_15 );

        FUNC_1( VAR_12 );
        if (FUNC_18( VAR_12, VAR_21 ))
        {
            FUNC_8("http proxy (from environment) = %s\n", FUNC_10(VAR_12->proxy));
            VAR_12->proxyEnabled = 1;
            VAR_12->proxyBypass = ((void*)0);
        }
        else
        {
            FUNC_9("failed to parse http_proxy value %s\n", FUNC_10(VAR_21));
            VAR_12->proxyEnabled = 0;
            VAR_12->proxy = ((void*)0);
            VAR_12->proxyBypass = ((void*)0);
        }
        FUNC_13( VAR_21 );
    }

    if (VAR_12->proxyEnabled)
    {
        FUNC_8("Proxy is enabled.\n");

        if (!(VAR_16 = FUNC_11( "no_proxy" )))
        {

            if (!FUNC_6( VAR_13, VAR_10, ((void*)0), &VAR_14, ((void*)0), &VAR_15 ) && VAR_15 && (VAR_14 == VAR_5))
            {
                LPWSTR VAR_22;

                if (!(VAR_22 = FUNC_12(VAR_15)))
                {
                    FUNC_4( VAR_13 );
                    return VAR_1;
                }
                FUNC_6( VAR_13, VAR_10, ((void*)0), &VAR_14, (BYTE*)VAR_22, &VAR_15 );

                FUNC_13( VAR_12->proxyBypass );
                VAR_12->proxyBypass = VAR_22;

                FUNC_8("http proxy bypass (from registry) = %s\n", FUNC_10(VAR_12->proxyBypass));
            }
            else
            {
                FUNC_13( VAR_12->proxyBypass );
                VAR_12->proxyBypass = ((void*)0);

                FUNC_8("No proxy bypass server settings in registry.\n");
            }
        }
        else
        {
            WCHAR *VAR_23;

            VAR_15 = FUNC_3( VAR_0, 0, VAR_16, -1, ((void*)0), 0 );
            if (!(VAR_23 = FUNC_12(VAR_15 * sizeof(WCHAR))))
            {
                FUNC_4( VAR_13 );
                return VAR_1;
            }
            FUNC_3( VAR_0, 0, VAR_16, -1, VAR_23, VAR_15 );

            FUNC_13( VAR_12->proxyBypass );
            VAR_12->proxyBypass = VAR_23;

            FUNC_8("http proxy bypass (from environment) = %s\n", FUNC_10(VAR_12->proxyBypass));
        }
    }
    else FUNC_8("Proxy is disabled.\n");

    FUNC_4( VAR_13 );
    return VAR_2;
}
