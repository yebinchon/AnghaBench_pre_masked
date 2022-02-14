
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
typedef int BOOL ;


 int FUNC_0 (int ) ;

__attribute__((used)) static BOOL FUNC_1(data_stream_t *VAR_0, http_request_t *VAR_1)
{
    netconn_stream_t *VAR_2 = (netconn_stream_t*)VAR_0;
    return VAR_2->content_read == VAR_2->content_length || !FUNC_0(VAR_1->netconn);
}
