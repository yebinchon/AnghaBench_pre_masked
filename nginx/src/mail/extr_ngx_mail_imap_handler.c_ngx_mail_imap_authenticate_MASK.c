
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int * data; } ;
struct TYPE_12__ {int mail_state; int out; TYPE_1__ salt; } ;
typedef TYPE_2__ ngx_mail_session_t ;
struct TYPE_13__ {int auth_methods; } ;
typedef TYPE_3__ ngx_mail_imap_srv_conf_t ;
typedef int ngx_mail_core_srv_conf_t ;
typedef int ngx_int_t ;
typedef int ngx_connection_t ;


 int VAR_0 ;

 int VAR_1 ;

 int VAR_2 ;



 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (TYPE_2__*,int *,char*,int) ;
 int FUNC_1 (TYPE_2__*,int *,int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int VAR_13 ;
 void* FUNC_3 (TYPE_2__*,int ) ;
 int VAR_14 ;
 int FUNC_4 (TYPE_2__*,int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *) ;
 int FUNC_6 (int *,int ) ;

__attribute__((used)) static ngx_int_t
FUNC_7(ngx_mail_session_t *VAR_15, ngx_connection_t *VAR_16)
{
    ngx_int_t VAR_17;
    ngx_mail_core_srv_conf_t *VAR_18;
    ngx_mail_imap_srv_conf_t *VAR_19;







    VAR_19 = FUNC_3(VAR_15, VAR_14);

    VAR_17 = FUNC_2(VAR_15, VAR_16);

    switch (VAR_17) {

    case 130:

        FUNC_6(&VAR_15->out, VAR_7);
        VAR_15->mail_state = VAR_11;

        return VAR_4;

    case 129:

        FUNC_6(&VAR_15->out, VAR_5);
        VAR_15->mail_state = VAR_10;

        return FUNC_1(VAR_15, VAR_16, 1);

    case 128:

        FUNC_6(&VAR_15->out, VAR_6);
        VAR_15->mail_state = VAR_12;

        return VAR_4;

    case 132:

        if (!(VAR_19->auth_methods & VAR_1)) {
            return VAR_3;
        }

        if (VAR_15->salt.data == ((void*)0)) {
            VAR_18 = FUNC_3(VAR_15, VAR_13);

            if (FUNC_4(VAR_15, VAR_16, VAR_18) != VAR_4) {
                return VAR_0;
            }
        }

        if (FUNC_0(VAR_15, VAR_16, "+ ", 2) == VAR_4) {
            VAR_15->mail_state = VAR_8;
            return VAR_4;
        }

        return VAR_0;

    case 131:

        if (!(VAR_19->auth_methods & VAR_2)) {
            return VAR_3;
        }

        FUNC_6(&VAR_15->out, VAR_7);
        VAR_15->mail_state = VAR_9;

        return VAR_4;
    }

    return VAR_17;
}
