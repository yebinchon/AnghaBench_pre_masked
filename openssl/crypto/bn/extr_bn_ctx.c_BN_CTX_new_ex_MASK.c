
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * libctx; int stack; int pool; } ;
typedef int OPENSSL_CTX ;
typedef TYPE_1__ BN_CTX ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 TYPE_1__* FUNC_3 (int) ;

BN_CTX *FUNC_4(OPENSSL_CTX *VAR_2)
{
    BN_CTX *VAR_3;

    if ((VAR_3 = FUNC_3(sizeof(*VAR_3))) == ((void*)0)) {
        FUNC_2(VAR_0, VAR_1);
        return ((void*)0);
    }

    FUNC_0(&VAR_3->pool);
    FUNC_1(&VAR_3->stack);
    VAR_3->libctx = VAR_2;
    return VAR_3;
}
