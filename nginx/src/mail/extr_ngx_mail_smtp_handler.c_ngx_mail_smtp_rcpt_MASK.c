
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ len; scalar_t__ data; } ;
typedef TYPE_4__ ngx_str_t ;
struct TYPE_16__ {int * data; scalar_t__ len; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {int nelts; TYPE_4__* elts; } ;
struct TYPE_10__ {scalar_t__ len; } ;
struct TYPE_14__ {int auth_method; TYPE_9__ smtp_to; TYPE_3__ cmd; TYPE_2__ args; int out; TYPE_1__ smtp_from; } ;
typedef TYPE_5__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_15__ {int log; int pool; } ;
typedef TYPE_6__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_9__*) ;
 int FUNC_1 (int *,scalar_t__,scalar_t__) ;
 int * FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_mail_session_t *VAR_7, ngx_connection_t *VAR_8)
{
    ngx_str_t *VAR_9, VAR_10;

    if (VAR_7->smtp_from.len == 0) {
        FUNC_3(&VAR_7->out, VAR_5);
        return VAR_4;
    }

    if (VAR_7->args.nelts == 0) {
        FUNC_3(&VAR_7->out, VAR_6);
        return VAR_4;
    }

    VAR_9 = VAR_7->args.elts;
    VAR_9 += VAR_7->args.nelts - 1;

    VAR_10.len = VAR_9->data + VAR_9->len - VAR_7->cmd.data;
    VAR_10.data = VAR_7->cmd.data;

    VAR_7->smtp_to.len = VAR_10.len;

    VAR_7->smtp_to.data = FUNC_2(VAR_8->pool, VAR_10.len);
    if (VAR_7->smtp_to.data == ((void*)0)) {
        return VAR_1;
    }

    FUNC_1(VAR_7->smtp_to.data, VAR_10.data, VAR_10.len);

    FUNC_0(VAR_2, VAR_8->log, 0,
                   "smtp rcpt to:\"%V\"", &VAR_7->smtp_to);

    VAR_7->auth_method = VAR_3;

    return VAR_0;
}
