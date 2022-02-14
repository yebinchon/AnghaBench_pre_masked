
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ content_read; scalar_t__ content_length; } ;
typedef TYPE_1__ netconn_stream_t ;
struct TYPE_5__ {int netconn; } ;
typedef TYPE_2__ http_request_t ;
typedef int data_stream_t ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int *,scalar_t__,int ,int*) ;
 int FUNC_1 (char*,scalar_t__,int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;

__attribute__((used)) static DWORD FUNC_4(data_stream_t *VAR_1, http_request_t *VAR_2, BYTE *VAR_3, DWORD VAR_4,
        DWORD *VAR_5, BOOL VAR_6)
{
    netconn_stream_t *VAR_7 = (netconn_stream_t*)VAR_1;
    DWORD VAR_8 = VAR_0;
    int VAR_9 = 0;

    VAR_4 = FUNC_3(VAR_4, VAR_7->content_length-VAR_7->content_read);

    if(VAR_4 && FUNC_2(VAR_2->netconn)) {
        VAR_8 = FUNC_0(VAR_2->netconn, VAR_3, VAR_4, VAR_6, &VAR_9);
        if(VAR_8 == VAR_0) {
            if(!VAR_9)
                VAR_7->content_length = VAR_7->content_read;
            VAR_7->content_read += VAR_9;
        }
    }

    FUNC_1("res %u read %u bytes\n", VAR_8, VAR_9);
    *VAR_5 = VAR_9;
    return VAR_8;
}
