
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_1__* session_ctx; int version; } ;
struct TYPE_8__ {unsigned int session_id_length; int session_id; int ssl_version; } ;
struct TYPE_7__ {int lock; int sessions; } ;
typedef TYPE_2__ SSL_SESSION ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (int ,TYPE_2__*) ;
 int FUNC_3 (int ,unsigned char const*,unsigned int) ;

int FUNC_4(const SSL *VAR_0, const unsigned char *VAR_1,
                                unsigned int VAR_2)
{







    SSL_SESSION VAR_3, *VAR_4;

    if (VAR_2 > sizeof(VAR_3.session_id))
        return 0;

    VAR_3.ssl_version = VAR_0->version;
    VAR_3.session_id_length = VAR_2;
    FUNC_3(VAR_3.session_id, VAR_1, VAR_2);

    FUNC_0(VAR_0->session_ctx->lock);
    VAR_4 = FUNC_2(VAR_0->session_ctx->sessions, &VAR_3);
    FUNC_1(VAR_0->session_ctx->lock);
    return (VAR_4 != ((void*)0));
}
