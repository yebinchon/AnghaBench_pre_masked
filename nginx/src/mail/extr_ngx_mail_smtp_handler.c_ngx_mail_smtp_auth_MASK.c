
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int auth_methods; } ;
typedef TYPE_3__ ngx_mail_smtp_srv_conf_t ;
struct TYPE_13__ {int * data; } ;
struct TYPE_12__ {scalar_t__ nelts; } ;
struct TYPE_15__ {int mail_state; int out; TYPE_2__ salt; scalar_t__ state; TYPE_1__ args; } ;
typedef TYPE_4__ ngx_mail_session_t ;
typedef int ngx_mail_core_srv_conf_t ;
typedef int ngx_int_t ;
typedef int ngx_connection_t ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_4__*,int *,char*,int) ;
 int FUNC_1 (TYPE_4__*,int *,int) ;
 int FUNC_2 (TYPE_4__*,int *) ;
 int VAR_5 ;
 void* FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (TYPE_4__*,int *,int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (TYPE_4__*,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_6 (int *,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_mail_session_t *VAR_16, ngx_connection_t *VAR_17)
{
    ngx_int_t VAR_18;
    ngx_mail_core_srv_conf_t *VAR_19;
    ngx_mail_smtp_srv_conf_t *VAR_20;







    if (VAR_16->args.nelts == 0) {
        FUNC_6(&VAR_16->out, VAR_12);
        VAR_16->state = 0;
        return VAR_4;
    }

    VAR_20 = FUNC_3(VAR_16, VAR_6);

    VAR_18 = FUNC_2(VAR_16, VAR_17);

    switch (VAR_18) {

    case 130:

        FUNC_6(&VAR_16->out, VAR_15);
        VAR_16->mail_state = VAR_10;

        return VAR_4;

    case 129:

        FUNC_6(&VAR_16->out, VAR_14);
        VAR_16->mail_state = VAR_9;

        return FUNC_1(VAR_16, VAR_17, 1);

    case 128:

        FUNC_6(&VAR_16->out, VAR_13);
        VAR_16->mail_state = VAR_11;

        return VAR_4;

    case 132:

        if (!(VAR_20->auth_methods & VAR_1)) {
            return VAR_3;
        }

        if (VAR_16->salt.data == ((void*)0)) {
            VAR_19 = FUNC_3(VAR_16, VAR_5);

            if (FUNC_4(VAR_16, VAR_17, VAR_19) != VAR_4) {
                return VAR_0;
            }
        }

        if (FUNC_0(VAR_16, VAR_17, "334 ", 4) == VAR_4) {
            VAR_16->mail_state = VAR_7;
            return VAR_4;
        }

        return VAR_0;

    case 131:

        if (!(VAR_20->auth_methods & VAR_2)) {
            return VAR_3;
        }

        FUNC_6(&VAR_16->out, VAR_15);
        VAR_16->mail_state = VAR_8;

        return VAR_4;
    }

    return VAR_18;
}
