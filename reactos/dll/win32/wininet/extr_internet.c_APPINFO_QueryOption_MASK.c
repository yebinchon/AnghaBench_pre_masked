
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int object_header_t ;
struct TYPE_4__ {int connect_timeout; int proxyBypass; int proxy; int accessType; int agent; } ;
typedef TYPE_1__ appinfo_t ;
typedef int WCHAR ;
typedef int ULONG ;
struct TYPE_6__ {int * lpszProxyBypass; int * lpszProxy; int dwAccessType; } ;
struct TYPE_5__ {int * lpszProxyBypass; int * lpszProxy; int dwAccessType; } ;
typedef void* LPWSTR ;
typedef void* LPSTR ;
typedef int LPBYTE ;
typedef TYPE_2__ INTERNET_PROXY_INFOW ;
typedef TYPE_3__ INTERNET_PROXY_INFOA ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,void*,int*,int ) ;
 int VAR_4 ;




 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ,int ,int,void*,int,int *,int *) ;
 int FUNC_3 (void*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static DWORD FUNC_7(object_header_t *VAR_5, DWORD VAR_6, void *VAR_7, DWORD *VAR_8, BOOL VAR_9)
{
    appinfo_t *VAR_10 = (appinfo_t*)VAR_5;

    switch(VAR_6) {
    case 130:
        FUNC_1("INTERNET_OPTION_HANDLE_TYPE\n");

        if (*VAR_8 < sizeof(ULONG))
            return VAR_1;

        *VAR_8 = sizeof(DWORD);
        *(DWORD*)VAR_7 = VAR_4;
        return VAR_3;

    case 128: {
        DWORD VAR_11;

        FUNC_1("INTERNET_OPTION_USER_AGENT\n");

        VAR_11 = *VAR_8;

        if (VAR_9) {
            DWORD VAR_12 = VAR_10->agent ? FUNC_6(VAR_10->agent) : 0;

            *VAR_8 = (VAR_12 + 1) * sizeof(WCHAR);
            if(!VAR_7 || VAR_11 < *VAR_8)
                return VAR_1;

            if (VAR_10->agent)
                FUNC_5(VAR_7, VAR_10->agent);
            else
                *(WCHAR *)VAR_7 = 0;



            *VAR_8 = VAR_12;
        }else {
            if (VAR_10->agent)
                *VAR_8 = FUNC_2(VAR_0, 0, VAR_10->agent, -1, ((void*)0), 0, ((void*)0), ((void*)0));
            else
                *VAR_8 = 1;
            if(!VAR_7 || VAR_11 < *VAR_8)
                return VAR_1;

            if (VAR_10->agent)
                FUNC_2(VAR_0, 0, VAR_10->agent, -1, VAR_7, *VAR_8, ((void*)0), ((void*)0));
            else
                *(char *)VAR_7 = 0;



            *VAR_8 -= 1;
        }

        return VAR_3;
    }

    case 129:
        if(!VAR_8) return VAR_2;
        if (VAR_9) {
            INTERNET_PROXY_INFOW *VAR_13 = (INTERNET_PROXY_INFOW *)VAR_7;
            DWORD VAR_14 = 0, VAR_15 = 0;
            LPWSTR VAR_16, VAR_17;

            if (VAR_10->proxy)
                VAR_14 = (FUNC_4(VAR_10->proxy) + 1) * sizeof(WCHAR);
            if (VAR_10->proxyBypass)
                VAR_15 = (FUNC_4(VAR_10->proxyBypass) + 1) * sizeof(WCHAR);
            if (!VAR_13 || *VAR_8 < sizeof(INTERNET_PROXY_INFOW) + VAR_14 + VAR_15)
            {
                *VAR_8 = sizeof(INTERNET_PROXY_INFOW) + VAR_14 + VAR_15;
                return VAR_1;
            }
            VAR_16 = (LPWSTR)((LPBYTE)VAR_7 + sizeof(INTERNET_PROXY_INFOW));
            VAR_17 = (LPWSTR)((LPBYTE)VAR_7 + sizeof(INTERNET_PROXY_INFOW) + VAR_14);

            VAR_13->dwAccessType = VAR_10->accessType;
            VAR_13->lpszProxy = ((void*)0);
            VAR_13->lpszProxyBypass = ((void*)0);
            if (VAR_10->proxy) {
                FUNC_3(VAR_16, VAR_10->proxy);
                VAR_13->lpszProxy = VAR_16;
            }

            if (VAR_10->proxyBypass) {
                FUNC_3(VAR_17, VAR_10->proxyBypass);
                VAR_13->lpszProxyBypass = VAR_17;
            }

            *VAR_8 = sizeof(INTERNET_PROXY_INFOW) + VAR_14 + VAR_15;
            return VAR_3;
        }else {
            INTERNET_PROXY_INFOA *VAR_18 = (INTERNET_PROXY_INFOA *)VAR_7;
            DWORD VAR_19 = 0, VAR_20 = 0;
            LPSTR VAR_21, VAR_22;

            if (VAR_10->proxy)
                VAR_19 = FUNC_2(VAR_0, 0, VAR_10->proxy, -1, ((void*)0), 0, ((void*)0), ((void*)0));
            if (VAR_10->proxyBypass)
                VAR_20 = FUNC_2(VAR_0, 0, VAR_10->proxyBypass, -1,
                        ((void*)0), 0, ((void*)0), ((void*)0));
            if (!VAR_18 || *VAR_8 < sizeof(INTERNET_PROXY_INFOA) + VAR_19 + VAR_20)
            {
                *VAR_8 = sizeof(INTERNET_PROXY_INFOA) + VAR_19 + VAR_20;
                return VAR_1;
            }
            VAR_21 = (LPSTR)((LPBYTE)VAR_7 + sizeof(INTERNET_PROXY_INFOA));
            VAR_22 = (LPSTR)((LPBYTE)VAR_7 + sizeof(INTERNET_PROXY_INFOA) + VAR_19);

            VAR_18->dwAccessType = VAR_10->accessType;
            VAR_18->lpszProxy = ((void*)0);
            VAR_18->lpszProxyBypass = ((void*)0);
            if (VAR_10->proxy) {
                FUNC_2(VAR_0, 0, VAR_10->proxy, -1, VAR_21, VAR_19, ((void*)0), ((void*)0));
                VAR_18->lpszProxy = VAR_21;
            }

            if (VAR_10->proxyBypass) {
                FUNC_2(VAR_0, 0, VAR_10->proxyBypass, -1, VAR_22,
                        VAR_20, ((void*)0), ((void*)0));
                VAR_18->lpszProxyBypass = VAR_22;
            }

            *VAR_8 = sizeof(INTERNET_PROXY_INFOA) + VAR_19 + VAR_20;
            return VAR_3;
        }

    case 131:
        FUNC_1("INTERNET_OPTION_CONNECT_TIMEOUT\n");

        if (*VAR_8 < sizeof(ULONG))
            return VAR_1;

        *(ULONG*)VAR_7 = VAR_10->connect_timeout;
        *VAR_8 = sizeof(ULONG);

        return VAR_3;
    }

    return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
}
