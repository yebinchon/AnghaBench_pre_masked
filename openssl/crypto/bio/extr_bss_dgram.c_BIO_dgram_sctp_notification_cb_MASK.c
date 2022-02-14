
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* notification_context; int * handle_notifications; } ;
typedef TYPE_1__ bio_dgram_sctp_data ;
struct TYPE_5__ {scalar_t__ ptr; } ;
typedef int * BIO_dgram_sctp_notification_handler_fn ;
typedef TYPE_2__ BIO ;



int FUNC_0(BIO *VAR_0,
                BIO_dgram_sctp_notification_handler_fn VAR_1,
                void *VAR_2)
{
    bio_dgram_sctp_data *VAR_3 = (bio_dgram_sctp_data *) VAR_0->ptr;

    if (VAR_1 != ((void*)0)) {
        VAR_3->handle_notifications = VAR_1;
        VAR_3->notification_context = VAR_2;
    } else
        return -1;

    return 0;
}
