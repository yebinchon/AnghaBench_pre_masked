
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef size_t ngx_uint_t ;
struct TYPE_11__ {int * data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_10__ {TYPE_2__* elts; } ;
struct TYPE_12__ {TYPE_2__ login; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef scalar_t__ ngx_int_t ;
struct TYPE_13__ {int log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_2__*,TYPE_2__*) ;
 int FUNC_2 (int ,int ,int ,char*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ,char*) ;
 int * FUNC_4 (int ,int ) ;

ngx_int_t
FUNC_5(ngx_mail_session_t *VAR_5, ngx_connection_t *VAR_6,
    ngx_uint_t VAR_7)
{
    ngx_str_t *VAR_8;

    VAR_8 = VAR_5->args.elts;

    FUNC_2(VAR_1, VAR_6->log, 0,
                   "mail auth login username: \"%V\"", &VAR_8[VAR_7]);

    VAR_5->login.data = FUNC_4(VAR_6->pool, FUNC_0(VAR_8[VAR_7].len));
    if (VAR_5->login.data == ((void*)0)) {
        return VAR_0;
    }

    if (FUNC_1(&VAR_5->login, &VAR_8[VAR_7]) != VAR_4) {
        FUNC_3(VAR_2, VAR_6->log, 0,
            "client sent invalid base64 encoding in AUTH LOGIN command");
        return VAR_3;
    }

    FUNC_2(VAR_1, VAR_6->log, 0,
                   "mail auth login username: \"%V\"", &VAR_5->login);

    return VAR_4;
}
