
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ total_out; scalar_t__ total_in; scalar_t__ avail_out; scalar_t__ avail_in; } ;
struct TYPE_4__ {size_t rlen; char zoutput; scalar_t__ zinitialized; TYPE_2__ zstream; scalar_t__ zhave; scalar_t__ zsent; scalar_t__ code; scalar_t__ sent; TYPE_3__* data; TYPE_3__* header; TYPE_3__* header_output; } ;
struct timeval {int dummy; } ;
struct web_client {char* last_url; int mode; int ifd; int ofd; char* cookie1; char* cookie2; char* origin; char* decoded_url; TYPE_1__ response; int id; scalar_t__ header_parse_last_size; scalar_t__ header_parse_tries; scalar_t__ tcp_cork; int * auth_bearer_token; int * user_agent; struct timeval tv_in; struct timeval tv_ready; int client_port; int client_ip; int stats_sent_bytes; int stats_received_bytes; } ;
struct TYPE_6__ {size_t len; } ;


 int VAR_0 ;
 int VAR_1 ;




 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,int ,...) ;
 int FUNC_3 (TYPE_2__*) ;
 double FUNC_4 (struct timeval*,struct timeval*) ;
 int FUNC_5 (double,int ,int ,size_t,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 (char*,int ,int ,int ,int ,char const*,size_t,size_t,size_t,double,double,double,scalar_t__,int ) ;
 int FUNC_10 (struct timeval*) ;
 int FUNC_11 (char*) ;
 scalar_t__ FUNC_12 (int) ;
 int FUNC_13 (struct web_client*) ;
 int FUNC_14 (struct web_client*) ;
 int FUNC_15 (struct web_client*) ;
 int FUNC_16 (struct web_client*) ;
 int FUNC_17 (struct web_client*) ;
 int FUNC_18 (struct web_client*) ;
 scalar_t__ VAR_3 ;

void FUNC_19(struct web_client *VAR_4) {
    FUNC_18(VAR_4);

    FUNC_2(VAR_1, "%llu: Resetting client.", VAR_4->id);

    if(FUNC_8(VAR_4->last_url[0])) {
        struct timeval VAR_5;
        FUNC_10(&VAR_5);

        size_t VAR_6 = (VAR_4->mode == 131)?VAR_4->response.rlen:VAR_4->response.data->len;
        size_t VAR_7 = VAR_6;







        FUNC_5(FUNC_4(&VAR_5, &VAR_4->tv_in),
                                        VAR_4->stats_received_bytes,
                                        VAR_4->stats_sent_bytes,
                                        VAR_6,
                                        VAR_7);

        VAR_4->stats_received_bytes = 0;
        VAR_4->stats_sent_bytes = 0;




        const char *VAR_8;
        switch(VAR_4->mode) {
            case 131:
                VAR_8 = "FILECOPY";
                break;

            case 129:
                VAR_8 = "OPTIONS";
                break;

            case 128:
                VAR_8 = "STREAM";
                break;

            case 130:
                VAR_8 = "DATA";
                break;

            default:
                VAR_8 = "UNKNOWN";
                break;
        }


        FUNC_9("%llu: %d '[%s]:%s' '%s' (sent/all = %zu/%zu bytes %0.0f%%, prep/sent/total = %0.2f/%0.2f/%0.2f ms) %d '%s'",
                   VAR_4->id
                   , FUNC_7()
                   , VAR_4->client_ip
                   , VAR_4->client_port
                   , VAR_8
                   , VAR_7
                   , VAR_6
                   , -((VAR_6 > 0) ? ((VAR_6 - VAR_7) / (double) VAR_6 * 100.0) : 0.0)
                   , FUNC_4(&VAR_4->tv_ready, &VAR_4->tv_in) / 1000.0
                   , FUNC_4(&VAR_5, &VAR_4->tv_ready) / 1000.0
                   , FUNC_4(&VAR_5, &VAR_4->tv_in) / 1000.0
                   , VAR_4->response.code
                   , FUNC_11(VAR_4->last_url)
        );
    }

    if(FUNC_12(VAR_4->mode == 131)) {
        if(VAR_4->ifd != VAR_4->ofd) {
            FUNC_2(VAR_1, "%llu: Closing filecopy input file descriptor %d.", VAR_4->id, VAR_4->ifd);

            if(VAR_3 != VAR_2) {
                if (VAR_4->ifd != -1){
                    FUNC_1(VAR_4->ifd);
                }
            }

            VAR_4->ifd = VAR_4->ofd;
        }
    }

    VAR_4->last_url[0] = '\0';
    VAR_4->cookie1[0] = '\0';
    VAR_4->cookie2[0] = '\0';
    VAR_4->origin[0] = '*';
    VAR_4->origin[1] = '\0';

    FUNC_6(VAR_4->user_agent); VAR_4->user_agent = ((void*)0);
    if (VAR_4->auth_bearer_token) {
        FUNC_6(VAR_4->auth_bearer_token);
        VAR_4->auth_bearer_token = ((void*)0);
    }

    VAR_4->mode = 130;

    VAR_4->tcp_cork = 0;
    FUNC_13(VAR_4);
    FUNC_15(VAR_4);
    FUNC_14(VAR_4);
    VAR_4->decoded_url[0] = '\0';

    FUNC_0(VAR_4->response.header_output);
    FUNC_0(VAR_4->response.header);
    FUNC_0(VAR_4->response.data);
    VAR_4->response.rlen = 0;
    VAR_4->response.sent = 0;
    VAR_4->response.code = 0;

    VAR_4->header_parse_tries = 0;
    VAR_4->header_parse_last_size = 0;

    FUNC_17(VAR_4);
    FUNC_16(VAR_4);

    VAR_4->response.zoutput = 0;
}
