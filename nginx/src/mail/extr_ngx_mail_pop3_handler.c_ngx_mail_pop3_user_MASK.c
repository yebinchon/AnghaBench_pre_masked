
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_9__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int data; int len; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_14__ {int len; int * data; } ;
struct TYPE_10__ {int nelts; TYPE_2__* elts; } ;
struct TYPE_12__ {int mail_state; TYPE_9__ login; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_13__ {int log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_9__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int * FUNC_3 (int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static ngx_int_t
FUNC_4(ngx_mail_session_t *VAR_5, ngx_connection_t *VAR_6)
{
    ngx_str_t *VAR_7;







    if (VAR_5->args.nelts != 1) {
        return VAR_2;
    }

    VAR_7 = VAR_5->args.elts;
    VAR_5->login.len = VAR_7[0].len;
    VAR_5->login.data = FUNC_3(VAR_6->pool, VAR_5->login.len);
    if (VAR_5->login.data == ((void*)0)) {
        return VAR_0;
    }

    FUNC_2(VAR_5->login.data, VAR_7[0].data, VAR_5->login.len);

    FUNC_0(VAR_1, VAR_6->log, 0,
                   "pop3 login: \"%V\"", &VAR_5->login);

    VAR_5->mail_state = VAR_4;

    return VAR_3;
}
