
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int object_header_t ;
struct TYPE_7__ {int security_flags; int connect_timeout; int send_timeout; int receive_timeout; TYPE_2__* session; TYPE_4__* netconn; } ;
typedef TYPE_3__ http_request_t ;
struct TYPE_8__ {int security_flags; } ;
struct TYPE_6__ {TYPE_1__* appInfo; void* password; void* userName; } ;
struct TYPE_5__ {void* proxyPassword; void* proxyUsername; } ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int,void*,int) ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (TYPE_4__*) ;

__attribute__((used)) static DWORD FUNC_5(object_header_t *VAR_5, DWORD VAR_6, void *VAR_7, DWORD VAR_8)
{
    http_request_t *VAR_9 = (http_request_t*)VAR_5;

    switch(VAR_6) {
    case 99:
        FUNC_1("Undocumented option 99\n");

        if (!VAR_7 || VAR_8 != sizeof(DWORD))
            return VAR_1;
        if(*(DWORD*)VAR_7 & ~VAR_4)
            return VAR_0;


    case 130:
    {
        DWORD VAR_10;

        if (!VAR_7 || VAR_8 != sizeof(DWORD))
            return VAR_1;
        VAR_10 = *(DWORD *)VAR_7;
        FUNC_1("INTERNET_OPTION_SECURITY_FLAGS %08x\n", VAR_10);
        VAR_10 &= VAR_4;
        VAR_9->security_flags |= VAR_10;
        if(FUNC_4(VAR_9->netconn))
            VAR_9->netconn->security_flags |= VAR_10;
        return VAR_3;
    }
    case 135:
        if (!VAR_7 || VAR_8 != sizeof(DWORD)) return VAR_1;
        VAR_9->connect_timeout = *(DWORD *)VAR_7;
        return VAR_3;

    case 129:
        if (!VAR_7 || VAR_8 != sizeof(DWORD)) return VAR_1;
        VAR_9->send_timeout = *(DWORD *)VAR_7;
        return VAR_3;

    case 131:
        if (!VAR_7 || VAR_8 != sizeof(DWORD)) return VAR_1;
        VAR_9->receive_timeout = *(DWORD *)VAR_7;
        return VAR_3;

    case 128:
        FUNC_2(VAR_9->session->userName);
        if (!(VAR_9->session->userName = FUNC_3(VAR_7))) return VAR_2;
        return VAR_3;

    case 134:
        FUNC_2(VAR_9->session->password);
        if (!(VAR_9->session->password = FUNC_3(VAR_7))) return VAR_2;
        return VAR_3;

    case 132:
        FUNC_2(VAR_9->session->appInfo->proxyUsername);
        if (!(VAR_9->session->appInfo->proxyUsername = FUNC_3(VAR_7))) return VAR_2;
        return VAR_3;

    case 133:
        FUNC_2(VAR_9->session->appInfo->proxyPassword);
        if (!(VAR_9->session->appInfo->proxyPassword = FUNC_3(VAR_7))) return VAR_2;
        return VAR_3;

    }

    return FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
}
