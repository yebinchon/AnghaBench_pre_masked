
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ nelts; } ;
struct TYPE_12__ {int mail_state; int out; scalar_t__ state; TYPE_1__ args; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_13__ {int auth_methods; int auth_capability; } ;
typedef TYPE_3__ ngx_mail_pop3_srv_conf_t ;
typedef int ngx_int_t ;
typedef int ngx_connection_t ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int *,char*,int) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 TYPE_3__* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (TYPE_2__*,int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (int *,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static ngx_int_t
FUNC_6(ngx_mail_session_t *VAR_14, ngx_connection_t *VAR_15)
{
    ngx_int_t VAR_16;
    ngx_mail_pop3_srv_conf_t *VAR_17;







    VAR_17 = FUNC_3(VAR_14, VAR_5);

    if (VAR_14->args.nelts == 0) {
        VAR_14->out = VAR_17->auth_capability;
        VAR_14->state = 0;

        return VAR_4;
    }

    VAR_16 = FUNC_2(VAR_14, VAR_15);

    switch (VAR_16) {

    case 130:

        FUNC_5(&VAR_14->out, VAR_13);
        VAR_14->mail_state = VAR_9;

        return VAR_4;

    case 129:

        FUNC_5(&VAR_14->out, VAR_12);
        VAR_14->mail_state = VAR_8;

        return FUNC_1(VAR_14, VAR_15, 1);

    case 128:

        FUNC_5(&VAR_14->out, VAR_11);
        VAR_14->mail_state = VAR_10;

        return VAR_4;

    case 132:

        if (!(VAR_17->auth_methods & VAR_1)) {
            return VAR_3;
        }

        if (FUNC_0(VAR_14, VAR_15, "+ ", 2) == VAR_4) {
            VAR_14->mail_state = VAR_6;
            return VAR_4;
        }

        return VAR_0;

    case 131:

        if (!(VAR_17->auth_methods & VAR_2)) {
            return VAR_3;
        }

        FUNC_5(&VAR_14->out, VAR_13);
        VAR_14->mail_state = VAR_7;

        return VAR_4;
    }

    return VAR_16;
}
