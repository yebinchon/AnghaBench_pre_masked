
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ ngx_int_t ;
struct TYPE_17__ {int pool; TYPE_1__* connection; struct TYPE_17__* main; } ;
typedef TYPE_2__ ngx_http_request_t ;
struct TYPE_18__ {scalar_t__ request_body; int * mirror; } ;
typedef TYPE_3__ ngx_http_mirror_loc_conf_t ;
struct TYPE_19__ {scalar_t__ status; } ;
typedef TYPE_4__ ngx_http_mirror_ctx_t ;
struct TYPE_16__ {int log; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,scalar_t__) ;
 TYPE_4__* FUNC_1 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_2 (TYPE_2__*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_4__*,int ) ;
 int FUNC_6 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_7 (int ,int) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_http_request_t *VAR_7)
{
    ngx_int_t VAR_8;
    ngx_http_mirror_ctx_t *VAR_9;
    ngx_http_mirror_loc_conf_t *VAR_10;

    if (VAR_7 != VAR_7->main) {
        return VAR_0;
    }

    VAR_10 = FUNC_2(VAR_7, VAR_6);

    if (VAR_10->mirror == ((void*)0)) {
        return VAR_0;
    }

    FUNC_6(VAR_4, VAR_7->connection->log, 0, "mirror handler");

    if (VAR_10->request_body) {
        VAR_9 = FUNC_1(VAR_7, VAR_6);

        if (VAR_9) {
            return VAR_9->status;
        }

        VAR_9 = FUNC_7(VAR_7->pool, sizeof(ngx_http_mirror_ctx_t));
        if (VAR_9 == ((void*)0)) {
            return VAR_2;
        }

        VAR_9->status = VAR_1;

        FUNC_5(VAR_7, VAR_9, VAR_6);

        VAR_8 = FUNC_4(VAR_7, VAR_5);
        if (VAR_8 >= VAR_3) {
            return VAR_8;
        }

        FUNC_0(VAR_7, VAR_1);
        return VAR_1;
    }

    return FUNC_3(VAR_7);
}
