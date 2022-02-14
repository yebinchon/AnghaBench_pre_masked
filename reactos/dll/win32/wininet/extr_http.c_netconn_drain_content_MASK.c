
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int content_length; unsigned int content_read; } ;
typedef TYPE_1__ netconn_stream_t ;
struct TYPE_5__ {int netconn; } ;
typedef TYPE_2__ http_request_t ;
typedef int data_stream_t ;
typedef int buf ;
typedef int DWORD ;
typedef int BYTE ;
typedef int BOOL ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,size_t,int ,int*) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_1 (int,unsigned int) ;

__attribute__((used)) static DWORD FUNC_2(data_stream_t *VAR_3, http_request_t *VAR_4, BOOL VAR_5)
{
    netconn_stream_t *VAR_6 = (netconn_stream_t*)VAR_3;
    BYTE VAR_7[1024];
    int VAR_8, VAR_9;
    size_t VAR_10;

    if(VAR_6->content_length == ~0u)
        return VAR_2;

    while(VAR_6->content_read < VAR_6->content_length) {
        VAR_10 = FUNC_1(sizeof(VAR_7), VAR_6->content_length-VAR_6->content_read);
        VAR_9 = FUNC_0(VAR_4->netconn, VAR_7, VAR_10, VAR_5, &VAR_8);
        if(VAR_9)
            return VAR_9;
        if(!VAR_8)
            return VAR_1;

        VAR_6->content_read += VAR_8;
    }

    return VAR_0;
}
