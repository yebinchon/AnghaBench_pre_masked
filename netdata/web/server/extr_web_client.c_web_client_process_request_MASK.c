
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rlen; TYPE_3__* data; scalar_t__ sent; void* code; } ;
struct TYPE_7__ {scalar_t__ tv_sec; } ;
struct web_client {int mode; int id; TYPE_1__ response; TYPE_2__ tv_ready; int last_url; int decoded_url; TYPE_2__ tv_in; } ;
struct TYPE_8__ {scalar_t__ len; scalar_t__ date; int buffer; int contenttype; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;





 scalar_t__ VAR_7 ;




 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,char*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,char*) ;
 int FUNC_3 (int ,char*,int ,...) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (struct web_client*) ;
 int VAR_8 ;
 int FUNC_6 (TYPE_2__*) ;
 void* FUNC_7 (int ,struct web_client*,int ) ;
 int FUNC_8 (int ,char*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct web_client*) ;
 int FUNC_11 (struct web_client*) ;
 int FUNC_12 (struct web_client*) ;
 int FUNC_13 (struct web_client*) ;
 int FUNC_14 (struct web_client*) ;
 int FUNC_15 (struct web_client*) ;
 int FUNC_16 (struct web_client*) ;
 int FUNC_17 (struct web_client*) ;
 int FUNC_18 (struct web_client*) ;
 int FUNC_19 (struct web_client*) ;
 void* FUNC_20 (int ,struct web_client*,int ) ;
 int FUNC_21 (struct web_client*) ;

void FUNC_22(struct web_client *VAR_9) {


    FUNC_6(&VAR_9->tv_in);

    switch(FUNC_5(VAR_9)) {
        case 133:
            switch(VAR_9->mode) {
                case 128:
                    if(FUNC_9(!FUNC_15(VAR_9))) {
                        FUNC_19(VAR_9);
                        return;
                    }

                    VAR_9->response.code = FUNC_7(VAR_8, VAR_9, VAR_9->decoded_url);
                    return;

                case 129:
                    if(FUNC_9(
                            !FUNC_11(VAR_9) &&
                            !FUNC_14(VAR_9) &&
                            !FUNC_10(VAR_9) &&
                            !FUNC_12(VAR_9) &&
                            !FUNC_13(VAR_9)
                    )) {
                        FUNC_19(VAR_9);
                        break;
                    }

                    VAR_9->response.data->contenttype = VAR_1;
                    FUNC_0(VAR_9->response.data);
                    FUNC_2(VAR_9->response.data, "OK");
                    VAR_9->response.code = VAR_6;
                    break;

                case 131:
                case 130:
                    if(FUNC_9(
                            !FUNC_11(VAR_9) &&
                            !FUNC_14(VAR_9) &&
                            !FUNC_10(VAR_9) &&
                            !FUNC_12(VAR_9) &&
                            !FUNC_13(VAR_9)
                    )) {
                        FUNC_19(VAR_9);
                        break;
                    }

                    VAR_9->response.code = FUNC_20(VAR_8, VAR_9, VAR_9->decoded_url);
                    break;
            }
            break;

        case 136:
            if(VAR_9->response.data->len > VAR_7) {
                FUNC_8(VAR_9->last_url, "too big request");

                FUNC_3(VAR_3, "%llu: Received request is too big (%zu bytes).", VAR_9->id, VAR_9->response.data->len);

                FUNC_0(VAR_9->response.data);
                FUNC_1(VAR_9->response.data, "Received request is too big  (%zu bytes).\r\n", VAR_9->response.data->len);
                VAR_9->response.code = VAR_4;
            }
            else {

                return;
            }
            break;
        case 135:
            FUNC_3(VAR_3, "%llu: URL parsing failed (malformed URL). Cannot understand '%s'.", VAR_9->id, VAR_9->response.data->buffer);

            FUNC_0(VAR_9->response.data);
            FUNC_2(VAR_9->response.data, "URL not valid. I don't understand you...\r\n");
            VAR_9->response.code = VAR_4;
            break;
        case 134:
            FUNC_3(VAR_3, "%llu: Cannot understand '%s'.", VAR_9->id, VAR_9->response.data->buffer);

            FUNC_0(VAR_9->response.data);
            FUNC_2(VAR_9->response.data, "I don't understand you...\r\n");
            VAR_9->response.code = VAR_4;
            break;
    }


    FUNC_6(&VAR_9->tv_ready);

    VAR_9->response.sent = 0;


    if(FUNC_9(!VAR_9->response.data->date))
        VAR_9->response.data->date = VAR_9->tv_ready.tv_sec;

    FUNC_21(VAR_9);


    if(VAR_9->response.data->len) FUNC_18(VAR_9);
    else FUNC_16(VAR_9);

    switch(VAR_9->mode) {
        case 128:
            FUNC_3(VAR_2, "%llu: STREAM done.", VAR_9->id);
            break;

        case 129:
            FUNC_3(VAR_2, "%llu: Done preparing the OPTIONS response. Sending data (%zu bytes) to client.", VAR_9->id, VAR_9->response.data->len);
            break;

        case 130:
            FUNC_3(VAR_2, "%llu: Done preparing the response. Sending data (%zu bytes) to client.", VAR_9->id, VAR_9->response.data->len);
            break;

        case 131:
            if(VAR_9->response.rlen) {
                FUNC_3(VAR_2, "%llu: Done preparing the response. Will be sending data file of %zu bytes to client.", VAR_9->id, VAR_9->response.rlen);
                FUNC_17(VAR_9);
            }
            else
                FUNC_3(VAR_2, "%llu: Done preparing the response. Will be sending an unknown amount of bytes to client.", VAR_9->id);
            break;

        default:
            FUNC_4("%llu: Unknown client mode %u.", VAR_9->id, VAR_9->mode);
            break;
    }
}
