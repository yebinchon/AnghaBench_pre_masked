
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int http_request_t ;
typedef int data_stream_t ;
struct TYPE_2__ {scalar_t__ state; } ;
typedef TYPE_1__ chunked_stream_t ;
typedef int buf ;
typedef scalar_t__ DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *,int *,int,scalar_t__*,int ) ;

__attribute__((used)) static DWORD FUNC_1(data_stream_t *VAR_4, http_request_t *VAR_5, BOOL VAR_6)
{
    chunked_stream_t *VAR_7 = (chunked_stream_t*)VAR_4;
    BYTE VAR_8[1024];
    DWORD VAR_9, VAR_10;

    while(VAR_7->state != VAR_0
          && VAR_7->state != VAR_1) {
        VAR_10 = FUNC_0(VAR_4, VAR_5, VAR_8, sizeof(VAR_8), &VAR_9, VAR_6);
        if(VAR_10 != VAR_3)
            return VAR_10;
    }

    if(VAR_7->state != VAR_0)
        return VAR_2;
    return VAR_3;
}
