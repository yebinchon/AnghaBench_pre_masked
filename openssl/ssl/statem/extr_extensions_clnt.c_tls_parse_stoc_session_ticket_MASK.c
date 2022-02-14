
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {int ticket_expected; int session_ticket_cb_arg; int (* session_ticket_cb ) (TYPE_2__*,int ,scalar_t__,int ) ;} ;
struct TYPE_8__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,scalar_t__,int ) ;
 int FUNC_4 (TYPE_2__*) ;

int FUNC_5(SSL *VAR_5, PACKET *VAR_6, unsigned int VAR_7,
                                  X509 *VAR_8, size_t VAR_9)
{
    if (VAR_5->ext.session_ticket_cb != ((void*)0) &&
        !VAR_5->ext.session_ticket_cb(VAR_5, FUNC_0(VAR_6),
                              FUNC_1(VAR_6),
                              VAR_5->ext.session_ticket_cb_arg)) {
        FUNC_2(VAR_5, VAR_1,
                 VAR_3, VAR_4);
        return 0;
    }

    if (!FUNC_4(VAR_5)) {
        FUNC_2(VAR_5, VAR_2,
                 VAR_3, VAR_4);
        return 0;
    }
    if (FUNC_1(VAR_6) > 0) {
        FUNC_2(VAR_5, VAR_0,
                 VAR_3, VAR_4);
        return 0;
    }

    VAR_5->ext.ticket_expected = 1;

    return 1;
}
