
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef int uc ;
struct TYPE_20__ {int dwContext; int children; } ;
struct TYPE_23__ {int lstnSocket; TYPE_10__ hdr; TYPE_5__* lpAppInfo; int lpszUserName; int serverport; int servername; TYPE_4__* download_in_progress; } ;
typedef TYPE_3__ ftp_session_t ;
struct TYPE_22__ {void* hInternet; int entry; void* dwContext; scalar_t__ dwFlags; int htype; } ;
struct TYPE_24__ {scalar_t__ cache_file_handle; TYPE_2__ hdr; int * cache_file; TYPE_3__* lpFtpSession; void* session_deleted; int nDataSocket; } ;
typedef TYPE_4__ ftp_file_t ;
struct TYPE_21__ {int dwFlags; } ;
struct TYPE_25__ {TYPE_1__ hdr; } ;
typedef TYPE_5__ appinfo_t ;
typedef int WCHAR ;
struct TYPE_26__ {int dwStructSize; int * lpszUrlPath; int lpszUserName; int nPort; int lpszHostName; int nScheme; } ;
typedef TYPE_6__ URL_COMPONENTSW ;
struct TYPE_27__ {int dwError; void* dwResult; } ;
typedef int * LPCWSTR ;
typedef TYPE_7__ INTERNET_ASYNC_RESULT ;
typedef int INT ;
typedef void* HINTERNET ;
typedef void* DWORD_PTR ;
typedef scalar_t__ DWORD ;
typedef void* BOOL ;


 scalar_t__ FUNC_0 (int *,scalar_t__,int ,int *,int ,int ,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int *,int *,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_3__*,int *) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 void* FUNC_4 (TYPE_3__*,int *,scalar_t__) ;
 void* FUNC_5 (TYPE_3__*,int *,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_6 () ;
 int VAR_8 ;
 int FUNC_7 () ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (TYPE_10__*,int ,int ,TYPE_7__*,int) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_10 (TYPE_6__*,int ,int *,scalar_t__*) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_11 (char*) ;
 int VAR_15 ;
 int FUNC_12 (char*,scalar_t__) ;
 int VAR_16 ;
 int FUNC_13 (TYPE_10__*) ;
 TYPE_4__* FUNC_14 (TYPE_10__*,int *,int) ;
 int FUNC_15 (int) ;
 int * FUNC_16 (scalar_t__) ;
 int FUNC_17 (int *) ;
 void* FUNC_18 (int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (TYPE_6__*,int ,int) ;

__attribute__((used)) static HINTERNET FUNC_21(ftp_session_t *VAR_17,
 LPCWSTR VAR_18, DWORD VAR_19, DWORD VAR_20,
 DWORD_PTR VAR_21)
{
    INT VAR_22;
    BOOL VAR_23 = VAR_2;
    ftp_file_t *VAR_24 = ((void*)0);
    appinfo_t *VAR_25 = ((void*)0);

    FUNC_11("\n");


    FUNC_9(0);

    if (VAR_6 == VAR_19)
    {

        VAR_23 = FUNC_4(VAR_17, VAR_18, VAR_20);
    }
    else if (VAR_7 == VAR_19)
    {

        VAR_23 = FUNC_5(VAR_17, VAR_18, VAR_20);
    }


    if (VAR_23 && FUNC_2(VAR_17, &VAR_22))
    {
        VAR_24 = FUNC_14(&VAR_17->hdr, &VAR_5, sizeof(ftp_file_t));
        VAR_24->hdr.htype = VAR_16;
        VAR_24->hdr.dwFlags = VAR_20;
        VAR_24->hdr.dwContext = VAR_21;
        VAR_24->nDataSocket = VAR_22;
        VAR_24->cache_file = ((void*)0);
        VAR_24->cache_file_handle = VAR_12;
        VAR_24->session_deleted = VAR_2;

        FUNC_13( &VAR_17->hdr );
        VAR_24->lpFtpSession = VAR_17;
        FUNC_19( &VAR_17->hdr.children, &VAR_24->hdr.entry );


 VAR_17->download_in_progress = VAR_24;
    }

    if (VAR_17->lstnSocket != -1)
    {
        FUNC_15(VAR_17->lstnSocket);
        VAR_17->lstnSocket = -1;
    }

    if (VAR_23 && VAR_19 == VAR_6)
    {
        WCHAR VAR_26[VAR_13 + 1];
        URL_COMPONENTSW VAR_27;
        DWORD VAR_28;

        FUNC_20(&VAR_27, 0, sizeof(VAR_27));
        VAR_27.dwStructSize = sizeof(VAR_27);
        VAR_27.nScheme = VAR_9;
        VAR_27.lpszHostName = VAR_17->servername;
        VAR_27.nPort = VAR_17->serverport;
        VAR_27.lpszUserName = VAR_17->lpszUserName;
        VAR_27.lpszUrlPath = FUNC_18(VAR_18);

        if (!FUNC_10(&VAR_27, 0, ((void*)0), &VAR_28) && FUNC_6() == VAR_0)
        {
            WCHAR *VAR_29 = FUNC_16(VAR_28 * sizeof(WCHAR));

            if (VAR_29 && FUNC_10(&VAR_27, 0, VAR_29, &VAR_28) && FUNC_1(VAR_29, 0, ((void*)0), VAR_26, 0))
            {
                VAR_24->cache_file = FUNC_18(VAR_26);
                VAR_24->cache_file_handle = FUNC_0(VAR_26, VAR_7, VAR_4,
                                                      ((void*)0), VAR_14, VAR_3, ((void*)0));
                if (VAR_24->cache_file_handle == VAR_12)
                {
                    FUNC_12("Could not create cache file: %u\n", FUNC_6());
                    FUNC_17(VAR_24->cache_file);
                    VAR_24->cache_file = ((void*)0);
                }
            }
            FUNC_17(VAR_29);
        }
        FUNC_17(VAR_27.lpszUrlPath);
    }

    VAR_25 = VAR_17->lpAppInfo;
    if (VAR_25->hdr.dwFlags & VAR_8)
    {
        INTERNET_ASYNC_RESULT VAR_30;

 if (VAR_24)
 {
            VAR_30.dwResult = (DWORD_PTR)VAR_24->hdr.hInternet;
            VAR_30.dwError = VAR_1;
            FUNC_8(&VAR_17->hdr, VAR_17->hdr.dwContext, VAR_10,
                &VAR_30, sizeof(INTERNET_ASYNC_RESULT));
 }

        if(VAR_23) {
            FUNC_3(VAR_24, VAR_15);
        }else {
            VAR_30.dwResult = 0;
            VAR_30.dwError = FUNC_7();
            FUNC_8(&VAR_17->hdr, VAR_17->hdr.dwContext, VAR_11,
                    &VAR_30, sizeof(INTERNET_ASYNC_RESULT));
        }
    }

    if(!VAR_23)
        return VAR_2;

    return VAR_24->hdr.hInternet;
}
