
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* callback ) (struct lwan_request*,int ) ;int data; } ;
struct lwan_response {int buffer; TYPE_1__ stream; int mime_type; } ;
struct lwan_request {int flags; struct lwan_response response; } ;
struct iovec {char* iov_base; size_t iov_len; } ;
typedef int headers ;
typedef enum lwan_http_status { ____Placeholder_lwan_http_status } lwan_http_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int (*) (struct lwan_request*,int )) ;
 int FUNC_1 (struct iovec*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct lwan_request*,int) ;
 int FUNC_5 (struct lwan_request*,int) ;
 size_t FUNC_6 (struct lwan_request*,int,char*,int) ;
 int FUNC_7 (struct lwan_request*) ;
 int FUNC_8 (struct lwan_request*) ;
 int FUNC_9 (struct lwan_request*,char*,size_t,int ) ;
 int FUNC_10 (char*) ;
 char* FUNC_11 (int ) ;
 size_t FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct lwan_request*,struct iovec*,int ) ;
 int FUNC_15 (char*,char*,size_t const) ;
 int FUNC_16 (struct lwan_request*,int ) ;

void FUNC_17(struct lwan_request *VAR_6, enum lwan_http_status VAR_7)
{
    const struct lwan_response *VAR_8 = &VAR_6->response;
    char VAR_9[VAR_0];

    if (FUNC_2(VAR_6->flags & VAR_3)) {

        FUNC_13(VAR_8->buffer);
        FUNC_8(VAR_6);
        FUNC_4(VAR_6, VAR_7);
        return;
    }

    if (FUNC_2(VAR_6->flags & VAR_4)) {
        FUNC_10("Headers already sent, ignoring call");
        return;
    }

    if (FUNC_2(!VAR_8->mime_type)) {


        FUNC_5(VAR_6, VAR_7);
        return;
    }

    FUNC_4(VAR_6, VAR_7);

    if (VAR_6->flags & VAR_5) {
        if (FUNC_0(VAR_8->stream.callback)) {
            VAR_7 = VAR_8->stream.callback(VAR_6, VAR_8->stream.data);
        } else {
            VAR_7 = VAR_2;
        }

        if (VAR_7 >= VAR_1) {
            VAR_6->flags &= ~VAR_5;
            FUNC_5(VAR_6, VAR_7);
        }

        return;
    }

    size_t VAR_10 =
        FUNC_6(VAR_6, VAR_7, VAR_9, sizeof(VAR_9));
    if (FUNC_2(!VAR_10)) {
        FUNC_5(VAR_6, VAR_2);
        return;
    }

    if (!FUNC_3(FUNC_7(VAR_6), VAR_7)) {
        FUNC_9(VAR_6, VAR_9, VAR_10, 0);
        return;
    }

    char *VAR_11 = FUNC_11(VAR_8->buffer);
    const size_t VAR_12 = FUNC_12(VAR_8->buffer);
    if (sizeof(VAR_9) - VAR_10 > VAR_12) {



        FUNC_15(VAR_9 + VAR_10, VAR_11, VAR_12);
        FUNC_9(VAR_6, VAR_9, VAR_10 + VAR_12, 0);
    } else {
        struct iovec VAR_13[] = {
            {.iov_base = VAR_9, .iov_len = VAR_10},
            {.iov_base = VAR_11, .iov_len = VAR_12},
        };

        FUNC_14(VAR_6, VAR_13, FUNC_1(VAR_13));
    }
}
