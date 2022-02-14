
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ alert_dispatch; } ;
struct TYPE_11__ {int shutdown; TYPE_2__ s3; TYPE_1__* method; scalar_t__ quiet_shutdown; } ;
struct TYPE_9__ {int (* ssl_dispatch_alert ) (TYPE_3__*) ;int (* ssl_read_bytes ) (TYPE_3__*,int ,int *,int *,int ,int ,size_t*) ;} ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*,int ,int *,int *,int ,int ,size_t*) ;

int FUNC_4(SSL *VAR_4)
{
    int VAR_5;





    if (VAR_4->quiet_shutdown || FUNC_0(VAR_4)) {
        VAR_4->shutdown = (VAR_3 | VAR_2);
        return 1;
    }

    if (!(VAR_4->shutdown & VAR_3)) {
        VAR_4->shutdown |= VAR_3;
        FUNC_1(VAR_4, VAR_0, VAR_1);




        if (VAR_4->s3.alert_dispatch)
            return -1;
    } else if (VAR_4->s3.alert_dispatch) {

        VAR_5 = VAR_4->method->ssl_dispatch_alert(VAR_4);
        if (VAR_5 == -1) {





            return VAR_5;
        }
    } else if (!(VAR_4->shutdown & VAR_2)) {
        size_t VAR_6;



        VAR_4->method->ssl_read_bytes(VAR_4, 0, ((void*)0), ((void*)0), 0, 0, &VAR_6);
        if (!(VAR_4->shutdown & VAR_2)) {
            return -1;
        }
    }

    if ((VAR_4->shutdown == (VAR_3 | VAR_2)) &&
        !VAR_4->s3.alert_dispatch)
        return 1;
    else
        return 0;
}
