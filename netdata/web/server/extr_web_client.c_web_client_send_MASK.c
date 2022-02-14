
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int zoutput; size_t sent; scalar_t__ rlen; TYPE_1__* data; } ;
struct web_client {scalar_t__ mode; int id; TYPE_2__ response; int stats_sent_bytes; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_3__ {scalar_t__ len; int * buffer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct web_client*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,char*,int ,...) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct web_client*) ;
 int FUNC_5 (struct web_client*) ;
 scalar_t__ FUNC_6 (struct web_client*) ;
 int FUNC_7 (struct web_client*) ;
 scalar_t__ FUNC_8 (struct web_client*,int *,scalar_t__,int ) ;
 scalar_t__ FUNC_9 (struct web_client*) ;

ssize_t FUNC_10(struct web_client *VAR_3) {




    ssize_t VAR_4;

    if(FUNC_3(VAR_3->response.data->len - VAR_3->response.sent == 0)) {


        FUNC_1(VAR_0, "%llu: Out of output data.", VAR_3->id);





        if(VAR_3->mode == VAR_2 && FUNC_6(VAR_3) && VAR_3->response.rlen && VAR_3->response.rlen > VAR_3->response.data->len) {

            FUNC_1(VAR_0, "%llu: Waiting for more data to become available.", VAR_3->id);
            FUNC_4(VAR_3);
            return 0;
        }

        if(FUNC_3(!FUNC_5(VAR_3))) {
            FUNC_1(VAR_0, "%llu: Closing (keep-alive is not enabled). %zu bytes sent.", VAR_3->id, VAR_3->response.sent);
            FUNC_0(VAR_3);
            return 0;
        }

        FUNC_7(VAR_3);
        FUNC_1(VAR_0, "%llu: Done sending all data on socket. Waiting for next request on the same socket.", VAR_3->id);
        return 0;
    }

    VAR_4 = FUNC_8(VAR_3,&VAR_3->response.data->buffer[VAR_3->response.sent], VAR_3->response.data->len - VAR_3->response.sent, VAR_1);
    if(FUNC_2(VAR_4 > 0)) {
        VAR_3->stats_sent_bytes += VAR_4;
        VAR_3->response.sent += VAR_4;
        FUNC_1(VAR_0, "%llu: Sent %zd bytes.", VAR_3->id, VAR_4);
    }
    else if(FUNC_2(VAR_4 == 0)) {
        FUNC_1(VAR_0, "%llu: Did not send any bytes to the client.", VAR_3->id);
        FUNC_0(VAR_3);
    }
    else {
        FUNC_1(VAR_0, "%llu: Failed to send data to client.", VAR_3->id);
        FUNC_0(VAR_3);
    }

    return(VAR_4);
}
