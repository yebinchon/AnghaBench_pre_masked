
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_9__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ len; int data; } ;
typedef TYPE_2__ ngx_str_t ;
struct TYPE_17__ {scalar_t__ len; int * data; } ;
struct TYPE_12__ {scalar_t__ len; int * data; } ;
struct TYPE_13__ {int nelts; TYPE_2__* elts; } ;
struct TYPE_15__ {TYPE_9__ login; TYPE_10__ passwd; TYPE_1__ args; } ;
typedef TYPE_3__ ngx_mail_session_t ;
typedef int ngx_int_t ;
struct TYPE_16__ {int log; int pool; } ;
typedef TYPE_4__ ngx_connection_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,char*,TYPE_9__*) ;
 int FUNC_1 (int ,int ,int ,char*,TYPE_9__*,TYPE_10__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,TYPE_4__*) ;
 int FUNC_3 (int *,int ,scalar_t__) ;
 void* FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static ngx_int_t
FUNC_5(ngx_mail_session_t *VAR_4, ngx_connection_t *VAR_5)
{
    ngx_str_t *VAR_6;







    VAR_6 = VAR_4->args.elts;

    if (VAR_4->args.nelts != 2 || VAR_6[0].len == 0) {
        return VAR_3;
    }

    VAR_4->login.len = VAR_6[0].len;
    VAR_4->login.data = FUNC_4(VAR_5->pool, VAR_4->login.len);
    if (VAR_4->login.data == ((void*)0)) {
        return VAR_1;
    }

    FUNC_3(VAR_4->login.data, VAR_6[0].data, VAR_4->login.len);

    VAR_4->passwd.len = VAR_6[1].len;
    VAR_4->passwd.data = FUNC_4(VAR_5->pool, VAR_4->passwd.len);
    if (VAR_4->passwd.data == ((void*)0)) {
        return VAR_1;
    }

    FUNC_3(VAR_4->passwd.data, VAR_6[1].data, VAR_4->passwd.len);






    FUNC_0(VAR_2, VAR_5->log, 0,
                   "imap login:\"%V\"", &VAR_4->login);


    return VAR_0;
}
