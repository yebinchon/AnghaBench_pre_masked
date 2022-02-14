
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_14__ {scalar_t__ chain; } ;
struct TYPE_13__ {TYPE_1__* cert; } ;
struct TYPE_12__ {TYPE_2__* cert; } ;
struct TYPE_11__ {TYPE_5__* key; } ;
struct TYPE_10__ {TYPE_5__* key; } ;
typedef TYPE_3__ SSL_CTX ;
typedef TYPE_4__ SSL ;
typedef TYPE_5__ CERT_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (scalar_t__,int *) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int *,int ,int ) ;

int FUNC_4(SSL *VAR_1, SSL_CTX *VAR_2, X509 *VAR_3)
{
    int VAR_4;
    CERT_PKEY *VAR_5 = VAR_1 ? VAR_1->cert->key : VAR_2->cert->key;
    if (!VAR_5)
        return 0;
    VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_3, 0, 0);
    if (VAR_4 != 1) {
        FUNC_0(VAR_0, VAR_4);
        return 0;
    }
    if (!VAR_5->chain)
        VAR_5->chain = FUNC_1();
    if (!VAR_5->chain || !FUNC_2(VAR_5->chain, VAR_3))
        return 0;
    return 1;
}
