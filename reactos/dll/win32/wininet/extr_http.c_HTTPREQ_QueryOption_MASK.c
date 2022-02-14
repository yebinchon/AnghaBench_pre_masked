
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_36__ TYPE_9__ ;
typedef struct TYPE_35__ TYPE_8__ ;
typedef struct TYPE_34__ TYPE_7__ ;
typedef struct TYPE_33__ TYPE_6__ ;
typedef struct TYPE_32__ TYPE_5__ ;
typedef struct TYPE_31__ TYPE_4__ ;
typedef struct TYPE_30__ TYPE_3__ ;
typedef struct TYPE_29__ TYPE_2__ ;
typedef struct TYPE_28__ TYPE_1__ ;
typedef struct TYPE_27__ TYPE_15__ ;
typedef struct TYPE_26__ TYPE_11__ ;
typedef struct TYPE_25__ TYPE_10__ ;


typedef int object_header_t ;
struct TYPE_33__ {int security_flags; int connect_timeout; int status_code; int proxy; TYPE_15__* netconn; TYPE_5__* req_file; TYPE_4__* session; TYPE_2__* server; } ;
typedef TYPE_6__ http_request_t ;
struct TYPE_34__ {int LastModifiedTime; int ExpireTime; } ;
typedef TYPE_7__ WCHAR ;
typedef int ULONG ;
struct TYPE_36__ {int Flags; int DestPort; int SourcePort; int Socket; } ;
struct TYPE_35__ {TYPE_1__* pCertInfo; int dwCertEncodingType; } ;
struct TYPE_32__ {int file_name; int url; } ;
struct TYPE_31__ {TYPE_3__* appInfo; TYPE_7__* password; TYPE_7__* userName; } ;
struct TYPE_30__ {TYPE_7__* proxyPassword; TYPE_7__* proxyUsername; TYPE_7__* agent; } ;
struct TYPE_29__ {int security_flags; int port; } ;
struct TYPE_28__ {int Issuer; int Subject; int NotBefore; int NotAfter; } ;
struct TYPE_27__ {int security_flags; int secure; } ;
struct TYPE_26__ {int ftLastModified; int ftExpires; } ;
struct TYPE_25__ {int dwKeySize; int * lpszIssuerInfo; int * lpszSubjectInfo; int ftStart; int ftExpiry; } ;
typedef TYPE_8__* PCCERT_CONTEXT ;
typedef TYPE_9__ INTERNET_DIAGNOSTIC_SOCKET_INFO ;
typedef TYPE_10__ INTERNET_CERTIFICATE_INFOA ;
typedef TYPE_11__ INTERNET_CACHE_TIMESTAMPS ;
typedef TYPE_7__ INTERNET_CACHE_ENTRY_INFOW ;
typedef int DWORD ;
typedef int BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ,int *,int,int *,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_7__*,int*) ;
 int FUNC_5 (TYPE_6__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int *,int,void*,int*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_7 (int ,int) ;
 int FUNC_8 (TYPE_15__*) ;
 int FUNC_9 (TYPE_15__*) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,int ,int ,int,void*,int,int *,int *) ;
 TYPE_7__* FUNC_12 (TYPE_6__*) ;
 TYPE_7__* FUNC_13 (int) ;
 int FUNC_14 (TYPE_7__*) ;
 int FUNC_15 (TYPE_15__*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (void*,int ,int) ;
 int FUNC_18 (TYPE_10__*,int ,int) ;
 int FUNC_19 (TYPE_7__*,void*,int*,int ) ;

__attribute__((used)) static DWORD FUNC_20(object_header_t *VAR_16, DWORD VAR_17, void *VAR_18, DWORD *VAR_19, BOOL VAR_20)
{
    http_request_t *VAR_21 = (http_request_t*)VAR_16;

    switch(VAR_17) {
    case 138:
    {
        INTERNET_DIAGNOSTIC_SOCKET_INFO *VAR_22 = VAR_18;

        FUNC_2("INTERNET_DIAGNOSTIC_SOCKET_INFO stub\n");

        if (*VAR_19 < sizeof(INTERNET_DIAGNOSTIC_SOCKET_INFO))
            return VAR_4;
        *VAR_19 = sizeof(INTERNET_DIAGNOSTIC_SOCKET_INFO);



        VAR_22->Socket = 0;

        VAR_22->SourcePort = 0;
        VAR_22->DestPort = VAR_21->server->port;
        VAR_22->Flags = 0;
        if (FUNC_5(VAR_21))
            VAR_22->Flags |= VAR_10;
        if (VAR_21->proxy)
            VAR_22->Flags |= VAR_11;
        if (FUNC_15(VAR_21->netconn) && VAR_21->netconn->secure)
            VAR_22->Flags |= VAR_12;

        return VAR_9;
    }

    case 98:
        FUNC_10("Queried undocumented option 98, forwarding to INTERNET_OPTION_SECURITY_FLAGS\n");

    case 131:
    {
        DWORD VAR_23;

        if (*VAR_19 < sizeof(ULONG))
            return VAR_4;

        *VAR_19 = sizeof(DWORD);
        VAR_23 = FUNC_15(VAR_21->netconn) ? VAR_21->netconn->security_flags : VAR_21->security_flags | VAR_21->server->security_flags;
        *(DWORD *)VAR_18 = VAR_23;

        FUNC_10("INTERNET_OPTION_SECURITY_FLAGS %x\n", VAR_23);
        return VAR_9;
    }

    case 137:
        FUNC_10("INTERNET_OPTION_HANDLE_TYPE\n");

        if (*VAR_19 < sizeof(ULONG))
            return VAR_4;

        *VAR_19 = sizeof(DWORD);
        *(DWORD*)VAR_18 = VAR_13;
        return VAR_9;

    case 130: {
        WCHAR *VAR_24;
        DWORD VAR_25;

        FUNC_10("INTERNET_OPTION_URL\n");

        VAR_24 = FUNC_12(VAR_21);
        if(!VAR_24)
            return VAR_8;

        VAR_25 = FUNC_19(VAR_24, VAR_18, VAR_19, VAR_20);
        FUNC_14(VAR_24);
        return VAR_25;
    }
    case 128:
        return FUNC_19(VAR_21->session->appInfo->agent, VAR_18, VAR_19, VAR_20);
    case 129:
        return FUNC_19(VAR_21->session->userName, VAR_18, VAR_19, VAR_20);
    case 136:
        return FUNC_19(VAR_21->session->password, VAR_18, VAR_19, VAR_20);
    case 134:
        return FUNC_19(VAR_21->session->appInfo->proxyUsername, VAR_18, VAR_19, VAR_20);
    case 135:
        return FUNC_19(VAR_21->session->appInfo->proxyPassword, VAR_18, VAR_19, VAR_20);

    case 141: {
        INTERNET_CACHE_ENTRY_INFOW *VAR_26;
        INTERNET_CACHE_TIMESTAMPS *VAR_27 = VAR_18;
        DWORD VAR_28, VAR_29;
        BOOL VAR_30;

        FUNC_10("INTERNET_OPTION_CACHE_TIMESTAMPS\n");

        if(!VAR_21->req_file)
            return VAR_3;

        if (*VAR_19 < sizeof(*VAR_27))
        {
            *VAR_19 = sizeof(*VAR_27);
            return VAR_4;
        }

        VAR_28 = 0;
        VAR_30 = FUNC_4(VAR_21->req_file->url, ((void*)0), &VAR_28);
        VAR_29 = FUNC_3();
        if (!VAR_30 && VAR_29 == VAR_4)
        {
            if (!(VAR_26 = FUNC_13(VAR_28)))
                return VAR_8;

            FUNC_4(VAR_21->req_file->url, VAR_26, &VAR_28);

            VAR_27->ftExpires = VAR_26->ExpireTime;
            VAR_27->ftLastModified = VAR_26->LastModifiedTime;

            FUNC_14(VAR_26);
            *VAR_19 = sizeof(*VAR_27);
            return VAR_9;
        }
        return VAR_29;
    }

    case 139: {
        DWORD VAR_31;

        FUNC_10("INTERNET_OPTION_DATAFILE_NAME\n");

        if(!VAR_21->req_file) {
            *VAR_19 = 0;
            return VAR_6;
        }

        if(VAR_20) {
            VAR_31 = (FUNC_16(VAR_21->req_file->file_name)+1) * sizeof(WCHAR);
            if(*VAR_19 < VAR_31)
                return VAR_4;

            *VAR_19 = VAR_31;
            FUNC_17(VAR_18, VAR_21->req_file->file_name, *VAR_19);
            return VAR_9;
        }else {
            VAR_31 = FUNC_11(VAR_2, 0, VAR_21->req_file->file_name, -1, ((void*)0), 0, ((void*)0), ((void*)0));
            if (VAR_31 > *VAR_19)
                return VAR_4;

            *VAR_19 = FUNC_11(VAR_2, 0, VAR_21->req_file->file_name,
                    -1, VAR_18, *VAR_19, ((void*)0), ((void*)0));
            return VAR_9;
        }
    }

    case 132: {
        PCCERT_CONTEXT VAR_32;

        if(!VAR_21->netconn)
            return VAR_5;

        if(*VAR_19 < sizeof(INTERNET_CERTIFICATE_INFOA)) {
            *VAR_19 = sizeof(INTERNET_CERTIFICATE_INFOA);
            return VAR_4;
        }

        VAR_32 = (PCCERT_CONTEXT)FUNC_8(VAR_21->netconn);
        if(VAR_32) {
            INTERNET_CERTIFICATE_INFOA *VAR_33 = (INTERNET_CERTIFICATE_INFOA*)VAR_18;
            DWORD VAR_34;

            FUNC_18(VAR_33, 0, sizeof(*VAR_33));
            VAR_33->ftExpiry = VAR_32->pCertInfo->NotAfter;
            VAR_33->ftStart = VAR_32->pCertInfo->NotBefore;
            VAR_34 = FUNC_1(VAR_32->dwCertEncodingType,
                     &VAR_32->pCertInfo->Subject, VAR_1|VAR_0, ((void*)0), 0);
            VAR_33->lpszSubjectInfo = FUNC_7(0, VAR_34);
            if(VAR_33->lpszSubjectInfo)
                FUNC_1(VAR_32->dwCertEncodingType,
                         &VAR_32->pCertInfo->Subject, VAR_1|VAR_0,
                         VAR_33->lpszSubjectInfo, VAR_34);
            VAR_34 = FUNC_1(VAR_32->dwCertEncodingType,
                     &VAR_32->pCertInfo->Issuer, VAR_1|VAR_0, ((void*)0), 0);
            VAR_33->lpszIssuerInfo = FUNC_7(0, VAR_34);
            if(VAR_33->lpszIssuerInfo)
                FUNC_1(VAR_32->dwCertEncodingType,
                         &VAR_32->pCertInfo->Issuer, VAR_1|VAR_0,
                         VAR_33->lpszIssuerInfo, VAR_34);
            VAR_33->dwKeySize = FUNC_9(VAR_21->netconn);
            FUNC_0(VAR_32);
            return VAR_9;
        }
        return VAR_7;
    }
    case 140:
        if (*VAR_19 < sizeof(DWORD))
            return VAR_4;

        *VAR_19 = sizeof(DWORD);
        *(DWORD *)VAR_18 = VAR_21->connect_timeout;
        return VAR_9;
    case 133: {
        DWORD VAR_35 = 0;

        if (*VAR_19 < sizeof(DWORD))
            return VAR_4;






        if(VAR_21->proxy)
            VAR_35 |= VAR_15;
        if(!VAR_21->status_code)
            VAR_35 |= VAR_14;

        FUNC_10("INTERNET_OPTION_REQUEST_FLAGS returning %x\n", VAR_35);

        *VAR_19 = sizeof(DWORD);
        *(DWORD*)VAR_18 = VAR_35;
        return VAR_9;
    }
    }

    return FUNC_6(VAR_16, VAR_17, VAR_18, VAR_19, VAR_20);
}
