
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int dwFlags; int dwInternalFlags; int hInternet; int entry; int decoding; int dwContext; int htype; } ;
struct TYPE_10__ {TYPE_1__ hdr; scalar_t__ receive_timeout; scalar_t__ send_timeout; int connect_timeout; int hostPort; void* password; void* userName; void* hostName; TYPE_3__* appInfo; } ;
typedef TYPE_2__ http_session_t ;
struct TYPE_12__ {scalar_t__ htype; int children; int decoding; } ;
struct TYPE_11__ {TYPE_5__ hdr; int connect_timeout; } ;
typedef TYPE_3__ appinfo_t ;
typedef scalar_t__* LPCWSTR ;
typedef int INTERNET_PORT ;
typedef int HINTERNET ;
typedef int DWORD_PTR ;
typedef int DWORD ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_5__*,int ,int ,int *,int) ;
 int FUNC_1 (char*,...) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (TYPE_5__*) ;
 TYPE_2__* FUNC_3 (TYPE_5__*,int *,int) ;
 int FUNC_4 (int) ;
 void* FUNC_5 (scalar_t__*) ;
 int FUNC_6 (int *,int *) ;

DWORD FUNC_7(appinfo_t *VAR_8, LPCWSTR VAR_9,
        INTERNET_PORT VAR_10, LPCWSTR VAR_11,
        LPCWSTR VAR_12, DWORD VAR_13, DWORD_PTR VAR_14,
        DWORD VAR_15, HINTERNET *VAR_16)
{
    http_session_t *VAR_17 = ((void*)0);

    FUNC_1("-->\n");

    if (!VAR_9 || !VAR_9[0])
        return VAR_0;

    FUNC_4( VAR_8->hdr.htype == VAR_7 );

    VAR_17 = FUNC_3(&VAR_8->hdr, &VAR_3, sizeof(http_session_t));
    if (!VAR_17)
        return VAR_1;





    VAR_17->hdr.htype = VAR_6;
    VAR_17->hdr.dwFlags = VAR_13;
    VAR_17->hdr.dwContext = VAR_14;
    VAR_17->hdr.dwInternalFlags |= VAR_15;
    VAR_17->hdr.decoding = VAR_8->hdr.decoding;

    FUNC_2( &VAR_8->hdr );
    VAR_17->appInfo = VAR_8;
    FUNC_6( &VAR_8->hdr.children, &VAR_17->hdr.entry );

    VAR_17->hostName = FUNC_5(VAR_9);
    if (VAR_11 && VAR_11[0])
        VAR_17->userName = FUNC_5(VAR_11);
    if (VAR_12 && VAR_12[0])
        VAR_17->password = FUNC_5(VAR_12);
    VAR_17->hostPort = VAR_10;
    VAR_17->connect_timeout = VAR_8->connect_timeout;
    VAR_17->send_timeout = 0;
    VAR_17->receive_timeout = 0;


    if (!(VAR_17->hdr.dwInternalFlags & VAR_4))
    {
        FUNC_0(&VAR_8->hdr, VAR_14,
                              VAR_5, &VAR_17->hdr.hInternet,
                              sizeof(HINTERNET));
    }






    FUNC_1("%p --> %p\n", VAR_8, VAR_17);

    *VAR_16 = VAR_17->hdr.hInternet;
    return VAR_2;
}
