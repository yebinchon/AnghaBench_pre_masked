
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* connection; } ;
typedef TYPE_2__ ngx_rtmp_session_t ;
struct TYPE_13__ {int update_evt; } ;
typedef TYPE_3__ ngx_rtmp_notify_ctx_t ;
struct TYPE_14__ {int update_timeout; scalar_t__ update_strict; } ;
typedef TYPE_4__ ngx_rtmp_notify_app_conf_t ;
typedef scalar_t__ ngx_int_t ;
typedef int ngx_chain_t ;
struct TYPE_11__ {int log; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ,char*,int ) ;
 int FUNC_2 (int ,int ,int ,char*) ;
 TYPE_4__* FUNC_3 (TYPE_2__*,int ) ;
 TYPE_3__* FUNC_4 (TYPE_2__*,int ) ;
 int VAR_4 ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_rtmp_session_t *VAR_5,
        void *VAR_6, ngx_chain_t *VAR_7)
{
    ngx_rtmp_notify_app_conf_t *VAR_8;
    ngx_rtmp_notify_ctx_t *VAR_9;
    ngx_int_t VAR_10;

    VAR_8 = FUNC_3(VAR_5, VAR_4);

    VAR_10 = FUNC_5(VAR_5, VAR_7);

    if ((!VAR_8->update_strict && VAR_10 == VAR_0) ||
         (VAR_8->update_strict && VAR_10 != VAR_3))
    {
        FUNC_2(VAR_2, VAR_5->connection->log, 0,
                      "notify: update failed");

        return VAR_0;
    }

    VAR_9 = FUNC_4(VAR_5, VAR_4);

    FUNC_1(VAR_1, VAR_5->connection->log, 0,
                   "notify: schedule update %Mms",
                   VAR_8->update_timeout);

    FUNC_0(&VAR_9->update_evt, VAR_8->update_timeout);

    return VAR_3;
}
