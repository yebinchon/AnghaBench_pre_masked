
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int chain; int verify_cb; struct TYPE_8__* parent; int param; int crls; int untrusted; int store; } ;
typedef TYPE_1__ X509_STORE_CTX ;
typedef int X509 ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int *,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_5(X509_STORE_CTX *VAR_0, X509 *VAR_1)
{
    X509_STORE_CTX VAR_2;
    int VAR_3;


    if (VAR_0->parent)
        return 0;
    if (!FUNC_1(&VAR_2, VAR_0->store, VAR_1, VAR_0->untrusted))
        return -1;

    VAR_2.crls = VAR_0->crls;

    FUNC_2(&VAR_2, VAR_0->param);

    VAR_2.parent = VAR_0;
    VAR_2.verify_cb = VAR_0->verify_cb;


    VAR_3 = FUNC_3(&VAR_2);
    if (VAR_3 <= 0)
        goto err;


    VAR_3 = FUNC_4(VAR_0, VAR_0->chain, VAR_2.chain);
 err:
    FUNC_0(&VAR_2);
    return VAR_3;
}
