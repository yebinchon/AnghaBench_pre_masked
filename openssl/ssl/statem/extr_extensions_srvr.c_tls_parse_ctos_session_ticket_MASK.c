
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_6__ {int session_ticket_cb_arg; int (* session_ticket_cb ) (TYPE_2__*,int ,int ,int ) ;} ;
struct TYPE_7__ {TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;

int FUNC_4(SSL *VAR_3, PACKET *VAR_4, unsigned int VAR_5,
                                  X509 *VAR_6, size_t VAR_7)
{
    if (VAR_3->ext.session_ticket_cb &&
            !VAR_3->ext.session_ticket_cb(VAR_3, FUNC_0(VAR_4),
                                  FUNC_1(VAR_4),
                                  VAR_3->ext.session_ticket_cb_arg)) {
        FUNC_2(VAR_3, VAR_1,
                 VAR_2, VAR_0);
        return 0;
    }

    return 1;
}
