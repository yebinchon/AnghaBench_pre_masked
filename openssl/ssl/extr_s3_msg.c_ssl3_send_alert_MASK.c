
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int alert_dispatch; int* send_alert; } ;
struct TYPE_11__ {scalar_t__ version; TYPE_3__* method; int rlayer; TYPE_2__ s3; int * session; int session_ctx; } ;
struct TYPE_10__ {int (* ssl_dispatch_alert ) (TYPE_4__*) ;TYPE_1__* ssl3_enc; } ;
struct TYPE_8__ {int (* alert_value ) (int) ;} ;
typedef TYPE_4__ SSL ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (int) ;

int FUNC_6(SSL *VAR_4, int VAR_5, int VAR_6)
{

    if (FUNC_2(VAR_4))
        VAR_6 = FUNC_5(VAR_6);
    else
        VAR_6 = VAR_4->method->ssl3_enc->alert_value(VAR_6);
    if (VAR_4->version == VAR_1 && VAR_6 == VAR_3)
        VAR_6 = VAR_2;

    if (VAR_6 < 0)
        return -1;

    if ((VAR_5 == VAR_0) && (VAR_4->session != ((void*)0)))
        FUNC_1(VAR_4->session_ctx, VAR_4->session);

    VAR_4->s3.alert_dispatch = 1;
    VAR_4->s3.send_alert[0] = VAR_5;
    VAR_4->s3.send_alert[1] = VAR_6;
    if (!FUNC_0(&VAR_4->rlayer)) {

        return VAR_4->method->ssl_dispatch_alert(VAR_4);
    }




    return -1;
}
