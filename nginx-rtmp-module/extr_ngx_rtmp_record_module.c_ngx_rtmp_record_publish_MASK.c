
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef char u_char ;
struct TYPE_19__ {TYPE_1__* connection; scalar_t__ auto_pushed; } ;
typedef TYPE_3__ ngx_rtmp_session_t ;
struct TYPE_20__ {char* name; char* args; } ;
typedef TYPE_4__ ngx_rtmp_record_ctx_t ;
struct TYPE_18__ {scalar_t__ nelts; } ;
struct TYPE_21__ {TYPE_2__ rec; } ;
typedef TYPE_5__ ngx_rtmp_record_app_conf_t ;
struct TYPE_22__ {int args; int name; } ;
typedef TYPE_6__ ngx_rtmp_publish_t ;
typedef int ngx_int_t ;
struct TYPE_17__ {int log; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_3__*,TYPE_6__*) ;
 int FUNC_1 (int ,int ,int ,char*,scalar_t__) ;
 int FUNC_2 (char*,int ,int) ;
 scalar_t__ FUNC_3 (char) ;
 TYPE_5__* FUNC_4 (TYPE_3__*,int ) ;
 TYPE_4__* FUNC_5 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static ngx_int_t
FUNC_8(ngx_rtmp_session_t *VAR_4, ngx_rtmp_publish_t *VAR_5)
{
    ngx_rtmp_record_app_conf_t *VAR_6;
    ngx_rtmp_record_ctx_t *VAR_7;
    u_char *VAR_8;

    if (VAR_4->auto_pushed) {
        goto next;
    }

    VAR_6 = FUNC_4(VAR_4, VAR_3);

    if (VAR_6 == ((void*)0) || VAR_6->rec.nelts == 0) {
        goto next;
    }

    if (FUNC_6(VAR_4) != VAR_2) {
        return VAR_0;
    }

    FUNC_1(VAR_1, VAR_4->connection->log, 0,
                   "record: publish %ui nodes",
                   VAR_6->rec.nelts);

    VAR_7 = FUNC_5(VAR_4, VAR_3);

    FUNC_2(VAR_7->name, VAR_5->name, sizeof(VAR_7->name));
    FUNC_2(VAR_7->args, VAR_5->args, sizeof(VAR_7->args));


    for (VAR_8 = VAR_7->name; *VAR_8; ++VAR_8) {
        if (FUNC_3(VAR_8[0]) &&
            VAR_8[1] == '.' && VAR_8[2] == '.' &&
            FUNC_3(VAR_8[3]))
        {
            *VAR_8 = 0;
            break;
        }
    }

    FUNC_7(VAR_4);

next:
    return FUNC_0(VAR_4, VAR_5);
}
