
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* data; } ;
struct TYPE_4__ {scalar_t__ conn; int flags; } ;
struct web_client {scalar_t__ mode; int id; TYPE_2__ response; int stats_received_bytes; int ifd; TYPE_1__ ssl; } ;
typedef int ssize_t ;
struct TYPE_6__ {int size; size_t len; char* buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__,char*,size_t) ;
 int FUNC_1 (struct web_client*) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (TYPE_3__*,int ) ;
 int FUNC_3 (int ,char*,int ,...) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int ,char*,size_t,int ) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (struct web_client*) ;
 int FUNC_8 (struct web_client*) ;

ssize_t FUNC_9(struct web_client *VAR_6)
{
    if(FUNC_6(VAR_6->mode == VAR_4))
        return FUNC_8(VAR_6);

    ssize_t VAR_7;
    ssize_t VAR_8 = VAR_6->response.data->size - VAR_6->response.data->len;


    FUNC_2(VAR_6->response.data, VAR_3);
    VAR_7 = FUNC_5(VAR_6->ifd, &VAR_6->response.data->buffer[VAR_6->response.data->len], (size_t) (VAR_8 - 1), VAR_2);


    if(FUNC_4(VAR_7 > 0)) {
        VAR_6->stats_received_bytes += VAR_7;

        size_t VAR_9 = VAR_6->response.data->len;
        (void)VAR_9;

        VAR_6->response.data->len += VAR_7;
        VAR_6->response.data->buffer[VAR_6->response.data->len] = '\0';

        FUNC_3(VAR_0, "%llu: Received %zd bytes.", VAR_6->id, VAR_7);
        FUNC_3(VAR_1, "%llu: Received data: '%s'.", VAR_6->id, &VAR_6->response.data->buffer[VAR_9]);
    }
    else {
        FUNC_3(VAR_0, "%llu: receive data failed.", VAR_6->id);
        FUNC_1(VAR_6);
    }

    return(VAR_7);
}
