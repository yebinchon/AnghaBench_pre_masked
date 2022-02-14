
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_31__ TYPE_9__ ;
typedef struct TYPE_30__ TYPE_8__ ;
typedef struct TYPE_29__ TYPE_7__ ;
typedef struct TYPE_28__ TYPE_6__ ;
typedef struct TYPE_27__ TYPE_5__ ;
typedef struct TYPE_26__ TYPE_4__ ;
typedef struct TYPE_25__ TYPE_3__ ;
typedef struct TYPE_24__ TYPE_2__ ;
typedef struct TYPE_23__ TYPE_1__ ;
typedef struct TYPE_22__ TYPE_15__ ;
typedef struct TYPE_21__ TYPE_10__ ;


typedef int u_char ;
struct TYPE_25__ {int s_addr; } ;
struct sockaddr_in {TYPE_3__ sin_addr; void* sin_port; int sin_family; } ;
struct sockaddr {int dummy; } ;
typedef size_t ngx_uint_t ;
struct TYPE_27__ {void* (* create_loc_conf ) (TYPE_10__*) ;void* (* create_srv_conf ) (TYPE_10__*) ;} ;
typedef TYPE_5__ ngx_http_module_t ;
struct TYPE_26__ {int len; int * data; } ;
struct TYPE_28__ {int socklen; int rcvbuf; int sndbuf; int setfib; int fastopen; int wildcard; struct sockaddr* sockaddr; TYPE_4__ addr_text; int backlog; } ;
typedef TYPE_6__ ngx_http_listen_opt_t ;
struct TYPE_29__ {int listen; TYPE_9__* ctx; } ;
typedef TYPE_7__ ngx_http_core_srv_conf_t ;
struct TYPE_30__ {int servers; } ;
typedef TYPE_8__ ngx_http_core_main_conf_t ;
struct TYPE_31__ {TYPE_8__** main_conf; TYPE_7__** srv_conf; void** loc_conf; } ;
typedef TYPE_9__ ngx_http_conf_ctx_t ;
struct TYPE_21__ {int pool; int cmd_type; TYPE_9__* ctx; TYPE_2__* cycle; } ;
typedef TYPE_10__ ngx_conf_t ;
typedef int ngx_command_t ;
struct TYPE_24__ {TYPE_1__** modules; } ;
struct TYPE_23__ {scalar_t__ type; size_t ctx_index; TYPE_5__* ctx; } ;
struct TYPE_22__ {size_t ctx_index; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 () ;
 void* FUNC_1 (int) ;
 TYPE_7__** FUNC_2 (int *) ;
 char* FUNC_3 (TYPE_10__*,int *) ;
 scalar_t__ FUNC_4 (TYPE_10__*,TYPE_7__*,TYPE_6__*) ;
 TYPE_15__ VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_6__*,int) ;
 void* FUNC_6 (int ,int) ;
 int * FUNC_7 (int ,size_t) ;
 int FUNC_8 (struct sockaddr*,int,int *,size_t,int) ;
 void* FUNC_9 (TYPE_10__*) ;
 void* FUNC_10 (TYPE_10__*) ;

__attribute__((used)) static char *
FUNC_11(ngx_conf_t *VAR_11, ngx_command_t *VAR_12, void *VAR_13)
{
    char *VAR_14;
    void *VAR_15;
    size_t VAR_16;
    u_char *VAR_17;
    ngx_uint_t VAR_18;
    ngx_conf_t VAR_19;
    ngx_http_module_t *VAR_20;
    struct sockaddr_in *VAR_21;
    ngx_http_conf_ctx_t *VAR_22, *VAR_23;
    ngx_http_listen_opt_t VAR_24;
    ngx_http_core_srv_conf_t *VAR_25, **VAR_26;
    ngx_http_core_main_conf_t *VAR_27;

    VAR_22 = FUNC_6(VAR_11->pool, sizeof(ngx_http_conf_ctx_t));
    if (VAR_22 == ((void*)0)) {
        return VAR_2;
    }

    VAR_23 = VAR_11->ctx;
    VAR_22->main_conf = VAR_23->main_conf;



    VAR_22->srv_conf = FUNC_6(VAR_11->pool, sizeof(void *) * VAR_10);
    if (VAR_22->srv_conf == ((void*)0)) {
        return VAR_2;
    }



    VAR_22->loc_conf = FUNC_6(VAR_11->pool, sizeof(void *) * VAR_10);
    if (VAR_22->loc_conf == ((void*)0)) {
        return VAR_2;
    }

    for (VAR_18 = 0; VAR_11->cycle->modules[VAR_18]; VAR_18++) {
        if (VAR_11->cycle->modules[VAR_18]->type != VAR_4) {
            continue;
        }

        VAR_20 = VAR_11->cycle->modules[VAR_18]->ctx;

        if (VAR_20->create_srv_conf) {
            VAR_15 = VAR_20->create_srv_conf(VAR_11);
            if (VAR_15 == ((void*)0)) {
                return VAR_2;
            }

            VAR_22->srv_conf[VAR_11->cycle->modules[VAR_18]->ctx_index] = VAR_15;
        }

        if (VAR_20->create_loc_conf) {
            VAR_15 = VAR_20->create_loc_conf(VAR_11);
            if (VAR_15 == ((void*)0)) {
                return VAR_2;
            }

            VAR_22->loc_conf[VAR_11->cycle->modules[VAR_18]->ctx_index] = VAR_15;
        }
    }




    VAR_25 = VAR_22->srv_conf[VAR_9.ctx_index];
    VAR_25->ctx = VAR_22;


    VAR_27 = VAR_22->main_conf[VAR_9.ctx_index];

    VAR_26 = FUNC_2(&VAR_27->servers);
    if (VAR_26 == ((void*)0)) {
        return VAR_2;
    }

    *VAR_26 = VAR_25;




    VAR_19 = *VAR_11;
    VAR_11->ctx = VAR_22;
    VAR_11->cmd_type = VAR_5;

    VAR_14 = FUNC_3(VAR_11, ((void*)0));

    *VAR_11 = VAR_19;

    if (VAR_14 == VAR_3 && !VAR_25->listen) {
        FUNC_5(&VAR_24, sizeof(ngx_http_listen_opt_t));

        VAR_17 = FUNC_6(VAR_11->pool, sizeof(struct sockaddr_in));
        if (VAR_17 == ((void*)0)) {
            return VAR_2;
        }

        VAR_24.sockaddr = (struct sockaddr *) VAR_17;

        VAR_21 = (struct sockaddr_in *) VAR_17;

        VAR_21->sin_family = VAR_0;



        VAR_21->sin_port = FUNC_1((FUNC_0() == 0) ? 80 : 8000);

        VAR_21->sin_addr.s_addr = VAR_1;

        VAR_24.socklen = sizeof(struct sockaddr_in);

        VAR_24.backlog = VAR_7;
        VAR_24.rcvbuf = -1;
        VAR_24.sndbuf = -1;






        VAR_24.wildcard = 1;

        VAR_16 = VAR_6 + sizeof(":65535") - 1;

        VAR_17 = FUNC_7(VAR_11->pool, VAR_16);
        if (VAR_17 == ((void*)0)) {
            return VAR_2;
        }

        VAR_24.addr_text.data = VAR_17;
        VAR_24.addr_text.len = FUNC_8(VAR_24.sockaddr, VAR_24.socklen, VAR_17,
                                            VAR_16, 1);

        if (FUNC_4(VAR_11, VAR_25, &VAR_24) != VAR_8) {
            return VAR_2;
        }
    }

    return VAR_14;
}
