
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int http_request_t ;
typedef int data_stream_t ;
struct TYPE_2__ {int state; } ;
typedef TYPE_1__ chunked_stream_t ;
typedef int BOOL ;





 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOL FUNC_0(data_stream_t *VAR_2, http_request_t *VAR_3)
{
    chunked_stream_t *VAR_4 = (chunked_stream_t*)VAR_2;
    switch(VAR_4->state) {
    case 130:
    case 129:
    case 128:
        return VAR_1;
    default:
        return VAR_0;
    }
}
