
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {void (* msg_callback ) (int,int,int,void const*,size_t,TYPE_2__*,void*) ;TYPE_1__* method; } ;
struct TYPE_5__ {long (* ssl_callback_ctrl ) (TYPE_2__*,int,void (*) ()) ;} ;
typedef TYPE_2__ SSL ;



 long FUNC_0 (TYPE_2__*,int,void (*) ()) ;

long FUNC_1(SSL *VAR_0, int VAR_1, void (*VAR_2) (void))
{
    switch (VAR_1) {
    case 128:
        VAR_0->msg_callback = (void (*)
                           (int VAR_3, int VAR_4, int VAR_5,
                            const void *VAR_6, size_t VAR_7, SSL *VAR_8,
                            void *VAR_9))(VAR_2);
        return 1;

    default:
        return VAR_0->method->ssl_callback_ctrl(VAR_0, VAR_1, VAR_2);
    }
}
