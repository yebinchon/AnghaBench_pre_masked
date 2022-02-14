
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* cert; } ;
struct TYPE_4__ {int * psk_identity_hint; } ;
typedef TYPE_2__ SSL_CTX ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (char const*) ;

int FUNC_4(SSL_CTX *VAR_3, const char *VAR_4)
{
    if (VAR_4 != ((void*)0) && FUNC_3(VAR_4) > VAR_0) {
        FUNC_2(VAR_1, VAR_2);
        return 0;
    }
    FUNC_0(VAR_3->cert->psk_identity_hint);
    if (VAR_4 != ((void*)0)) {
        VAR_3->cert->psk_identity_hint = FUNC_1(VAR_4);
        if (VAR_3->cert->psk_identity_hint == ((void*)0))
            return 0;
    } else
        VAR_3->cert->psk_identity_hint = ((void*)0);
    return 1;
}
