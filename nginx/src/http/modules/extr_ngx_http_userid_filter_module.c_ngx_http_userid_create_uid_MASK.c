
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct TYPE_17__ {int * s6_addr; } ;
struct sockaddr_in6 {TYPE_2__ sin6_addr; } ;
struct TYPE_19__ {int s_addr; } ;
struct sockaddr_in {TYPE_4__ sin_addr; } ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_20__ {int len; int * data; scalar_t__ not_found; } ;
typedef TYPE_5__ ngx_http_variable_value_t ;
struct TYPE_16__ {int len; char* data; } ;
struct TYPE_21__ {scalar_t__* uid_set; scalar_t__* uid_got; int reset; TYPE_1__ cookie; } ;
typedef TYPE_6__ ngx_http_userid_ctx_t ;
struct TYPE_22__ {char mark; scalar_t__ enable; scalar_t__ service; int name; } ;
typedef TYPE_7__ ngx_http_userid_conf_t ;
struct TYPE_23__ {TYPE_9__* connection; } ;
typedef TYPE_8__ ngx_http_request_t ;
struct TYPE_24__ {TYPE_3__* local_sockaddr; int log; } ;
typedef TYPE_9__ ngx_connection_t ;
struct TYPE_18__ {int sa_family; } ;




 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_9__*,int *,int ) ;
 TYPE_5__* FUNC_2 (TYPE_8__*,int ) ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ,char*,int *,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_http_request_t *VAR_9, ngx_http_userid_ctx_t *VAR_10,
    ngx_http_userid_conf_t *VAR_11)
{
    ngx_connection_t *VAR_12;
    struct sockaddr_in *VAR_13;
    ngx_http_variable_value_t *VAR_14;





    if (VAR_10->uid_set[3] != 0) {
        return VAR_4;
    }

    if (VAR_10->uid_got[3] != 0) {

        VAR_14 = FUNC_2(VAR_9, VAR_5);

        if (VAR_14 == ((void*)0) || VAR_14->not_found) {
            return VAR_1;
        }

        if (VAR_14->len == 0 || (VAR_14->len == 1 && VAR_14->data[0] == '0')) {

            if (VAR_11->mark == '\0'
                || (VAR_10->cookie.len > 23
                    && VAR_10->cookie.data[22] == VAR_11->mark
                    && VAR_10->cookie.data[23] == '='))
            {
                return VAR_4;
            }

            VAR_10->uid_set[0] = VAR_10->uid_got[0];
            VAR_10->uid_set[1] = VAR_10->uid_got[1];
            VAR_10->uid_set[2] = VAR_10->uid_got[2];
            VAR_10->uid_set[3] = VAR_10->uid_got[3];

            return VAR_4;

        } else {
            VAR_10->reset = 1;

            if (VAR_14->len == 3 && FUNC_4(VAR_14->data, "log", 3) == 0) {
                FUNC_3(VAR_3, VAR_9->connection->log, 0,
                        "userid cookie \"%V=%08XD%08XD%08XD%08XD\" was reset",
                        &VAR_11->name, VAR_10->uid_got[0], VAR_10->uid_got[1],
                        VAR_10->uid_got[2], VAR_10->uid_got[3]);
            }
        }
    }






    if (VAR_11->enable == VAR_2) {
        if (VAR_11->service == VAR_0) {
            VAR_10->uid_set[0] = 0;
        } else {
            VAR_10->uid_set[0] = VAR_11->service;
        }
        VAR_10->uid_set[1] = (uint32_t) FUNC_5();
        VAR_10->uid_set[2] = VAR_8;
        VAR_10->uid_set[3] = VAR_6;
        VAR_6 += 0x100;

    } else {
        if (VAR_11->service == VAR_0) {

            VAR_12 = VAR_9->connection;

            if (FUNC_1(VAR_12, ((void*)0), 0) != VAR_4) {
                return VAR_1;
            }

            switch (VAR_12->local_sockaddr->sa_family) {
            default:
                VAR_13 = (struct sockaddr_in *) VAR_12->local_sockaddr;
                VAR_10->uid_set[0] = VAR_13->sin_addr.s_addr;
                break;
            }

        } else {
            VAR_10->uid_set[0] = FUNC_0(VAR_11->service);
        }

        VAR_10->uid_set[1] = FUNC_0((uint32_t) FUNC_5());
        VAR_10->uid_set[2] = FUNC_0(VAR_8);
        VAR_10->uid_set[3] = FUNC_0(VAR_7);
        VAR_7 += 0x100;
        if (VAR_7 < 0x03030302) {
            VAR_7 = 0x03030302;
        }
    }

    return VAR_4;
}
