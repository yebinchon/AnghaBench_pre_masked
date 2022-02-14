
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int ULONG ;
struct TYPE_11__ {scalar_t__ pstm; int hGlobal; } ;
struct TYPE_12__ {int tymed; TYPE_1__ u; } ;
struct TYPE_13__ {scalar_t__ dwBindVerb; TYPE_2__ stgmedData; int cbstgmedData; } ;
struct TYPE_14__ {int request; scalar_t__ post_stream; TYPE_3__ bind_info; } ;
struct TYPE_17__ {TYPE_4__ base; int full_header; } ;
struct TYPE_16__ {int member_0; int dwBufferLength; int lpvBuffer; int dwHeadersLength; int lpcszHeader; int dwBufferTotal; int dwHeadersTotal; } ;
struct TYPE_15__ {int QuadPart; } ;
typedef TYPE_5__ LARGE_INTEGER ;
typedef TYPE_6__ INTERNET_BUFFERSW ;
typedef TYPE_7__ HttpProtocol ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 scalar_t__ FUNC_2 (int ,TYPE_6__*,int *,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,TYPE_5__,int ,int *) ;
 int VAR_1 ;


 int FUNC_6 (int ) ;

__attribute__((used)) static ULONG FUNC_7(HttpProtocol *VAR_2)
{
    INTERNET_BUFFERSW VAR_3 = {sizeof(INTERNET_BUFFERSW)};
    BOOL VAR_4;

    VAR_3.lpcszHeader = VAR_2->full_header;
    VAR_3.dwHeadersLength = VAR_3.dwHeadersTotal = FUNC_6(VAR_2->full_header);

    if(VAR_2->base.bind_info.dwBindVerb != VAR_0) {
        switch(VAR_2->base.bind_info.stgmedData.tymed) {
        case 129:

            VAR_3.lpvBuffer = VAR_2->base.bind_info.stgmedData.u.hGlobal;
            VAR_3.dwBufferLength = VAR_3.dwBufferTotal = VAR_2->base.bind_info.cbstgmedData;
            break;
        case 128: {
            LARGE_INTEGER VAR_5;

            VAR_3.dwBufferTotal = VAR_2->base.bind_info.cbstgmedData;
            if(!VAR_2->base.post_stream) {
                VAR_2->base.post_stream = VAR_2->base.bind_info.stgmedData.u.pstm;
                FUNC_4(VAR_2->base.post_stream);
            }

            VAR_5.QuadPart = 0;
            FUNC_5(VAR_2->base.post_stream, VAR_5, VAR_1, ((void*)0));
            break;
        }
        default:
            FUNC_0("Unsupported This->base.bind_info.stgmedData.tymed %d\n", VAR_2->base.bind_info.stgmedData.tymed);
        }
    }

    if(VAR_2->base.post_stream)
        VAR_4 = FUNC_2(VAR_2->base.request, &VAR_3, ((void*)0), 0, 0);
    else
        VAR_4 = FUNC_3(VAR_2->base.request, VAR_3.lpcszHeader, VAR_3.dwHeadersLength,
                VAR_3.lpvBuffer, VAR_3.dwBufferLength);

    return VAR_4 ? 0 : FUNC_1();
}
