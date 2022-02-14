
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_10__ {TYPE_1__* session_ticket; } ;
struct TYPE_13__ {TYPE_4__* session; TYPE_2__ ext; int new_session; } ;
struct TYPE_11__ {size_t ticklen; int * tick; } ;
struct TYPE_12__ {scalar_t__ ssl_version; TYPE_3__ ext; } ;
struct TYPE_9__ {size_t length; int * data; } ;
typedef TYPE_5__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (size_t) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (TYPE_5__*,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *,int *,size_t) ;
 int FUNC_5 (TYPE_5__*) ;

EXT_RETURN FUNC_6(SSL *VAR_8, WPACKET *VAR_9,
                                             unsigned int VAR_10, X509 *VAR_11,
                                             size_t VAR_12)
{
    size_t VAR_13;

    if (!FUNC_5(VAR_8))
        return VAR_2;

    if (!VAR_8->new_session && VAR_8->session != ((void*)0)
            && VAR_8->session->ext.tick != ((void*)0)
            && VAR_8->session->ssl_version != VAR_6) {
        VAR_13 = VAR_8->session->ext.ticklen;
    } else if (VAR_8->session && VAR_8->ext.session_ticket != ((void*)0)
               && VAR_8->ext.session_ticket->data != ((void*)0)) {
        VAR_13 = VAR_8->ext.session_ticket->length;
        VAR_8->session->ext.tick = FUNC_0(VAR_13);
        if (VAR_8->session->ext.tick == ((void*)0)) {
            FUNC_1(VAR_8, VAR_4,
                     VAR_5,
                     VAR_0);
            return VAR_1;
        }
        FUNC_4(VAR_8->session->ext.tick,
               VAR_8->ext.session_ticket->data, VAR_13);
        VAR_8->session->ext.ticklen = VAR_13;
    } else {
        VAR_13 = 0;
    }

    if (VAR_13 == 0 && VAR_8->ext.session_ticket != ((void*)0) &&
            VAR_8->ext.session_ticket->data == ((void*)0))
        return VAR_2;

    if (!FUNC_2(VAR_9, VAR_7)
            || !FUNC_3(VAR_9, VAR_8->session->ext.tick, VAR_13)) {
        FUNC_1(VAR_8, VAR_4,
                 VAR_5, VAR_0);
        return VAR_1;
    }

    return VAR_3;
}
